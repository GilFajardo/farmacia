#include <locale.h>
#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dWPos;
	dWPos.X	= x;
	dWPos.Y = y;
	SetConsoleCursorPosition(hcon, dWPos);
}


/*
//struct informacion{ //nombre de la estructura
	int matricula[];
	char nombre[20];
	char carrera[20];
	float calif[3];
}
*/


typedef struct {
	char analisis[7];
	char descripcion[24];
	char condiciones[24];
	float costo;
}analisisR; //variable de la estructura

analisisR analisis[50] = {};
int i = 0;

analisisR analisisArch[] = { {"DJI789", "Perfil tiroideo", "Dormir 8 horas", 1200} }; 
							
typedef struct {
	int id_Detalle;
	char analisis[7];
	char descripcion[24];
	char condiciones[24];
	float costo;
}DpruebasR;

DpruebasR DRegistroPruebas[50] = {};
int j = 0;		

DpruebasR DpruebasArch[] = { {18900, "PRU480", "Perfil hepatico", "Beber 1 litro de agua", 800} };					

int agregarM=0, agregarD=0;
int ModificarADescripcion=0, ModificarACondiciones=0, ModificarACosto=0, ModificarCostoDetalle=0;
int ConsultarA=0, ConsultarD_id=0, ConsultarD_Analisis=0, ConsultarA_D=0, ConsultarA_C=0;
int eliminarAnalisis=0, EliminarD=0;

enum MENU { OPC1=1, OPC2, OPC3, OPC4, OPC5, OPC6, OPC7};
int opc = 0, x = 0, y = 0;

#include "validaciones.h"
#include "decorar.h"
#include "estructuras.h"
#include "registroestruct.h"
#include "manipular.h"
#include "menu.h"
#include "archivo.h"

