void imprimirEstructuraAnalisis(){
	printf("Registros actuales en Analisis\n");
	
	for(int m=0; m<i; m++){
		printf("%s\t", analisis[m].analisis);
		printf("%s\t", analisis[m].descripcion);
		printf("%s\t", analisis[m].condiciones);
		printf("%.2f\n", analisis[m].costo);
	}
}

void imprimirEstructuraDetalle(){
	printf("Registros actuales en Detalle\n");
	
	for(int m=0; m<j; m++){
		printf("%d\t", DRegistroPruebas[m].id_Detalle);
		printf("%s\t", DRegistroPruebas[m].analisis);
		printf("%s\t", DRegistroPruebas[m].descripcion);
		printf("%s\t", DRegistroPruebas[m].condiciones);
		printf("%.2f\n", DRegistroPruebas[m].costo);
	}
}

