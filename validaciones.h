void GeneraAnalisis(const char *mensaje, char cadena[]){
	srand(time(0));
		
	int letraNum=0, numero=0;
	char NumeroCadena[4];
	char Analisis[7];
	char Prueba[2];
	
	for(int i=0; i<3; i++){
		letraNum = rand() % 26 + 65;
		Analisis[i] = letraNum;
		letraNum=0;
	}
	
	do{
		numero=rand()%999;
	}while(numero < 100 || numero > 999);
	
	sprintf(NumeroCadena, "%d", numero);
	
	strcat(Analisis, NumeroCadena);
	
	strcpy(cadena, Analisis);
	
	printf("\n%s", mensaje);
	printf("%s", cadena);
}

int Genera_Id_Detalle(const char mensaje[]){
	srand(time(0));
	int numero = 0;
	
	do{
		numero=rand()%99999;
	}while(numero < 10000 || numero > 99999);
	
	printf("\n%s", mensaje);
	printf("%d\n", numero);
	
	return numero;
}

int ValidaGeneraAnalisis(char Analisis[]){
	int rep = 0;
	
	for(int m=0; m<i; m++){
		if((strcmp(analisis[m].analisis, Analisis))==0){
			rep=5;
		}
	}
	return rep;
}

void validaCadena(const char *mensaje, char cadena[]){
	bool bandera = true;
	
	while(bandera){
		printf("\n%s", mensaje);
		//scanf("%[^\n]", cadena);
		gets(cadena);
		fflush(stdin);
		if(strlen(cadena)>9) continue;
		else{
			for(int i = 0; i<strlen(cadena); i++){
				if(isalpha(cadena[i]) || cadena[i] == ' '){ //isalpha: para comprobar que es un caracter 
					if(i == (strlen(cadena)-1)){
						for(int j = 0; j<strlen(cadena); j++){
							cadena[j] = tolower(cadena[j]); //toupper
						}
						bandera = false;
					}
				}else break;
			}
		}
	}
}

int validaEntero(const char mensaje[]){
	int valida=0;
	int entero=0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%d", &entero);
		fflush(stdin);
	}while(valida != 1);
	return entero;
}

float validaFlotante(const char mensaje[]){
	int valida=0;
	float flotante=0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%f", &flotante);
		fflush(stdin);
	}while(valida != 1);
	
	return flotante;
}

void validaAnalisis(const char *mensaje, char cadena[]){
	bool bandera = true;
	
	while(bandera){
		fflush(stdin);
		printf("%s ", mensaje);
		scanf("%[^\n]", cadena);
		fflush(stdin);
		if(strlen(cadena)>7){
			continue;
		}else{
			bandera = false;
		}
	}
}

void validaDescripcion(const char *mensaje, char cadena[]){
	bool bandera = true;
	
	while(bandera){
		printf("%s", mensaje);
		gets(cadena);
		fflush(stdin);
		if(strlen(cadena)>25) continue;
		else{
			for(int i = 0; i<strlen(cadena); i++){
				if(isalpha(cadena[i]) || cadena[i] == ' '){ //isalpha: para comprobar que es un caracter 
					if(i == (strlen(cadena)-1)){
						for(int j = 0; j<strlen(cadena); j++){
							cadena[j] = tolower(cadena[j]); //toupper
						}
						bandera = false;
					}
				}else break;
			}
		}
	}
}

void valida_antecedentes(const char *mensaje, char cadena[]){
	bool bandera = true;
	
	while(bandera){
		printf("%s ", mensaje);
		scanf("%[^\n]", cadena);
		fflush(stdin);
		if(strlen(cadena)>23){
			continue;
		}else{
			bandera = false;
		}
	}
}

int valida_id(const char mensaje[]){
	int valida=0;
	int entero=0;
	
	do{
		printf("\n%s", mensaje);
		valida = scanf("%d", &entero);
		fflush(stdin);
	}while(valida != 1 && entero > 99999);
	return entero;
}

void valida_estado(const char *mensaje, char cadena[]){
	bool bandera = true;
	
	while(bandera){
		printf("%s ", mensaje);
		scanf("%[^\n]", cadena);
		fflush(stdin);
		if(strlen(cadena)>9){
			continue;
		}else{
			bandera = false;
		}
	}
}

void valida_Nombre(const char *mensaje, char cadena[]){
	bool bandera = true;
	int entero=0;
	int acum=0;
	
	while(bandera){
		printf("%s", mensaje);
		scanf("%[^\n]", cadena);
		fflush(stdin);
		if(strlen(cadena)>50) continue; //streln
		else{
			for(int i = 0; i<strlen(cadena); i++){
				if((cadena[i]) == 126){
				acum++;
				}
			}
		if(acum == 0) bandera = false;
		}
	}
}

int valida_edad(const char mensaje[]){
	int valida=0;
	int entero=0;
	
	do{
		printf("\n%s", mensaje);
		valida = scanf("%d", &entero);
		fflush(stdin);
	}while(valida != 1 && entero > 0 && entero < 100);
	return entero;
}

void valida_telefono(const char *mensaje, char cadena[]){
	bool bandera = true;
	
	while(bandera){
		printf("\n%s", mensaje);
		scanf("%s", cadena);
		fflush(stdin);
		if(strlen(cadena)>10) continue; //streln
		else{
			for(int i = 0; i<strlen(cadena); i++){
				if(isdigit(cadena[i])){
					if(i== (strlen(cadena)-1)){
						bandera=false;
					}
				}else break;
			}
		}
	}
}

void valida_email(const char *mensaje, char cadena[]){
	bool bandera = true;
	int entero=0;
	int acum=0;
	
	while(bandera){
		printf("%s", mensaje);
		scanf("%[^\n]", cadena);
		fflush(stdin);
		if(strlen(cadena)>50) continue; //streln
		else{
			for(int i = 0; i<strlen(cadena); i++){
				if((cadena[i]) == 64){
				acum++;
				}
			}
		if(acum == 0) bandera = false;
		}
	}
}


