#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int v,r,i;
	
	puts("\tAlgoritmo que calcula o volume de 10 esferas.");
	
	for(i=1;i<=10;i++){
		printf("\n%d° Esfera\n",i);	
		puts("Digite o valor do raio:");
		scanf("%d",&r);
		
		v = (4*3.14*(r*r*r)/3);
		
		printf("O valor do volume da esfera é: %d\n",v);
	}
	return 0;
}



