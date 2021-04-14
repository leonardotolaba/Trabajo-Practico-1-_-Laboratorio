#ifndef PROTOTIPOS_H_
#define PROTOTIPOS_H_
#include <stdio.h>
#include <stdlib.h>
/** \brief funcion que invoca al menu de opciones de la calculadora y solicita que se ingrese una opcion.
 * \param   Recibe el primer valor ingresado
 * \param   Recibe el segundo valor ingresado
 * \return  Nos devuelve la opcion seleccionada por el usuario
 */
int menu (int a, int b);
/** \brief Se realiza la suma entre ambos operandos
 * \param Recibe un numero entero
 * \param Recibe un numero entero
 * \return Nos regresa el resultado de la operacion
 */
int SUMAR (int a, int b);
/** \brief Se realiza la resta entre ambos operandos
 * \param Recibe un numero entero
 * \param Recibe un numero entero
 * \return Nos regresa el resultado de la operacion
 */
int RESTA (int a, int b);
/** \brief Se realiza el cociente entre ambos operandos luego de realizar una validacion
 * \param Recibe un numero entero
 * \param Recibe un numero entero
 * \return Nos entrega el resultado de la operacion
 */
float DIVIDIR (int a, int b);
/** \brief Se realiza el producto entre ambos operandos
 * \param Recibe un numero entero
 * \param Recibe un numero entero
 * \return Nos entrega el resultado de la operacion
 */
int PRODUCTO (float a, int b);
/** \brief Realiza el factorial sobre el primer operando
 * \param Recibe un numero entero
 * \return Nos devuelve el resultado del factorial
 */
long int FACTORIAL1 (int a);
/** \brief Realiza el factorial sobre el segundo operando
 * \param Recibe un numero entero
 * \return Nos devuelve el resultado del factorial
 */
long int FACTORIAL2 (int b);
/** \brief Esta funcion nos devuelve los resultados de todas las operaciones previamente realizadas
 * \param Recibe un numero entero
 * \param Recibe un numero entero
 * \param Invoca a la funcion Suma
 * \param Invoca a la funcion Resta
 * \param Invoca a la funcion Dividir
 * \param Recibe el valor de la bandera, que nos indica si la division pudo ser realizada o no
 * \param Invoca a la funcion Multiplicar
 * \param Invoca a la funcion Factorial de el 1er operando
 * \param Recibe el valor de la bandera, que nos indica si se pudo realizar el factorial del primer operando
 * \param Invoca a la funcion Factorial de el 2do operando
 * \param Recibe el valor de la bandera, que nos indica si se pudo realizar el factorial del segundo operando
 * \return
 */
void mostrarResultados (int a, int b, int suma, int resta, int flagdivision, float division, int producto, long int primerfactorial, int flagerror1, long int segundofactorial, int flagerror2);



#endif /* PROTOTIPOS_H_ */
