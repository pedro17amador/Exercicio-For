#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,c,i;
	
	
	for(i=1;i<=10;i++){
		printf("\n%d° Triângulo",i);
		puts("\nDigite um número:");
		scanf("%d",&a);
		puts("Digite outro número:");
		scanf("%d",&b);
		printf("Digite mais um número:");
		scanf("%d",&c);
		
		if(a+b>c && a+c>b && b+c>a){
			if(a==b && b==c){
				printf("É equilatero\n");
			}
			else{
				if(a!=b && b!=c && a!=c){
					printf("É escaleno\n");
				}
				else{
					printf("É isoceles\n");
				}
			}
		}
		else{
			printf("Não é um triângulo\n");
		}
	}

	system("PAUSE");
	return 0;
}
