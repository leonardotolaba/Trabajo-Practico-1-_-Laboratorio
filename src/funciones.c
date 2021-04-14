
#include <stdio.h>
#include <stdlib.h>

int menu (int a, int b)
{
    int dato;
    printf("*****Calculadora-UTN2021*****\n");
    printf("1_Ingresar 1er operando (A=%d)\n", a);
    printf("2_Ingresar 2do operando (B=%d)\n",b);
    printf("3_Calcular todas las operaciones\n"
           "a) Calcular la suma (A+B)\n"
           "b) Calcular la resta (A-B)\n"
           "c) Calcular la division (A/B)\n"
           "d) Calcular la multiplicacion (A*B)\n"
           "e) Calcular el factorial (A!)\n");
    printf("4_ Informar resultados\n");
    printf("5_ Salir\n\n");
    printf("Ingrese opcion: \n");
    scanf("%d", &dato);
    return dato;
}
int SUMAR (int a, int b)
{
    int resultadoSUMA;
    resultadoSUMA = a + b;
    return resultadoSUMA;
}
int RESTA (int a, int b)
{
    int resultadoRESTA;
    resultadoRESTA = a - b;
    return resultadoRESTA;
}
float DIVIDIR (int a, int b)
{
    float resultadoDIV;
    if(b!= 0)
    {
        resultadoDIV = (float) a/b;
    }

    return resultadoDIV;
}
int PRODUCTO (int a, int b)
{
    int resultadoPROD;
    resultadoPROD = a * b;
    return resultadoPROD;
}
long int FACTORIAL1 (int a)
{
    int fact = 1;
    for(int i = 1; i <= a; i++)
    {
        fact*= i;
    }
    return fact;
}
long int FACTORIAL2 (int b)
{
    int factor = 1;
    for(int z = 1; z <= b; z++)
    {
        factor*= z;
    }
    return factor;
}
void mostrarResultados (int a, int b, int suma, int resta, int flagdivision, float division, int producto, long int primerfactorial, int flagerror1, long int segundofactorial, int flagerror2)
{
    printf("Los resultados son.....\n");
    printf("La suma es: %d\n", suma);
    printf("La resta es: %d\n", resta);
    if(flagdivision)
    {
        printf("No es posible dividir por cero\n");
    }
    else
    {
        printf("La division es: %.2f\n", division);
    }
    printf("El producto es: %d\n", producto);
    if (flagerror1)
    {
        printf("No se pudo calcular el factorial de A.\n");
    }
    else
    {
        printf("El factorial de A es %ld", primerfactorial);
    }
    if(flagerror2)
    {
        printf("No se pudo calcular el factorial de B.\n");
    }
    else
    {
        printf("el factorial de B = %ld\n", segundofactorial);
    }
}



