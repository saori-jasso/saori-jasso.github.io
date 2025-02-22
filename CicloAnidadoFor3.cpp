#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	 
	printf("Programa creado por Saori Nayelli Jasso Pelayo ");
	printf(" Matricula: 186482\n");
	
	srand(time(NULL)); 
	HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	//Variables 
	int opc,km,color=1,nCuadro,nPiram,sabor;
	//Contadores 
	int contVa=0,contCho=0,contFre=0,cont=1;
	
	printf("\n--------------------MENU--------------------------\n"); 
	printf("1. Carrera de carros\n"); 
	printf("2. Cuadro de n niveles\n"); 
	printf("3. Piramide de n niveles\n"); 
	printf("4. Preferencia de sabores de nieve a 30 personas\n"); 
	printf("5. Salir\n"); 
	printf("\n--------------------------------------------------\n"); 
		
			
	
	
	do {
		printf("\nElige la opcion correspondiente al menu: "); 
		scanf("%d", &opc); 
	
		switch (opc){
			case 1: 
				printf("\n--------------CARRERA DE CARROS--------------\n"); 	
  				for(int i=0;i<=9;i++){
  					printf("\nCarro %d: ", cont); 
  					km = 1 + rand()% (21-1);
		
					for(int j=0;j<km;j++){
					printf("-"); 
					}		

					printf(" %d km", km);
					SetConsoleTextAttribute(hConsole, color);
					printf("\n"); 
			
					color++;
  					cont++; 
					}
					break; 
		
			case 2: 
				printf("\n--------------------CUADRO--------------------\n"); 
				do{
					printf("Elige de cuanto sera tu cuadro (numeros del 1 al 9): "); 
					scanf("%d", &nCuadro); 	
				}while((nCuadro<=0) || (nCuadro>9)); 
						
				for(int i=1; i<=nCuadro;i++){
				
					for(int j=1; j<=nCuadro;j++){
						printf("%d ",i); 
					}
					printf("\n"); 	
					color++; 
				}			
			
			break; 
		
			case 3:
				printf("\n------------------PIRAMIDE------------------\n"); 
				do{
					printf("Elige de cuanto sera tu piramide (numeros del 1 al 9): "); 
					scanf("%d", &nPiram); 	
				}while((nPiram<=0)||(nPiram>9)); 
		
				for(int i=1;i<=nPiram;i++){
			
					for(int j=1;j<=i;j++){
						printf("%d", j);  
				}	
					printf("\n");
				}				
				break; 
			
			case 4: 
			 	printf("\n------------------SABORES------------------\n");
				printf("Se realizo una encuesta a 30 personas\n"); 
				printf("Donde 1-Vainilla , 2-Chocolate , 3-Fresa\n"); 
				printf("Los resultados fueron los siguientes: \n"); 
			
				for(int i=1; i<=30;i++){
					sabor=1+rand()%(4-1); 
					printf("%d\t",sabor);
					
					if(sabor==1) {
						contVa++; 	
					}
					else if(sabor==2){
						contCho++;
					}
					else{
						contFre++; 
					}	
			
				}
				printf("\n\n%d personas prefirieron el sabor de vainilla\n", contVa);
				printf("%d personas prefirieron el sabor de chocolate\n",contCho); 
				printf("%d personas prefirieron el sabor de fresa\n", contFre); 
				break; 
		
			case 5:
				printf("\nFIN DEL PROGRAMA");
				return 0; 	
				break; 	
		
			default: 
				printf("Recuerda seleccionar una opcion valida del menu"); 
				break;
	
		}
	
		color=1; 
		cont=1; 
		contVa=0; 
		contCho=0;
		contFre=0;
		SetConsoleTextAttribute(hConsole, 15);		
	}while(opc!=5);

	return 0; 
}
