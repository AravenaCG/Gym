#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validar.h"
#include "socio.h"
#include "ArrayList.h"

void menu( )
{

    int menuOpcionElegida;
    char  menuPrinsipalMensaje[]=
    "\n1-Alta de Socio\
                 \n2-Baja de Socio\
                 \n3-Modificar Socio\
                 \n4-Listar Socios\
                 \n\
                 \n\
                 \n\
                 \n9-Salir '*'\
                 \nIngrese opcion: ";

    char menuPrinsipalMensajeError[] = "\nSe debe elegir una opcion del 1 al 9";


    do
    {

        menuOpcionElegida = 0;
        getValidIntWOpcion(menuPrinsipalMensaje,menuPrinsipalMensajeError, &menuOpcionElegida, 0, 9, 2 );

        switch(menuOpcionElegida)
        {
        case 1: // ALTA SOCIO

            break;
        case 2: //  BAJA SOCIO

            break;
        case 3: // MODIFICAR SOCIO

            break;
        case 4: //  LISTAR SOCIOS

            break;



        case 9:
            //SALIR
            break;
        default:
            printf("\nNO ES UNA OPCION VALIDA!!!\n\n");
            pause("Ingrese una Maldita Opcion");
            break;
        }

    }
    while(menuOpcionElegida != '*');


}
