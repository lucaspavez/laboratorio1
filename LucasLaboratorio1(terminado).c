#include <stdio.h>
#include <stdlib.h>
int main()
{
	float candidato1=0, candidato2=0, candidato3=0,nulo=0, votototal=0; 
	float porcentaje1, porcentaje2, porcentaje3;
	char voto;
	printf("ingrese su voto \n");
	printf("si quiere terminar el programa ingrese f \n");
	while (voto!='f'){
		
		scanf("%c",&voto);
		if (voto=='1'){
			candidato1 = candidato1 + 1;
		} 
		else if(voto=='2'){
			candidato2 = candidato2 + 1;
		}
		else if (voto=='3'){
			candidato3 = candidato3 + 1;
		}
		else{
			nulo = nulo + 1;
		}
		while (getchar()!= '\n');
		votototal+=1;
	}
	votototal-=1;
	porcentaje1 = ((candidato1/votototal)*100);
	porcentaje2 = ((candidato2/votototal)*100);
	porcentaje3 = ((candidato3/votototal)*100);
	
	printf("el total de votos es %.0f \n",votototal);
	printf("el candidato 1 obtuvo %.0f votos \n",candidato1);
	printf("el candidato 2 obtuvo %.0f votos \n",candidato2);
	printf("el candidato 3 obtuvo %.0f votos \n",candidato3);

	printf("el porcentaje de votos del candidato1 es %.2f \n",porcentaje1);
	printf("el porcentaje de votos del candidato2 es %.2f \n",porcentaje2);
	printf("el porcentaje de votos del candidato3 es %.2f \n",porcentaje3);
	
	if ((candidato1>candidato2)&& (candidato1>candidato3)){
		printf("Felicidades gano el candidato 1");
	}
	else if ((candidato2>candidato1)&&(candidato2>candidato3)){
		printf("Felicidades gano el candidato 2");
	}
	else if ((candidato3>candidato1)&&(candidato3>candidato3)){
		printf("Felicidades gano el candidato 3");
	}
	else {
		printf("A ocurrido un empate");
	}
	
		
	
}

	
