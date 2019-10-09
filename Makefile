all: main_c main_s
main_c: main_c.cpp Solicitud.o
	g++ main_c.cpp Solicitud.o -o main_c
main_s: main_s.cpp Respuesta.o
	g++ main_s.cpp Respuesta.o -o main_s
Solicitud.o: Solicitud.cpp Solicitud.h SocketDatagrama.o mensaje.h
	g++ Solicitud.cpp -c
Respuesta.o: Respuesta.cpp Respuesta.h SocketDatagrama.o mensaje.h
	g++ Respuesta.cpp -c
SocketDatagrama.o: SocketDatagrama.cpp SocketDatagrama.h PaqueteDatagrama.o mensaje.h
	g++ SocketDatagrama.cpp -c
PaqueteDatagrama.o: PaqueteDatagrama.cpp PaqueteDatagrama.h mensaje.h
	g++ PaqueteDatagrama.cpp -c
	