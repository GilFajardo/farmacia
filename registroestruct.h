analisisR agregarAnalisis(){
	analisisR Ranalisis;

	//int repAnalisis = 0;
	
	GeneraAnalisis("Analisis: ", Ranalisis.analisis);
	/*
	do{
		GeneraAnalisis("Analisis: ", Ranalisis.analisis);
		//validaAnalisis("Analisis: ", Ranalisis.analisis);	
		repAnalisis = ValidaGeneraAnalisis(Ranalisis.analisis);
	}while(repAnalisis > 3);
	repAnalisis = 0;
	*/
	printf("\n");
	validaDescripcion("Descripcion: ", Ranalisis.descripcion);
	validaDescripcion("Condiciones: ", Ranalisis.condiciones);
	do{
		Ranalisis.costo = validaFlotante("Costo: ");	
	}while(Ranalisis.costo < 0);
	
	return Ranalisis;
}

DpruebasR agregarDetalle(){
	DpruebasR Detalle;	
	char Analisis[7]="";
	int compruebaAnalisis=0, prueba=1, AnalisisEncontrado=0;
	
	imprimirEstructuraAnalisis();
	printf("\n");
	
	Detalle.id_Detalle = Genera_Id_Detalle("Id_Detalle: ");
	do{
		prueba = 1;
		AnalisisEncontrado=0;
		fflush(stdin);
		validaAnalisis("Coloca el Analisis al que se le asignara el id_Detalle:", Analisis);
		
		for(int m=0; m<j; m++){
			if((strcmp(DRegistroPruebas[m].analisis, Analisis))==0){
				printf("\n***El analisis que inserto ya tiene un numero de detalle asignado***\n");
				prueba=0;
			}
		}
		
		if(prueba==1){
			for(int m=0; m<i; m++){
				if((strcmp(analisis[m].analisis, Analisis))==0){
					strcpy(Detalle.analisis, analisis[m].analisis);
		            strcpy(Detalle.descripcion, analisis[m].descripcion);
		            strcpy(Detalle.condiciones, analisis[m].condiciones);
					Detalle.costo = analisis[m].costo;
					AnalisisEncontrado++;
					break;
				}
			}
			
			if(AnalisisEncontrado == 0 ){
				printf("\nEse Analisis no se encuentra registrado\n");
			}
		}
	}while(prueba == 0 || AnalisisEncontrado == 0);
	
	return Detalle;
}

void agregarRegistroDetalle(){
	printf("\nAgregar registro-------------\n");
	DRegistroPruebas[j] = agregarDetalle();
	j++;
}

void agregarRegistroAnalisis(){
	printf("\nAgregar Analisis-------------\n");
	analisis[i] = agregarAnalisis();
	i++;
}

void consultarRegistroAnalisis(char Analisis[7]){
	printf("\n\nConsultar registro analisis----------------\n");
	
	for(int m=0; m<i; m++){
		if((strcmp(analisis[m].analisis, Analisis))==0){
			printf("%s\t", analisis[m].analisis);
			printf("%s\t", analisis[m].descripcion);
			printf("%s\t", analisis[m].condiciones);
			printf("%.2f\n", analisis[m].costo);
		}
	}
}

void consultarRegistroAnalisisDescripcion(char Descripcion[24]){
	printf("\n\nConsultar registro analisis----------------\n");
	
	for(int m=0; m<i; m++){
		if((strcmp(analisis[m].descripcion, Descripcion))==0){
			printf("%s\t", analisis[m].analisis);
			printf("%s\t", analisis[m].descripcion);
			printf("%s\t", analisis[m].condiciones);
			printf("%.2f\n", analisis[m].costo);
		}
	}
}

void consultarRegistroAnalisisCosto(int Costo){
	printf("\n\nConsultar registro analisis----------------\n");
	
	for(int m=0; m<i; m++){
		if(analisis[m].costo == Costo){
			printf("%s\t", analisis[m].analisis);
			printf("%s\t", analisis[m].descripcion);
			printf("%s\t", analisis[m].condiciones);
			printf("%.2f\n", analisis[m].costo);
		}
	}
}

void consultarRegistroDetalle(int detalle){
	printf("\n\nConsultar registro detalle----------------\n");
	
	for(int m=0; m<j; m++){
		if(DRegistroPruebas[m].id_Detalle == detalle){
			printf("%d\t", DRegistroPruebas[m].id_Detalle);
			printf("%s\t", DRegistroPruebas[m].analisis);
			printf("%s\t", DRegistroPruebas[m].descripcion);
			printf("%s\t", DRegistroPruebas[m].condiciones);
			printf("%.2f\n", DRegistroPruebas[m].costo);
		}
	}
}

void consultarRegistroDetalleAnalisis(char Analisis[7]){
	printf("\n\nConsultar registro analisis----------------\n");
	
	for(int m=0; m<j; m++){
		if((strcmp(DRegistroPruebas[m].analisis, Analisis))==0){
			printf("%d\t", DRegistroPruebas[m].id_Detalle);
			printf("%s\t", DRegistroPruebas[m].analisis);
			printf("%s\t", DRegistroPruebas[m].descripcion);
			printf("%s\t", DRegistroPruebas[m].condiciones);
			printf("%.2f\n", DRegistroPruebas[m].costo);
		}
	}
}

