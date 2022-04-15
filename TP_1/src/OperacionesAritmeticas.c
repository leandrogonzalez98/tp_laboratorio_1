#include "OperacionesAritmeticas.h"

/***********************************************************************************/
float Descuento(float valor,float porcentajeDescuento)
{
	float total;

	total= valor * (porcentajeDescuento/100);
	total= valor - total;

	return total;
}
/***********************************************************************************/
float Aumento(float valor,float porcentajeAumento)
{
	float total;

	total= valor * (porcentajeAumento/100);
	total= valor + total;

	return total;
}
/***********************************************************************************/
float RestarNumeros(float numeroUno, float numeroDos)
{
	float resultado;

	if(numeroUno < numeroDos)
	{
		resultado= numeroDos - numeroUno;
	}
	else
	{
		resultado= numeroUno - numeroDos;
	}
	return resultado;
}
/***********************************************************************************/
float DividirNumeros(float dividendo, float divisor)
{
	float resto;

	resto= dividendo/ divisor;

	return resto;

}
/***********************************************************************************/
void Calcular_Mostrar(int aerolineas,int latam,int descuento,int interes,int bitcoin,int kilometros)
{
	float precioDebitoAerolineas;
	float precioDebitoLatam;
	float precioCreditoAerolineas;
	float precioCreditoLatam;
	float precioBitcoinAerolineas;
	float precioBitcoinLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float diferenciaDePrecio;

	precioDebitoAerolineas=Descuento(aerolineas , descuento );
	precioDebitoLatam=Descuento( latam, descuento );
	precioCreditoAerolineas= Aumento(aerolineas,interes);
	precioCreditoLatam= Aumento(latam,interes);
	precioBitcoinAerolineas= DividirNumeros(aerolineas,bitcoin);
	precioBitcoinLatam=DividirNumeros(latam,bitcoin);
	precioUnitarioAerolineas=DividirNumeros(aerolineas,kilometros);
	precioUnitarioLatam=DividirNumeros(latam,kilometros);
	diferenciaDePrecio= RestarNumeros(latam,aerolineas);

	ConsolaResultadosAerolineas(aerolineas,precioDebitoAerolineas,precioCreditoAerolineas,precioBitcoinAerolineas,precioUnitarioAerolineas);
	ConsolaResultadosLatam(latam,precioDebitoLatam ,precioCreditoLatam ,precioBitcoinLatam ,precioUnitarioLatam,diferenciaDePrecio );
}
/***********************************************************************************/


