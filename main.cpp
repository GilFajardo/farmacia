#include "librerias.h"

int main(){
	
	datos();
	gotoxy(0,0);
	portada();
	getch();
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	gotoxy(30,8);
	ContraProg();
	Sleep(3000);
	system("cls");
	
	
	cargarInformacionAnalisis();
	cargarInformacionDRegistroPruebas();
	//imprimirEstructuraAnalisis();
	//imprimirEstructuraDetalle();
	menuProyecto();
	system("cls");
	
	//crear_arch_Informacion_Analisis();
	//crear_arch_Informacion_Detalle();
	
	//leer_arch_Informacion_Analisis();
	//leer_arch_Informacion_Detalle();
	
	return 0;
}	
/*
int main(){
	/*
	*/
	
	//imprimeEstructura();
	/*
	char analisis[7];
	char descripcion[24];
	char condiciones[24];
	float costo;
	
	printf("%d\n", sizeof(analisis));
	printf("%d\n", sizeof(descripcion));
	printf("%d\n", sizeof(condiciones));
	printf("%d\n", sizeof(costo));
	
	printf("\n\n");
	
	printf("%d\n", sizeof(analisisR));
	*/
	
	/*
	int id_Prueba;
	char estado[10];
	float total;
	int id_Paciente;
	
	printf("%d\n", sizeof(id_Prueba));
	printf("%d\n", sizeof(estado));
	printf("%d\n", sizeof(total));
	printf("%d\n", sizeof(id_Paciente));
	printf("\n\n");
	
	printf("%d\n", sizeof(pruebasR));
	*/
	
	/*
	int id_Detalle;
	char analisis[7];
	char descripcion[24];
	char condiciones[24];
	float costo;
	
	printf("%d\n", sizeof(id_Detalle));
	printf("%d\n", sizeof(analisis));
	printf("%d\n", sizeof(descripcion));
	printf("%d\n", sizeof(condiciones));
	printf("%d\n", sizeof(costo));
	
	printf("\n\n");
	
	printf("%d", sizeof(DpruebasR));
	*/
	
	/*
	int id_Paciente;
	char nombre[28];
	int edad;
	int telefono;
	char email[28];
	char fechaYhora[28];
	*/
	
	/*
	printf("%d\n", sizeof(id_Paciente));
	printf("%d\n", sizeof(nombre));
	printf("%d\n", sizeof(edad));
	printf("%d\n", sizeof(telefono));
	printf("%d\n", sizeof(email));
	printf("%d\n", sizeof(fechaYhora));
	
	printf("\n\n");
	
	printf("%d\n", sizeof(Paciente));
	*/
	
	/*
	printf("%s\n", sizeof(descripcion));
	printf("%s\n", sizeof(condiciones));
	printf("%f\n", sizeof(costo));
	*/
	
	//crear_arch_Informacion1();
	//leer_arch_Informacion1();
	
	//crear_arch_Informacion2();
	//leer_arch_Informacion2();
	
	//crear_arch_Informacion3();
	//leer_arch_Informacion3();
	
	//crear_arch_Informacion4();
	//leer_arch_Informacion4();
	
	
	
	//menuProyecto();
	//return 0;
//}

