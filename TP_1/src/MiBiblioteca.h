
#ifndef MIBIBLIOTECA_H_
#define MIBIBLIOTECA_H_
#include <stdio.h>
#include <stdlib.h>

/***********************************************************************************/

/// @fn int ValidacionPositivo(char*)
/// @brief La funsion sirve para validar un numero ingresado que pertenezca a los numeros real(positivos con coma).
/// @param mensaje del valor que precisamos
/// @return Retorna un valor numerico natural.
float ValidacionPositivo(char* mensaje);
/***********************************************************************************/

/// @fn int ValidacionOpcion(char*)
/// @brief Valida un numero ingresado entre un rango de numeros(ej: x < 0 || x > 10)
///
/// @param mensaje	Es el mensaje que se va a emitir para que el usuario interprete que valor deberia poner
/// @return Retorna un entero natural validado
int ValidacionOpcion(char * mensaje);
/***********************************************************************************/

/// @fn int MenuOpciones(float, float, float)
/// @brief Menu de opciones que devuelve un entero seleccionado
///
/// @param Un valor que se desee mostrar en las mismas opciones(ej kilometros)
/// @param Un valor que se desee mostrar en las mismas opciones(ej precio Aerolinea)
/// @param Un valor que se desee mostrar en las mismas opciones(ej precio Latam)
/// @return Entero seleccionado de las opciones.
int MenuOpciones(float  , float  , float );
/***********************************************************************************/

/// @fn void ConsolaResultadosAerolineas(float, float, float, float, float)
/// @brief Su utilidad es mostrar los resultados deseados
///
/// @param	1° Parametro a mostrar
/// @param	2° Parametro a mostrar
/// @param 	3° Parametro a mostrar
/// @param	4° Parametro a mostrar
/// @param	5° Parametro a mostrar
void ConsolaResultadosAerolineas(float,float,float,float,float);
/***********************************************************************************/

/// @fn void ConsolaResultadosLatam(float, float, float, float, float)
/// @brief	Su utilidad es mostrar los resultados deseados
///
/// @param	1° Parametro a mostrar
/// @param	2° Parametro a mostrar
/// @param	3° Parametro a mostrar
/// @param	4° Parametro a mostrar
/// @param	5° Parametro a mostrar
void ConsolaResultadosLatam(float,float,float,float,float,float);
/***********************************************************************************/

#endif /* MIBIBLIOTECA_H_ */
