#include <stdio.h>
#include <stdlib.h>
#include "MiBiblioteca.h"
#include "OperacionesAritmeticas.h"

#define BTC 4606954.55
#define DESCUENTO 10
#define INTERES 25
#define KILOMETROS 7090
#define AEROLINEAS 162965
#define LATAM 159339
int main(void)
{
	setbuf(stdout,NULL);
	int opcionIngresada;
	float kilometrosDeVuelo=0;
	float precioAerolineas=0;
	float precioLatam=0;
	float precioDebitoAerolineas;
	float precioDebitoLatam;
	float precioCreditoAerolineas;
	float precioCreditoLatam;
	float precioBitcoinAerolineas;
	float precioBitcoinLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float diferenciaDePrecio;
	do
	{
		opcionIngresada= MenuOpciones(kilometrosDeVuelo,precioAerolineas,precioLatam);
		switch(opcionIngresada)
		{
			case 1:		//1. Ingresar Kilómetros: ( km=x)
				system("cls");
				kilometrosDeVuelo=ValidacionPositivo("\nIngrese distancia de su vuelo(KM): ");
			break;
			case 2:		//2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
				system("cls");
				precioAerolineas=ValidacionPositivo("\nIngrese precio del vuelo Aerolineas: ");
				precioLatam=ValidacionPositivo("\nIngrese precio del vuelo Latam: ");
			break;
			case 3:		//3. Calcular todos los costos:
				system("cls");
				if(kilometrosDeVuelo ==0 || precioAerolineas ==0 || precioLatam ==0)
				{
					printf("\nNo se puede calcular hasta que no ingrese los datos necesarios(Opcion 1 y 2)");
					printf("\n\n****************************************************************\n ");
				}
				else
				{
					precioDebitoAerolineas=Descuento(precioAerolineas , DESCUENTO );
					precioDebitoLatam=Descuento(precioLatam , DESCUENTO );
					precioCreditoAerolineas= Aumento(precioAerolineas,INTERES);
					precioCreditoLatam= Aumento(precioLatam,INTERES);
					precioBitcoinAerolineas= DividirNumeros(precioAerolineas,BTC);
					precioBitcoinLatam=DividirNumeros(precioLatam,BTC);
					precioUnitarioAerolineas=DividirNumeros(precioAerolineas,kilometrosDeVuelo);
					precioUnitarioLatam=DividirNumeros(precioLatam,kilometrosDeVuelo);
					diferenciaDePrecio= RestarNumeros(precioLatam,precioAerolineas);

					printf("\nYa se realizaron todos los calculos.");
					printf("\n\n****************************************************************\n ");
				}
			break;
			case 4:		//4. Informar Resultados
				system("cls");
				if(kilometrosDeVuelo ==0 || precioAerolineas ==0 || precioLatam ==0)
				{
					printf("\nNo se puede mostrar los resultados hasta que no sean calculados(opcion 3)");
					printf("\n\n****************************************************************\n ");
				}
				else
				{
					ConsolaResultadosAerolineas(precioAerolineas,precioDebitoAerolineas,precioCreditoAerolineas,precioBitcoinAerolineas,precioUnitarioAerolineas);
					ConsolaResultadosLatam(precioLatam,precioDebitoLatam,precioCreditoLatam,precioBitcoinLatam,precioUnitarioLatam,diferenciaDePrecio);
				}
			break;
			case 5:		//5. Carga forzada de datos
				system("cls");
				Calcular_Mostrar( AEROLINEAS, LATAM, DESCUENTO, INTERES, BTC, KILOMETROS);
			break;
			default:
				printf("\n***Gracias por utilizar el programa.***\n\n");
				system("pause");
			break;
		}
	}while(opcionIngresada != 6);
	return EXIT_SUCCESS;
}

