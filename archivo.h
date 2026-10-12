void crear_arch_Informacion_Analisis(){
	setlocale(LC_CTYPE, "Spanish");
	FILE *arch = NULL;
	//C:\VTRoot\HarddiskVolume3\Users\182006\Documents
	if(!(arch=fopen("Analisis.xls", "w"))){ //funcion requiere: archivo y lectura(w = si no existe no va a crear
												//pero si existe lo va a remplazar
		printf("Error al intentar crear archivo");
		exit(1);
	}
	for(int i = 0; i<1; i++){
		//fprintf(arch, "%d\t", info[i].matricula)
		
		fprintf(arch, "%s\t", analisisArch[i].analisis);
		fprintf(arch, "%s\t", analisisArch[i].descripcion);
		fprintf(arch, "%s\t", analisisArch[i].condiciones);
		fprintf(arch, "%.2f\n", analisisArch[i].costo);
	}
	
	
	fclose(arch);
}

void actualizarArchivos(){
	FILE *arch = NULL;
	
	if(!(arch=fopen("Analisis.xls", "w"))){
		printf("Error al intentar crear acrhivo");
		exit(1);
	}
	
	for(int i = 0; i<1; i++){
		//fprintf(arch, "%d\t", info[i].matricula)
		
		fprintf(arch, "%s\t", analisisArch[i].analisis);
		fprintf(arch, "%s\t", analisisArch[i].descripcion);
		fprintf(arch, "%s\t", analisisArch[i].condiciones);
		fprintf(arch, "%.2f\n", analisisArch[i].costo);
	}
}

