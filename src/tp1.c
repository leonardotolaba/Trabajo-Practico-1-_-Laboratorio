#include <stdio.h>
#include <stdlib.h>
#define SIN_INGRESO 0
#define UN_INGRESO 1
#define DOS_INGRESO 2
#define REALIZADO 3
#include "prototipos.h"
int main()
{
    int x = 0.00;
    int y = 0.00;
    int opcion;
    int flagIngreso = SIN_INGRESO;
    char respuesta = 's';
    int resSUMA;
    int resRESTA;
    float resDIVISION;
    int resPRODUCTO;
    long int resFACTORIALx = 0;
    long int resFACTORIALy = 0;
    int flagrepetidoa = 0;
    int flagrepetidob = 0;
    int flagerror = 0;
    int flagdesbordea = 0;
    int flagdesbordeb = 0;
    setbuf(stdout, NULL);
    system("cls");
    do
    {

        opcion = menu(x, y);
        switch(opcion)
        {
        case 1:

            if(flagrepetidoa == 0)
            {
                system("cls");
                printf("Usted selecciono la opcion 1.\n");
                printf("Ingrese el 1er operando: \n");
                scanf("%d", &x);
                flagIngreso = UN_INGRESO;
                flagrepetidoa = 1;
                system("cls");
            }
            else
            {
                printf("Usted ya ingreso el 1er operando.\n");
                system("pause");
                system("cls");
            }
            break;
        case 2:
            if(flagIngreso == SIN_INGRESO)
            {
                printf("Error. Debe ingresar el 1er operando primero.\n");
                system("pause");
                system("cls");
            }
            else
            {
                if(flagrepetidob == 0)
                {
                    system("cls");
                    printf("Usted selecciono la opcion 2.\n");
                    printf("Ingrese el 2do operando: \n");
                    scanf("%d", &y);
                    flagIngreso = DOS_INGRESO;
                    flagrepetidob = 1;
                    system("cls");
                }
                else
                {
                    printf("Usted ya ingreso el 2do operando. \n");
                    system("pause");
                    system("cls");
                }
            }

            break;
        case 3:
            if(flagIngreso == SIN_INGRESO)
            {
                printf("Debe ingresar ambos operando para realizar los calculos.\n");
                system("pause");
                system("cls");
            }
            else if (flagIngreso == UN_INGRESO)
            {
                printf("Debe ingresar el 2do operando para poder realizar los calculos.\n");
                system("pause");
                system("cls");
            }
            else if(flagIngreso == REALIZADO)
            {
                printf("Los calculos ya fueron realizados.\n");
                system("pause");
                system("cls");
            }
            else
            {
                printf("Los calculos fueron realizados exitosamente.\n");  //INVOCACION DE FUNCIONES
                resSUMA = SUMAR (x,y);
                resRESTA = RESTA (x,y);
                if(y != 0)
                {
                    resDIVISION = DIVIDIR (x,y);
                }
                else
                {
                    flagerror = 1;
                }
                resPRODUCTO = PRODUCTO (x,y);
                if(x>0 && x< 12)
                {
                    resFACTORIALx = FACTORIAL1(x);
                }
                else
                {
                    flagdesbordea = 1;
                }
                if (y>0 && y< 12)
                {
                    resFACTORIALy = FACTORIAL2(y);
                }
                else
                {
                    flagdesbordeb = 1;
                }
                flagIngreso = REALIZADO;
                system("pause");
                system("cls");
            }

            break;
        case 4:
            if(flagIngreso == SIN_INGRESO || flagIngreso == UN_INGRESO)
            {
                printf("Debe ingresar ambos operando para realizar los calculos.\n");
                system("pause");
                system("cls");
            }
            else if (flagIngreso == DOS_INGRESO)
            {
                printf("Debe realizar los calculos previamente.\n");
                system("pause");
                system("cls");
            }
            else
            {
                mostrarResultados(x, y, resSUMA, resRESTA, flagerror, resDIVISION, resPRODUCTO, resFACTORIALx, flagdesbordea, resFACTORIALy, flagdesbordeb);

                x = 0.00;
                y = 0.00;
                flagIngreso = SIN_INGRESO;
                flagrepetidoa = 0;
                flagrepetidob = 0;
                system("pause");
                system("cls");
            }

            break;
        case 5:
            respuesta = 'n';
            break;
        default:
            printf("El dato ingresado no es correcto.\n");
            fflush(stdin);
            system("pause");
            system("cls");
            break;
        }
    }
    while(respuesta == 's');

    return 0;
}
