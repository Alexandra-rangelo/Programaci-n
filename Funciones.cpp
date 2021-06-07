#include <stdio.h>

double factorial(double x);

int main(){
	
	double numero, calculo;
	int condicion;
	
	do {
		printf("Ingresa el numero para calcular:");
		scanf("%lf", &numero);
		
			if (numero>0){
				calculo = factorial (numero);
				printf("El factorial del número %.01f es de: %.01f", numero, calculo);
			}
			else{
				 
				 do{
				 	
				 	printf("Opcion invalida, intente de nuevo");
				 	
				 	printf("Ingrese un numero positivo: ");
				 	scanf("%1f", &numero);
				 	
				 } while(numero < 0);
				 
				 calculo = factorial (numero);
				 printf("El factorial del numero %.01f es de: %.01f ", numero, calculo);
			}
			
			printf("Desea realizar otro calculo:");
			scanf("%d", &condicion);
	} while(condicion != 0);
	
	return 0;
	
	double factorial(double x) {
		
			if(x == 0 || x == 1){
				return 1;
			}		
			else{
			
				return x * factorial (x - 1);
			}	
		}
	}
	
	
