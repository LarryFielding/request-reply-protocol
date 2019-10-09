#all: main_c main_s
main_c: main_c.cpp Solicitud.o SocketDatagrama.o PaqueteDatagrama.o
	g++ main_c.cpp Solicitud.o SocketDatagrama.o PaqueteDatagrama.o -o main_c
main_s: main_s.cpp Respuesta.o SocketDatagrama.o PaqueteDatagrama.o
	g++ main_s.cpp Respuesta.o SocketDatagrama.o PaqueteDatagrama.o -o main_s
Solicitud.o: Solicitud.cpp Solicitud.h mensaje.h SocketDatagrama.o PaqueteDatagrama.o
	g++ Solicitud.cpp -c
Respuesta.o: Respuesta.cpp Respuesta.h SocketDatagrama.o PaqueteDatagrama.o
	g++ Respuesta.cpp -c
SocketDatagrama.o: SocketDatagrama.cpp SocketDatagrama.h PaqueteDatagrama.o
	g++ SocketDatagrama.cpp -c
PaqueteDatagrama.o: PaqueteDatagrama.cpp PaqueteDatagrama.h
	g++ PaqueteDatagrama.cpp -c
	