void leer_arch_Informacion_Analisis(){
	FILE *arch = NULL;
	analisisR reg;
	
	if(!(arch=fopen("Analisis.xls", "r"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	printf("-------Registro en el archivo---------\n\n");
	
	while(!feof(arch)){
		fscanf(arch, "%[^\t]\t", reg.analisis);
		fscanf(arch, "%[^\t]\t", reg.descripcion);
		fscanf(arch, "%[^\t]\t", reg.condiciones);
		fscanf(arch, "%f\n", &reg.costo);
		
		printf("%s\t", reg.analisis);
		printf("%s\t", reg.descripcion);
		printf("%s\t", reg.condiciones);
		printf("%.2f\n", reg.costo);
	}
	fclose(arch);
}

void crear_arch_Informacion_Detalle(){
	setlocale(LC_CTYPE, "Spanish");
	FILE *arch = NULL;
	//C:\VTRoot\HarddiskVolume3\Users\182006\Documents
	if(!(arch=fopen("DetalleRegistroPruebas.xls", "w"))){ //funcion requiere: archivo y lectura(w = si no existe no va a crear
												//pero si existe lo va a remplazar
		printf("Error al intentar crear archivo");
		exit(1);
	}
	for(int i = 0; i<1; i++){
		//fprintf(arch, "%d\t", info[i].matricula)
		
		fprintf(arch, "%d\t", DpruebasArch[i].id_Detalle);
		fprintf(arch, "%s\t", DpruebasArch[i].analisis);
		fprintf(arch, "%s\t", DpruebasArch[i].descripcion);
		fprintf(arch, "%s\t", DpruebasArch[i].condiciones);
		fprintf(arch, "%.2f\n", DpruebasArch[i].costo);
	}
	fclose(arch);
}

void leer_arch_Informacion_Detalle(){
	FILE *arch = NULL;
	DpruebasR reg;
	
	if(!(arch=fopen("DetalleRegistroPruebas.xls", "r"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	printf("-------Registro en el archivo---------\n\n");
	
	while(!feof(arch)){
		fscanf(arch, "%d\t", &reg.id_Detalle);
		fscanf(arch, "%[^\t]\t", reg.analisis);
		fscanf(arch, "%[^\t]\t", reg.condiciones);
		fscanf(arch, "%[^\t]\t", reg.descripcion);
		fscanf(arch, "%f\n", &reg.costo);
		
		printf("%d\t", reg.id_Detalle);
		printf("%s\t", reg.analisis);
		printf("%s\t", reg.descripcion);
		printf("%s\t", reg.condiciones);
		printf("%.2f\n", reg.costo);
	}
	fclose(arch);
}

/*
void leer_arch_Informacion(){
	FILE *arch = NULL;
	Informacion reg;
	
	if(!(arch=fopen("Informacion.xls", "r"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	printf("-------Registro en el archivo---------\n\n");
	
	while(!feof(arch)){
		fscanf(arch, "%d\t", &reg.matricula);
		fscanf(arch, "%[^\t]\t", reg.nombre);
		fscanf(arch, "%[^\t]\t", reg.carrera);
		fscanf(arch, "%f\t", &reg.calif[0]);
		fscanf(arch, "%f\t", &reg.calif[1]);
		fscanf(arch, "%f\n", &reg.calif[2]);
		
		printf("%d\t", reg.matricula);
		printf("%s\t", reg.nombre);
		printf("%s\t", reg.carrera);
		printf("%.2f\t", reg.calif[0]);
		printf("%.2f\t", reg.calif[1]);
		printf("%.2f\n", reg.calif[2]);
	}
	fclose(arch);
}
*/

/*
void crear_arch_Informacion1(){
	setlocale(LC_CTYPE, "Spanish");
	FILE *arch = NULL;
	//C:\VTRoot\HarddiskVolume3\Users\182006\Documents
	if(!(arch=fopen("Analisis.xls", "w"))){ //funcion requiere: archivo y lectura(w = si no existe no va a crear
												//pero si existe lo va a remplazar
		printf("Error al intentar crear archivo");
		exit(1);
	}
	for(int i = 0; i<10; i++){
		//fprintf(arch, "%d\t", info[i].matricula)
		
		fprintf(arch, "%s\t", analisis[i].analisis);
		fprintf(arch, "%s\t", analisis[i].descripcion);
		fprintf(arch, "%s\t", analisis[i].condiciones);
		fprintf(arch, "%.2f\n", analisis[i].costo);
	}
	fclose(arch);
}

void leer_arch_Informacion1(){
	FILE *arch = NULL;
	analisisR reg;
	
	if(!(arch=fopen("Analisis.xls", "r"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	printf("-------Registro en el archivo---------\n\n");
	
	while(!feof(arch)){
		fscanf(arch, "%[^\t]\t", reg.analisis);
		fscanf(arch, "%[^\t]\t", reg.descripcion);
		fscanf(arch, "%[^\t]\t", reg.condiciones);
		fscanf(arch, "%f\n", &reg.costo);
		
		printf("%s\t", reg.analisis);
		printf("%s\t", reg.descripcion);
		printf("%s\t", reg.condiciones);
		printf("%.2f\n", reg.costo);
	}
	fclose(arch);
}

void crear_arch_Informacion2(){
	setlocale(LC_CTYPE, "Spanish");
	FILE *arch = NULL;
	//C:\VTRoot\HarddiskVolume3\Users\182006\Documents
	if(!(arch=fopen("RegistroPruebas.xls", "w"))){ //funcion requiere: archivo y lectura(w = si no existe no va a crear
												//pero si existe lo va a remplazar
		printf("Error al intentar crear archivo");
		exit(1);
	}
	for(int i = 0; i<10; i++){
		//fprintf(arch, "%d\t", info[i].matricula)
		
		fprintf(arch, "%d\t", RegistroPruebas[i].id_Prueba);
		fprintf(arch, "%s\t", RegistroPruebas[i].estado);
		fprintf(arch, "%.2f\t", RegistroPruebas[i].total);
		fprintf(arch, "%d\n", RegistroPruebas[i].id_Paciente);
	}
	fclose(arch);
}

void leer_arch_Informacion2(){
	FILE *arch = NULL;
	pruebasR reg;
	
	if(!(arch=fopen("RegistroPruebas.xls", "r"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	printf("-------Registro en el archivo---------\n\n");
	
	while(!feof(arch)){
		fscanf(arch, "%d\t", &reg.id_Prueba);
		fscanf(arch, "%[^\t]\t", reg.estado);
		fscanf(arch, "%f\t", &reg.total);
		fscanf(arch, "%d\n", &reg.id_Paciente);
		
		printf("%d\t", reg.id_Prueba);
		printf("%s\t", reg.estado);
		printf("%.2f\t", reg.total);
		printf("%d\n", reg.id_Paciente);
	}
	fclose(arch);
}

void crear_arch_Informacion3(){
	setlocale(LC_CTYPE, "Spanish");
	FILE *arch = NULL;
	//C:\VTRoot\HarddiskVolume3\Users\182006\Documents
	if(!(arch=fopen("DetalleRegistroPruebas.xls", "w"))){ //funcion requiere: archivo y lectura(w = si no existe no va a crear
												//pero si existe lo va a remplazar
		printf("Error al intentar crear archivo");
		exit(1);
	}
	for(int i = 0; i<10; i++){
		//fprintf(arch, "%d\t", info[i].matricula)
		
		fprintf(arch, "%d\t", DRegistroPruebas[i].id_Detalle);
		fprintf(arch, "%s\t", DRegistroPruebas[i].analisis);
		fprintf(arch, "%s\t", DRegistroPruebas[i].descripcion);
		fprintf(arch, "%s\t", DRegistroPruebas[i].condiciones);
		fprintf(arch, "%.2f\n", DRegistroPruebas[i].costo);
	
	}
	fclose(arch);
}

void leer_arch_Informacion3(){
	FILE *arch = NULL;
	DpruebasR reg;
	
	if(!(arch=fopen("DetalleRegistroPruebas.xls", "r"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	printf("-------Registro en el archivo---------\n\n");
	
	while(!feof(arch)){
		
		fscanf(arch, "%d\t", &reg.id_Detalle);
		fscanf(arch, "%[^\t]\t", reg.analisis);
		fscanf(arch, "%[^\t]\t", reg.descripcion);
		fscanf(arch, "%[^\t]\t", reg.condiciones);
		fscanf(arch, "%f\n", &reg.costo);
		
		printf("%d\t", reg.id_Detalle);
		printf("%s\t", reg.analisis);
		printf("%s\t", reg.descripcion);
		printf("%s\t", reg.condiciones);
		printf("%.2f\n", reg.costo);
	}
	fclose(arch);
}

void crear_arch_Informacion4(){
	setlocale(LC_CTYPE, "Spanish");
	FILE *arch = NULL;
	//C:\VTRoot\HarddiskVolume3\Users\182006\Documents
	if(!(arch=fopen("EstructuraPaciente.xls", "w"))){ //funcion requiere: archivo y lectura(w = si no existe no va a crear
												//pero si existe lo va a remplazar
		printf("Error al intentar crear archivo");
		exit(1);
	}
	for(int i = 0; i<10; i++){
		//fprintf(arch, "%d\t", info[i].matricula)
		
		fprintf(arch, "%d\t", Epaciente[i].id_Paciente);
		fprintf(arch, "%s\t", Epaciente[i].nombre);
		fprintf(arch, "%d\t", Epaciente[i].edad);
		fprintf(arch, "%d\t", Epaciente[i].telefono);
		fprintf(arch, "%s\t", Epaciente[i].email);
		fprintf(arch, "%s\n", Epaciente[i].fechaYhora);
	}
	fclose(arch);
}

void leer_arch_Informacion4(){
	FILE *arch = NULL;
	Paciente reg;
	
	if(!(arch=fopen("EstructuraPaciente.xls", "r"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	printf("-------Registro en el archivo---------\n\n");
	
	while(!feof(arch)){
		
		fscanf(arch, "%d\t", &reg.id_Paciente);
		fscanf(arch, "%[^\t]\t", reg.nombre);
		fscanf(arch, "%d\t", &reg.edad);
		fscanf(arch, "%d\t", &reg.telefono);
		fscanf(arch, " %[^\t]\t", reg.email);
		fscanf(arch, "%[^\t]\n", reg.fechaYhora);
		
		printf("%d\t", reg.id_Paciente);
		printf("%s\t", reg.nombre);
		printf("%d\t", reg.edad);
		printf("%d\t", reg.telefono);
		printf("%s\t", reg.email);
		printf("%s\n", reg.fechaYhora);
	}
	fclose(arch);
}
*/
