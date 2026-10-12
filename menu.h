void subRegistro();
void submenu1();
void submenu2();
void submenu3();
void menu(int, int, int, int);
void menuAD();

void menuProyecto(){
	setlocale(LC_CTYPE, "Spanish");
	
	while (opc != 6){
		system("color 02");
		x=25;
		y=5;
		system("cls");
		gotoxy(x,y);
		printf("1.- Analisis\n");
		gotoxy(x,++y);
		printf("2.- Detalle de registro de pruebas\n");
		gotoxy(x,++y);
		printf("3.- Salir\n");
		gotoxy(x,++y);
		menu(22,5,1,6);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				menuAD();
				getch();
				break;
			case OPC2:
				subRegistro();
				getch();
				break;
			case OPC3:
				printf("Adios \n");
				imprimirEstructuraAnalisis();
				printf("\n");
				imprimirEstructuraDetalle();
				actualizarArchivosDetalle();
				actualizarArchivosAnalisis();
				exit(0);
		}
	}
	getch();
}

void menuAD(){
	setlocale(LC_CTYPE, "Spanish");
	
	while (opc != 6){
		system("color 02");
		x=25;
		y=5;
		system("cls");
		gotoxy(x,y);
		printf("1.- Agregar\n");
		gotoxy(x,++y);
		printf("2.- Modificar\n");
		gotoxy(x,++y);
		printf("3.- Consultar\n");
		gotoxy(x,++y);
		printf("4.- Eliminar\n");
		gotoxy(x,++y);
		printf("5.- Regresar\n");
		gotoxy(x,++y);
		menu(22,5,1,6);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				agregarM = AgregarAnalisisMenu();
				if(agregarM == 1){
					agregarM = 0;
					menuAD();	
				} 
				getch();
				break;
			case OPC2:
				submenu1();
				getch();
				break;
			case OPC3:
				submenu2();
				break;
			case OPC4:
				imprimirEstructuraAnalisis();
				eliminarAnalisis = EliminarAnalisis();
				if(eliminarAnalisis == 1){
					eliminarAnalisis = 0;
					menuAD();	
				} 
				break;
			case OPC5:
				printf("5.- Regresar\n");
				menuProyecto();
				break;	
		}
	}
	getch();
}

void menu(int x, int y, int inicio, int fin){
	char tecla='\0'; //' ';
	opc = 1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	gotoxy(x,y);
	printf("%c",16);
	
	do{
		if(kbhit()){
			tecla = getch();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			gotoxy(x,y);
			printf("%c", 16);
			if(opc>inicio&&tecla==72){ //flecha arriba 
				y--;
				opc--;
			}
			if(opc<fin&&tecla==80){ //flecha abajo
				y++;
				opc++;
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
			gotoxy(x,y);
			printf("%c", 16);
		}
	}while(tecla != 13); //13--> enter
}

void submenu1(){
	while(opc !=4){
		system("color 02");
		x=25;
		y=5;
		system("cls");
		gotoxy(x,y);
		printf("1.- Descripcion\n");
		gotoxy(x,++y);
		printf("2.- Condiciones\n");
		gotoxy(x,++y);
		printf("3.- Costo\n");
		gotoxy(x,++y);
		printf("4.- Regresar\n");
		gotoxy(x,++y);
		menu(22,5,1,4);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:	
				ModificarADescripcion = ModificarAnalisisDescripcion();
				if(ModificarADescripcion == 1){
					ModificarADescripcion = 0;
					submenu1();	
				} 
				getch();
				break;
			case OPC2:
				ModificarACondiciones = ModificarAnalisisCondiciones();
				if(ModificarACondiciones == 1){
					ModificarACondiciones = 0;
					submenu1();	
				} 
				getch();
				break;
			case OPC3:
				ModificarACosto = ModificarAnalisisCosto();
				if(ModificarACosto == 1){
					ModificarACosto = 0;
					submenu1();	
				} 
				getch();
				break;
			case OPC4:
				menuAD();
				break;
		}
	}
	getch();
}

void submenu2(){
	while(opc !=4){
		system("color 02");
		x=25;
		y=5;
		system("cls");
		gotoxy(x,y);
		printf("1.- Codigo de analisis\n");
		gotoxy(x,++y);
		printf("2.- Descripcion\n");
		gotoxy(x,++y);
		printf("3.- Costo\n");
		gotoxy(x,++y);
		printf("4.- Regresar\n");
		gotoxy(x,++y);
		menu(22,5,1,4);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				ConsultarA = ConsultarAnalisisMenu();
				if(ConsultarA == 1){
					ConsultarA = 0;
					menuAD();	
				} 
				getch();
				break;
			case OPC2:
				ConsultarA_D = ConsultarAnalisisDescripcionMenu();
				if(ConsultarA_D == 1){
					ConsultarA_D = 0;
					menuAD();	
				} 
				getch();
				break;
			case OPC3:
				ConsultarA_C = ConsultarAnalisisCostoMenu();
				if(ConsultarA_C == 1){
					ConsultarA_C = 0;
					menuAD();	
				} 
				getch();
				break;
			case OPC4:
				menuAD();
				break;
		}
	}
	getch();
}

void subRegistro(){
	while(opc !=5){
		system("color 02");
		x=25;
		y=5;
		system("cls");
		gotoxy(x,y);
		printf("1.- Agregar\n");
		gotoxy(x,++y);
		printf("2.- Consultar\n");
		gotoxy(x,++y);
		printf("3.- Modificar costo\n");
		gotoxy(x,++y);
		printf("4.- Eliminar\n");
		gotoxy(x,++y);
		printf("5.- Regresar\n");
		gotoxy(x,++y);
		menu(22,5,1,5);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				agregarD = AgregarDetalleMenu();
				if(agregarD == 1){
					agregarD = 0;
					subRegistro();	
				} 
				getch();
				break;
			case OPC2:
				submenu3();
				break;
			case OPC3:
				ModificarCostoDetalle = ModificarDetalleCosto();
				if(ModificarCostoDetalle == 1){
					ModificarCostoDetalle = 0;
					subRegistro();	
				} 
				getch();
				break;
			case OPC4:
				EliminarD = EliminarDetalle();
				if(EliminarD == 1){
					EliminarD = 0;
					subRegistro();	
				} 
				getch();
				break;
			case OPC5:
				menuProyecto();
				break;
		}
	}
	getch();
}

void submenu3(){
	while(opc !=3){
		system("color 02");
		x=25;
		y=5;
		system("cls");
		gotoxy(x,y);
		printf("1.- Numero de detalle\n");
		gotoxy(x,++y);
		printf("2.- Analisis\n");
		gotoxy(x,++y);
		printf("3.- Regresar\n");
		gotoxy(x,++y);
		menu(22,5,1,3);
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				ConsultarD_id = ConsultarDetalleMenu();
				if(ConsultarD_id == 1){
					ConsultarD_id = 0;
					submenu3();	
				} 
				getch();
				break;
			case OPC2:
				ConsultarD_Analisis = ConsultarDetalleAnalisisMenu();
				if(ConsultarD_Analisis == 1){
					ConsultarD_Analisis = 0;
					submenu3();	
				} 
				getch();
				break;
			case OPC3:
				subRegistro();
				break;
		}
	}
	getch();
}
