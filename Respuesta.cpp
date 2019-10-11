#include "Respuesta.h"

#include "PaqueteDatagrama.h"
#include "SocketDatagrama.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


Respuesta::Respuesta(int pl)
{
	socketLocal = new SocketDatagrama(7200);
}

struct mensaje * Respuesta::getRequest(void)
{
	struct mensaje * msj = new mensaje;

	int bytes_recv, bytes_env;

	PaqueteDatagrama paquete_recv = PaqueteDatagrama(MAX_BUFF_TAM);
	bytes_recv = socketLocal->recibeRespuesta(paquete_recv);

	if (bytes_recv >= 0)
    {
        char * ipRemota = paquete_recv.obtieneDireccion();
        int puertoRemoto = paquete_recv.obtienePuerto();
        cout << "Bytes recibidos: " << bytes_recv << endl;
        cout << "Recibido desde ip: " <<  ipRemota << endl;
        cout << "Con puerto: " << puertoRemoto << endl;

        // Obtener numeros de la cadena y operarlos

        cout << "Argumentos: " << paquete_recv.obtieneMensaje()->requestId << endl;

        //PaqueteDatagrama paquete_env = PaqueteDatagrama(crespuesta, tam, ipRemota, puertoRemoto);
        //bytes_env = socket.envia(paquete_env);
    }

	return msj;
}

void Respuesta::sendReply(char * respuesta)
{
	//
}