void DetalleRegistroFinal(int detalle){
	printf("\n\nRegistro Final----------------\n");
	
	for(int m=0; m<j; m++){
		if(DRegistroPruebas[m].id_Detalle == detalle){
			printf("%d\t", DRegistroPruebas[m].id_Detalle);
			printf("%s\t", DRegistroPruebas[m].analisis);
			printf("%s\t", DRegistroPruebas[m].descripcion);
			printf("%s\t", DRegistroPruebas[m].condiciones);
			printf("%.2f\n", DRegistroPruebas[m].costo);
		}
	}
}

/*
void modificarRegistroAnalisisDescripcion(char Analisis[7]){
	printf("\n\nModificar registro-------------\n");
	
	for(int m=0; m<i; m++){
		if((strcmp(analisis[m].analisis, Analisis))==0){
			validaAnalisis("Analisis: ", analisis[m].analisis);
			validaDescripcion("Descripcion: ", analisis[m].descripcion);
			validaDescripcion("Condiciones: ", analisis[m].condiciones);
			analisis[m].costo = validaFlotante("Costo: ");
		}
	}
}
*/

void modificarRegistroAnalisisDescripcion(char Analisis[7]){
	printf("\n\nModificar registro-------------\n");
	
	for(int m=0; m<i; m++){
		if((strcmp(analisis[m].analisis, Analisis))==0){
			validaDescripcion("Descripcion: ", analisis[m].descripcion);
		}
	}
}

void modificarRegistroAnalisisCondiciones(char Analisis[7]){
	printf("\n\nModificar registro-------------\n");
	
	for(int m=0; m<i; m++){
		if((strcmp(analisis[m].analisis, Analisis))==0){
			validaDescripcion("Condiciones: ", analisis[m].condiciones);
		}
	}
}

void modificarRegistroAnalisisCosto(char Analisis[7]){
	printf("\n\nModificar registro-------------\n");
	
	for(int m=0; m<i; m++){
		if((strcmp(analisis[m].analisis, Analisis))==0){
			analisis[m].costo = validaFlotante("Costo: ");
		}
	}
}

void modificarRegistroDetalleCosto(int id_Detalle){
	printf("\n\nModificar registro-------------\n");
	
	for(int m=0; m<j; m++){
		if(DRegistroPruebas[m].id_Detalle == id_Detalle){
			DRegistroPruebas[m].costo = validaFlotante("Costo: ");
		}
	}
}

void eliminarRegistroAnalisis(char Analisis[7]){
	for(int m=0; m<i; m++){
		if((strcmp(analisis[m].analisis, Analisis))==0){
			do{
				analisis[m] = analisis[m+1];
				m++;
			}while(m<i);
			i--;
			printf("\nRegistro Eliminado con exito\n");
			break;
		}
	}
}

void eliminarRegistroAnalisis(int detalle){
	for(int m=0; m<j; m++){
		if(DRegistroPruebas[m].id_Detalle == detalle){
			do{
				DRegistroPruebas[m] = DRegistroPruebas[m+1];
				m++;
			}while(m<j);
			j--;
			printf("\nRegistro Eliminado con exito\n");
			break;
		}
	}
}

void cargarInformacionDRegistroPruebas(){
	FILE *arch2 = NULL;
	
	if(!(arch2=fopen("DetalleRegistroPruebas.xls", "r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	
	while(!feof(arch2)){
		fscanf(arch2, "%d\t", &DRegistroPruebas[j].id_Detalle);
		fscanf(arch2, "%[^\t]\t", DRegistroPruebas[j].analisis);
		fscanf(arch2, "%[^\t]\t", DRegistroPruebas[j].descripcion);
		fscanf(arch2, "%[^\t]\t", DRegistroPruebas[j].condiciones);
		fscanf(arch2, "%f\n", &DRegistroPruebas[j].costo);
	
		j++;
	}
	fclose(arch2);
}

void cargarInformacionAnalisis(){
	FILE *arch1 = NULL;
	
	if(!(arch1=fopen("Analisis.xls", "r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	
	while(!feof(arch1)){
		fscanf(arch1, "%[^\t]\t", analisis[i].analisis);
		fscanf(arch1, "%[^\t]\t", analisis[i].descripcion);
		fscanf(arch1, "%[^\t]\t", analisis[i].condiciones);
		fscanf(arch1, "%f\n", &analisis[i].costo);

		i++;
	}
	fclose(arch1);
}

void actualizarArchivosAnalisis(){
	FILE *arch1 = NULL;
	
	if(!(arch1=fopen("Analisis.xls", "w"))){
		printf("Error al intentar crear el archivo");
		exit(1);
	}
	
	for(int m=0; m<i; m++){
		fprintf(arch1, "%s\t", analisis[m].analisis);
		fprintf(arch1, "%s\t", analisis[m].descripcion);
		fprintf(arch1, "%s\t", analisis[m].condiciones);
		fprintf(arch1, "%.2f\n", analisis[m].costo);
	}
	fclose(arch1);
}

void actualizarArchivosDetalle(){
	FILE *arch2 = NULL;
	
	if(!(arch2=fopen("DetalleRegistroPruebas.xls", "w"))){
		printf("Error al intentar crear el archivo");
		exit(1);
	}
	
	for(int m=0; m<j; m++){
		fprintf(arch2, "%d\t", DRegistroPruebas[m].id_Detalle);
		fprintf(arch2, "%s\t", DRegistroPruebas[m].analisis);
		fprintf(arch2, "%s\t", DRegistroPruebas[m].descripcion);
		fprintf(arch2, "%s\t", DRegistroPruebas[m].condiciones);
		fprintf(arch2, ".2f\n", DRegistroPruebas[m].costo);
	}
	fclose(arch2);
}
