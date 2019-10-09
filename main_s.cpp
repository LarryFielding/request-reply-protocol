#include "Respuesta.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    cout << "Soy servidor" << endl;


	Respuesta respuesta = Respuesta(7200);
    

    while(1)
    {
       respuesta.getRequest();

    }
    
	return 0;
}
