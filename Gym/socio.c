#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validar.h"
#include "interfaz.h"
#include "ArrayList.h"
#include "socio.h"


sSocio* soc_new(void)
{
    return malloc(sizeof(sSocio));       //busco la cantidad de memoria que necesito y devuelvo el puntero
}

sSocio* soc_newContructor(char *nombre,char *apellido, int id)   //es igual a la new pero tambien carga los datos
{
    sSocio* pSocio = malloc(sizeof(sSocio));
    if (pSocio!=NULL)
    {
        soc_setNombre(pSocio,nombre);
        soc_setApellido(pSocio,apellido);
        soc_setId(pSocio,id);
    }
    return pSocio;
}

int al_add(ArrayList* pArray,void *element);

void soc_delete(sSocio* pSocio)
{
    if (pSocio != NULL)
        free(pSocio);
}

char* soc_getNombre(sSocio* pSocio)
{
    char* retorno= NULL;
    if (pSocio != NULL)
    {
        retorno = pSocio->nombre;

    }
    return retorno;
}



int soc_setNombre(sSocio* pSocio, char *nombre)
{
    int retorno = -1;
    if (pSocio != NULL)
    {
        retorno = 0;
        strncpy(pSocio->nombre,nombre,51);
    }
    return retorno;
}

int soc_setApellido(sSocio* pSocio, char *apellido)
{
    int retorno = -1;
    if (pSocio != NULL)
    {
        retorno = 0;
        strncpy(pSocio->apellido,apellido,51);
    }
    return retorno;
}

char* soc_getApellido(sSocio* pSocio)
{
    char* retorno= NULL;
    if (pSocio != NULL)
    {
        retorno = pSocio->apellido;

    }
    return retorno;
}

int soc_setId(sSocio* pSocio, int id)
{
    int retorno = -1;
    if (pSocio != NULL)
    {
        retorno = 0;
        pSocio->id = id;
    }
    return retorno;
}


int soc_getId(sSocio* pSocio)
{
    int retorno =-1;
    if (pSocio != NULL)
    {
        retorno = pSocio->id;

    }
    return retorno;
}




