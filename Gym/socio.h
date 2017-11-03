#ifndef SOCIO_H_INCLUDED
#define SOCIO_H_INCLUDED


struct
{
    int    id;
    char   nombre[51];
    char  apellido[51];
    int   status;
    char  dni[10];

}typedef sSocio;



#endif // SOCIO_H_INCLUDED


void soc_delete(sSocio* pSocio);
char* soc_getNombre(sSocio* pSocio);
int soc_setNombre(sSocio* pSocio, char *nombre);
int soc_setApellido(sSocio* pSocio, char *apellido);
char* soc_getApellido(sSocio* pSocio);
int soc_setId(sSocio* pSocio, int id);
int soc_getId(sSocio* pSocio);
