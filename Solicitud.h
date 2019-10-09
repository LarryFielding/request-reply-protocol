#ifndef SOLICITUD_H_
#define SOLICITUD_H_

#include "SocketDatagrama.h"

class Solicitud
{
public:
	Solicitud();

	~Solicitud();
	
	char * doOperation(char *IP, int puerto, int operationId, char *arguments);

private:
	SocketDatagrama * socketLocal;

	unsigned int msjId;
};


#endif