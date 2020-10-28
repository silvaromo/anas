/******************************************************************************
ESTACIONAMIENTO
MENU:
1. ingresar
2. salir
3.cantidad de espacios OCUPADOS
3.cuanto dinero hay si cuesta 10 cada que entra
*******************************************************************************/
#include <stdio.h>
#include "GENFUN.H"

int main(void)
{
    uint8 espacios_dispo[TOTAL]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    uint8 opcion=0, entrar=0,num2=0, x=0,i,resultado;
    uint8 *punt;
    punt=&espacios_dispo[0];
    do{
        printf("\n-------------------------------------\n");
        printf("\nBIENVENIDO AL ESTACIONAMIENTO: MENU\n\n");
        printf("1.ENTRAR A UN ESPACIO\n");
        printf("2.CANTIDAD DE ESPACIOS OCUPADOS\n");
        printf("3.DINERO RECAUDADO\n");
        printf("4.SALIR DE ESTACIONAMIENTO\n");
        printf("0.salir\n");
        printf("OPCION A ESCOGER\n");
        scanf("%i", &opcion);
        printf("-------------------------------------\n");
        
        switch(opcion){
            case 1: //ingresar el carro 
                    printf("Ingrese cantidad de carros");
                    scanf("%i", &x);
                    printf("\n|Bienvenido|");
                    for(i=0;i<TOTAL && x>0;i++)
                    {
                        if(*punt!=0)
                        {
                            *punt=0;
                            x--;
                            punt++;
                        }
                    }
                break;
            case 2: //carros adentro
                    printf("cantidad de carros que tenemos son %i", punt-&espacios_dispo[0]); //ampersand para dar direccion  
                break;
            case 3:
                    printf("la cantidad de dinero obtenida hoy es de: %i", (punt-&espacios_dispo[0])*10);
                break;
            case 4:
                printf("Gracias por su visita, vuelva pronto\n");
                 printf("El 0 es espacio ocupado y los números a partis de 0 están disponibles\n");
                 vista_aerea(espacios_dispo);
                    
            }
            
    }while(opcion>=0);
    
    return 0;
}
void vista_aerea(int u8espacios_dispo[])
{
    uint8 i,vista=0;
    for(i=0;i<TOTAL;i++)
    {
        printf("%i ", espacios_dispo[i]);
    }
}

