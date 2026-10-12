void portada(){
	int aux=0;
	FILE *archivo = fopen("portada.txt", "r");
	
	for(int i=0; i<18; i++){
		for(int j=0; j<18; j++){
			fscanf(archivo,"%d\t", &aux);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), aux);
			printf("%c", 178);
		}
		printf("\n");
	}
	
	fclose(archivo);
}

void datos(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	gotoxy(30,8);
	printf("Universidad Polictenica de San Luis Potosi");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	gotoxy(30,9);
	printf("Programacio I Lenguaje C");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	gotoxy(30,10);
	printf("Proyecto Final CASA");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	gotoxy(30,11);
	printf("Modulo 1");
}
