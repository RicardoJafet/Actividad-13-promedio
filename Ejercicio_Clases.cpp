/*Autor: Ricardo Jafet Granados Chable, Realizado: 24/02/2022
    programa de clase en C: Promedio.
	*/
#include<stdio.h>

int main(){
	float cal, porcentaje_ap, prom, suma=0;
	int i=0, aprobadas=0, reprobadas=0;
	do {
		printf("Introduzca la calificacion:");
		scanf("f",&cal);
		if(cal>=0 && cal<=10) {
			i++;
			suma=suma+cal;
			if(cal<7){
				reprobadas++;
			}
			else{
				aprobadas++;
			}
		}
			else{
				printf("Calificacion invalida!!!\n");
			}
		}while(cal>=0);
	prom=suma/i;
	porcentaje_ap=aprobadas/i*100.0;
	printf("\nTotal de calificaciones introducidas: %d",i);
	printf("\nPromedio: %.1f",prom);
	printf("\nCalificaciones aprobadas: %d",aprobadas);
	printf("\nCalificaciones reprobadas: %d",reprobadas);
	printf("\nPorcentaje de aprobacion: %.2f",porcentaje_ap);
	return 0; 
	}
