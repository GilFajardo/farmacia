void AgregarMenu(){
 	int opc=0;
 	
	do{
		agregarRegistroAnalisis();
		printf("¿Deseas agregar otro registro? 1.-si 0.-n0");
		scanf("%d");
	}while(opc==1);
	
	if(opc != 1){
		menuAD();
	}
}
