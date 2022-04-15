#include "MiBiblioteca.h"

/***********************************************************************************/
float ValidacionPositivo(char mensaje[])
{
    float numeroIngresado;

    printf("%s",mensaje);
    fflush(stdin);
    scanf("%f",&numeroIngresado);
    while(numeroIngresado<=1) // La inicialice en 1 por que si no la validacion de las letras me funcionaba mal(fflush)
    {
        printf("...Error... %s: ",mensaje);
        fflush(stdin);
        scanf("%f",&numeroIngresado);

    }

    return numeroIngresado;
}
/***********************************************************************************/
int ValidacionOpcion(char mensaje[])
{
    int numeroIngresado;

    printf("%s",mensaje);
    fflush(stdin);
    scanf("%d",&numeroIngresado);
    while(numeroIngresado < 1 || numeroIngresado > 6)
    {
        printf("...Error... %s: ",mensaje);
        fflush(stdin);
        scanf("%d",&numeroIngresado);

    }

    return numeroIngresado;
}
/***********************************************************************************/
int MenuOpciones(float kilometros , float precioUno , float precioDos)
{
	int opcionIngresada;

	printf("\n\n1_ Ingresar Kilometros: (Km: %.0f)",kilometros);
	printf("\n2_ Ingresar Precio de Vuelos: (Aerolíneas=%.0f, Latam=%.0f)",precioUno,precioDos);
	printf("\n3_ Calcular todos los costos: ");
	printf("\n4_ Informar Resultados: ");
	printf("\n5_ Carga forzada de datos ");
	printf("\n6_ Salir ");
	opcionIngresada= ValidacionOpcion("\n\nIngrese numero de opcion: ");
	printf("\n\n****************************************************************\n ");

	return opcionIngresada;
}
/***********************************************************************************/

void ConsolaResultadosAerolineas(float precio,float debito,float credito,float bitcoin,float unitario)
{
	printf("\nPrecio Aerolineas: $ %f",precio);
	printf("\nPrecio con tarjeta de débito: $ %f",debito);
	printf("\nPrecio con tarjeta de crédito: $ %f",credito);
	printf("\nPrecio pagando con bitcoin: %f BTC",bitcoin);
	printf("\nPrecio unitario: $ %f",unitario);
}
/***********************************************************************************/

void ConsolaResultadosLatam(float precio,float debito,float credito,float bitcoin,float unitario,float diferencia)
{
	printf("\n\nPrecio Latam: %f",precio);
	printf("\nPrecio con tarjeta de débito: $ %f",debito);
	printf("\nPrecio con tarjeta de crédito: $ %f",credito);
	printf("\nPrecio pagando con bitcoin: %f BTC",bitcoin);
	printf("\nPrecio unitario: $ %f",unitario);
	printf("\n\nLa diferencia de precio es : %f",diferencia);
	printf("\n\n****************************************************************\n ");
}
/***********************************************************************************/
