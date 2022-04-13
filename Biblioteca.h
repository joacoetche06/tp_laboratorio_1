#include <stdio.h>
//Bibliotecas

//FUNCION PARA PEDIR EL NUMERO DEL MENU QUE EL USUARIO QUIERA
int PedirNumeroMenu(int km, float precioAerolineas, float precioLatam);

//FUNCION PARA PEDIR LOS KILOMETROS DEL VUELO
int PedirKm();

//FUNCION PARA PEDIR LOS PRECIOS DE LAS AEROLINEAS
float PedirPrecios(int numero);

//FUNCIONES PARA CALCULAR COSTOS LATAM
float CalcularDebitoLatam(float precioLatam);
float CalcularCreditoLatam(float precioLatam);
float CalcularBitcoinLatam(float precioLatam);
float CalcularUnitarioLatam(float precioLatam, int km);

//FUNCIONES PARA CALCULAR COSTOS AEROLINEAS
float CalcularDebitoAerolineas(float precioAerolineas);
float CalcularCreditoAerolineas(float precioAerolineas);
float CalcularBitcoinAerolineas(float precioAerolineas);
float CalcularUnitarioAerolineas(float precioAerolineas, int km);

//FUNCION PARA DIFERENCIA DE PRECIO
float CalcularDiferenciaPrecios(float precioAerolineas, float precioLatam);

//FUNCION PARA CARGA FORZADA DE DATOS
void CargaForzada();
