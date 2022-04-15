
#ifndef OPERACIONESARITMETICAS_H_
#define OPERACIONESARITMETICAS_H_
#include <stdio.h>
#include <stdlib.h>
#include "MiBiblioteca.h"
/***********************************************************************************/

/// @fn float Descuento(float, int)
/// @brief Calcula los descuentos que solicitemos y devuelve el total-Descuento ;
///
/// @param valor= El precio o numero al que se le va a efectuar el descuento;
/// @param porcentajeDescuento= Es el porcentaje que queramos descontar del total;
/// @return Retorna el total - el descuento efectuado
float Descuento(float valor,float porcentajeDescuento);
/***********************************************************************************/

/// @fn float Aumento(float, int)
/// @brief Calcula el aumento efectuado a un valor y devuelve total + aumento;
///
/// @param valor= El precio o numero al que se le va a efectuar el aumento;
/// @param porcentajeAumento Es el porcentaje que queramos aumentar al total;
/// @return Retorna el total + el aumento efectuado;
float Aumento(float valor,float porcentajeAumento);
/***********************************************************************************/

/// @fn float RestarNumeros(float, float)
/// @brief Compara dos numeros y resta el menor de los dos al mayor(asi queda un numero positivo)
///
/// @param numeroUno Numero Real con coma
/// @param numeroDosNumero Real con coma
/// @return Retorna el resultado de la resta de ambos valores;
float RestarNumeros(float numeroUno, float numeroDos);
/***********************************************************************************/

/// @fn float DividirNumeros(float, float)
/// @brief Divide dos numeros reales con coma
///
/// @param dividendo Numero que se desea dividir;
/// @param divisor Numero por el cual se desea dividir;
/// @return	Retorna el resultado de la division;
float DividirNumeros(float dividendo, float divisor);
/***********************************************************************************/

/// @fn void Calcular_Mostrar(int, int, int, int, int, int)
/// @brief Calcula varios valores utilizando el llamado de varias funciones y a su vez muestra el resultado de esos calculos llamando otra funcion que muestra
///
/// @param	1° Parametro a calcular y luego mostrar
/// @param	2° Parametro a calcular y luego mostrar
/// @param	3° Parametro a calcular y luego mostrar
/// @param	4° Parametro a calcular y luego mostrar
/// @param	5° Parametro a calcular y luego mostrar
/// @param	6° Parametro a calcular y luego mostrar
void Calcular_Mostrar(int,int,int,int,int,int);
/***********************************************************************************/

#endif /* OPERACIONESARITMETICAS_H_ */




