int AgregarAnalisisMenu(){
 	int opc=0, menu=0;
 	
	do{
		system("cls");
		fflush(stdin);
		agregarRegistroAnalisis();
		do{
			opc = validaEntero("¿Deseas agregar otro analisis? 1=si 0=no: ");
			//printf("¿Deseas agregar otro analisis? 1=si 0=no: ");
			//scanf("%d", &opc);
		}while(opc <= -1 || opc >= 2);
	}while(opc==1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}

int AgregarDetalleMenu(){
 	int opc=0, menu=0;
 	
	do{
		system("cls");
		fflush(stdin);
		agregarRegistroDetalle();
		printf("\n");
		imprimirEstructuraDetalle();
		printf("\n");
		do{
			opc = validaEntero("¿Deseas asignar otro id_Detalle a otro analisis? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//printf("¿Deseas asignar otro id_Detalle a otro analisis? 1=si 0=no: ");
		//scanf("%d", &opc);
	}while(opc==1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}

int ModificarAnalisisDescripcion(){
	int opc = 0, menu = 0;
	char Analisis[7]="";
	int EncuentraAnalisis =0;
	
	do{
		system("cls");
		fflush(stdin);
		
		do{
			EncuentraAnalisis = 0;
			validaAnalisis("Analisis a modificar: ", Analisis);
			
			for(int m=0; m<i; m++){
				if((strcmp(analisis[m].analisis, Analisis))==0){
					EncuentraAnalisis = 1;
				}
			}
			
			if(EncuentraAnalisis == 0){
				printf("\nEl analisis ingresado no se encuentra registrado\n\n");
			}
			
		}while(EncuentraAnalisis == 0);
		
		modificarRegistroAnalisisDescripcion(Analisis);
		do{
			opc = validaEntero("¿Deseas modificar los datos de otro analisis? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//printf("¿Deseas modificar los datos de otro analisis? 1=si 0=no");
		//scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}

int ModificarAnalisisCondiciones(){
	int opc = 0, menu = 0;
	char Analisis[7]="";
	int EncuentraAnalisis = 0;
	
	do{
		system("cls");
		fflush(stdin);
		
		do{
			EncuentraAnalisis = 0;
			validaAnalisis("Analisis a modificar: ", Analisis);
			
			for(int m=0; m<i; m++){
				if((strcmp(analisis[m].analisis, Analisis))==0){
					EncuentraAnalisis = 1;
				}
			}
			
			if(EncuentraAnalisis == 0){
				printf("\nEl analisis ingresado no se encuentra registrado\n\n");
			}
			
		}while(EncuentraAnalisis == 0);
		
		modificarRegistroAnalisisCondiciones(Analisis);
		do{
			opc = validaEntero("¿Deseas modificar los datos de otro analisis? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//printf("¿Deseas modificar los datos de otro analisis? 1=si 0=no");
		//scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}

int ModificarAnalisisCosto(){
	int opc = 0, menu = 0;
	char Analisis[7]="";
	int EncuentraAnalisis = 0;
	
	do{
		system("cls");
		fflush(stdin);
		
		do{
			EncuentraAnalisis = 0;
			validaAnalisis("Analisis a modificar: ", Analisis);
			
			for(int m=0; m<i; m++){
				if((strcmp(analisis[m].analisis, Analisis))==0){
					EncuentraAnalisis = 1;
				}
			}
			
			if(EncuentraAnalisis == 0){
				printf("\nEl analisis ingresado no se encuentra registrado\n\n");
			}
			
		}while(EncuentraAnalisis == 0);
		
		modificarRegistroAnalisisCosto(Analisis);
		do{
			opc = validaEntero("¿Deseas modificar los datos de otro analisis? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//printf("¿Deseas modificar los datos de otro analisis? 1=si 0=no");
		//scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}

int ModificarDetalleCosto(){
	int opc = 0, menu = 0;
	int detalle=0, EncuentraDetalle = 0;
	
	
	do{
		system("cls");
		imprimirEstructuraDetalle();
		fflush(stdin);
		do{
			EncuentraDetalle = 0;
			detalle = validaEntero("Numero de detalle a modificar: ");
			
			for(int m=0; m<j; m++){
				if(DRegistroPruebas[m].id_Detalle == detalle){
					EncuentraDetalle = 1;
				
				}
			}
			
			if(EncuentraDetalle == 0){
				printf("\nEl numero de detalle no se encuentra registrado\n\n");
			}
			
	}while(EncuentraDetalle == 0);
		
	modificarRegistroDetalleCosto(detalle);
	DetalleRegistroFinal(detalle);
	
	do{
			opc = validaEntero("¿Deseas modificar los datos de otro analisis? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//printf("¿Deseas modificar los datos de otro analisis? 1=si 0=no");
		//scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}

int EliminarAnalisis(){
	int opc = 0, menu = 0;
	char Analisis[7]="";
	int EncuentraAnalisis=0;
	
	do{
		system("cls");
		fflush(stdin);
		
		do{
			EncuentraAnalisis = 0;
			imprimirEstructuraAnalisis();
			validaAnalisis("Analisis por eliminar: ", Analisis);
			
			for(int m=0; m<i; m++){
				if((strcmp(analisis[m].analisis, Analisis))==0){
					EncuentraAnalisis = 1;
				}
			}
			
			if(EncuentraAnalisis == 0){
				printf("\nEl analisis ingresado no se encuentra registrado\n\n");
			}
			
		}while(EncuentraAnalisis == 0);
		
		eliminarRegistroAnalisis(Analisis);
		do{
			opc = validaEntero("¿Deseas eliminar otro analisis? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//printf("¿Deseas eliminar otro analisis? 1=si 0=no");
		//scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}

int EliminarDetalle(){
	int opc = 0, menu = 0;
	int detalle = 0;
	int EncuentraDetalle = 0;
	
	do{
		system("cls");
		fflush(stdin);
		imprimirEstructuraDetalle();
	
		do{
			EncuentraDetalle = 0;
			detalle = validaEntero("Numero de detalle por eliminar: ");
			
			for(int m=0; m<j; m++){
				if(DRegistroPruebas[m].id_Detalle == detalle){
					EncuentraDetalle = 1;
				
				}
			}
			
			if(EncuentraDetalle == 0){
				printf("\nEl numero de detalle no se encuentra registrado\n\n");
			}
			
		}while(EncuentraDetalle == 0);
	
		eliminarRegistroAnalisis(detalle);
		do{
			opc = validaEntero("¿Deseas eliminar otro analisis? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//printf("¿Deseas eliminar otro analisis? 1=si 0=no");
		//scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}
/*
int ModificarAnalisisMenu(){
	int opc = 0, menu = 0;
	char analisis[7]="";
	
	do{
		system("cls");
		fflush(stdin);
		validaAnalisis("Analisis a modificar: ", analisis);
		modificarRegistroAnalisis(analisis);
		printf("¿Deseas modificar los datos de otro analisis? 1=si 0=no");
		scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}
*/

int ConsultarAnalisisMenu(){
	int opc = 0, menu = 0;
	char Analisis[7]="";
	int EncuentraAnalisis = 0;
	
	do{
		system("cls");
		fflush(stdin);
		
		do{
			EncuentraAnalisis = 0;
			validaAnalisis("Analisis a consultar: ", Analisis);
			
			for(int m=0; m<i; m++){
				if((strcmp(analisis[m].analisis, Analisis))==0){
					EncuentraAnalisis = 1;
				}
			}
			
			if(EncuentraAnalisis == 0){
				printf("\nEl analisis ingresado no se encuentra registrado\n\n");
			}
			
		}while(EncuentraAnalisis == 0);
		
		consultarRegistroAnalisis(Analisis);
		
		do{
			opc = validaEntero("¿Deseas consultar los datos de otro analisis? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//printf("\n¿Deseas consultar los datos de otro analisis? 1=si 0=no");
		//scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}

int ConsultarAnalisisDescripcionMenu(){
	int opc = 0, menu = 0;
	char Descripcion[24]="";
	
	do{
		system("cls");
		fflush(stdin);
		validaDescripcion("Descripcion: ", Descripcion);
		consultarRegistroAnalisisDescripcion(Descripcion);
		
		do{
			opc = validaEntero("¿Deseas consultar los datos de otro analisis? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//printf("\n¿Deseas consultar los datos de otro analisis? 1=si 0=no");
		//scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}

int ConsultarAnalisisCostoMenu(){
	int opc = 0, menu = 0;
	char Descripcion[24]="";
	float costo=0;
	
	do{
		system("cls");
		fflush(stdin);
		costo = validaFlotante("Costo: ");	
		consultarRegistroAnalisisCosto(costo);		
		do{
			opc = validaEntero("¿Deseas consultar los datos de otro analisis? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//printf("\n¿Deseas consultar los datos de otro analisis? 1=si 0=no");
		//scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}


int ConsultarDetalleAnalisisMenu(){
	int opc = 0, menu = 0;
	char DetalleAnalisis[7]="";
	int EncuentraAnalisis = 0;
	
	do{
		system("cls");
		fflush(stdin);
		
		do{
			EncuentraAnalisis = 0;
			validaAnalisis("Analisis en el registro de pruebas a consultar: ", DetalleAnalisis);
			//validaAnalisis("Analisis a consultar: ", analisis);
			
			for(int m=0; m<j; m++){
				if((strcmp(DRegistroPruebas[m].analisis, DetalleAnalisis))==0){
				//if(DRegistroPruebas[m].analisis == DetalleAnalisis){
					EncuentraAnalisis = 1;
				
				}
			}
			
			if(EncuentraAnalisis == 0){
				printf("\nEl analisis no se encuentra registrado\n\n");
			}
			
		}while(EncuentraAnalisis == 0);
		
		consultarRegistroDetalleAnalisis(DetalleAnalisis);
		do{
			opc = validaEntero("\n¿Deseas consultar los datos de otro analisis? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//consultarRegistroAnalisis(analisis);
		//printf("\n¿Deseas consultar los datos de otro analisis? 1=si 0=no");
		//scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}

int ConsultarDetalleMenu(){
	int opc = 0, menu = 0;
	int detalle=0;
	int EncuentraDetalle = 0;
	
	do{
		system("cls");
		fflush(stdin);
		
		do{
			EncuentraDetalle = 0;
			detalle = validaEntero("Numero de detalle a consultar: ");
			//validaAnalisis("Analisis a consultar: ", analisis);
			
			for(int m=0; m<j; m++){
				if(DRegistroPruebas[m].id_Detalle == detalle){
				//if(DRegistroPruebas[m].analisis == DetalleAnalisis){
					EncuentraDetalle = 1;
				
				}
			}
			
			if(EncuentraDetalle == 0){
				printf("\nEl Numero de detalle no se encuentra registrado\n");
			}
			
		}while(EncuentraDetalle == 0);
		
		consultarRegistroDetalle(detalle);
		do{
			opc = validaEntero("¿Deseas consultar los datos de otro numero de detalle? 1=si 0=no: ");
		}while(opc <= -1 || opc >= 2);
		//printf("\n¿Deseas consultar los datos de otro numero de detalle? 1=si 0=no");
		//scanf("%d", &opc);
	}while(opc == 1);
	
	if(opc == 0){
		menu = 1;
	}
	
	return menu;
}

void ContraProg(){
	char usuario[10]=" ";
	char pass[5]=" ";
	bool bandera = true;
	int i = 0;
	int intentos = 0;
	
	while(bandera){//while(bandera == true){
	//do{
		system("cls");
		printf("Dame el usuario: ");
		scanf("%s", usuario);
		//scanf("%s[^\n]", usuario);
		//gets(usuario);
		printf("Dame tu contraseña");
		//scanf("%s, pass);
		while(i<4){
			pass[i]=getch();
			putchar('*');
			i++;
		}
	
	if( !(strcmp("Gil", usuario)==0) || !(strcmp("1234", pass)==0)){
		printf("\nDatos incorrectos\n");
		getch();
	}
	else{
		bandera = false;
		system("cls");
		printf("\nBienvenido %s\n\n", usuario);
	}
	if (intentos == 2 && bandera == true){
		printf("\n\nNo autorizado :(");
		exit(0);
	}
	i=0;
	intentos++;
//while(bandera);
	}
}
