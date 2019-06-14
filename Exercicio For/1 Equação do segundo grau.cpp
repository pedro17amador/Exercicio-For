#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,c,delta,i;
	float x1,x2;
	
	puts("\tAlgoritmo que faz a equação do segundo grau 5 vezes.\n");
	
	
	for(i=1;i<=5;i++){
		printf("\n %d° Equação\n",i);
		
		printf("A = ");
		scanf("%d",&a);
		printf("B = ");
		scanf("%d",&b);
		printf("C = ");
		scanf("%d",&c);
		
		delta = pow(b,2)-4*a*c;
		x1 = (-b + sqrt(delta))/2*a;
		x2 = (-b - sqrt(delta))/2*a;
		
		if(delta >= 0){
			printf("O resultado de X1 é: %.1f\n",x1);
			printf("O resultado de X2 é: %.1f\n",x2);
		}
		else{
			printf("Operação invalida!!!\n");
		}
	}

	system("PAUSE");
	return 0;
}
