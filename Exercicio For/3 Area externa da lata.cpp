#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int h, r, ab, al, i, at;
	
	printf("\tCalculo da area da lata\n");
	
	for (i=1;i<=4;i++){
	printf("\nDigite o raio:");
	scanf("%d",&r);
	printf("Digite a altura:");
	scanf("%d",&h);
	ab = 3.14*pow(r,2);
	al = 2*3.14*r*h;
	at = 2*ab*al;
	printf("A area da lata é %d\n", at);
}
	system ("PAUSE");
	return 0;

}
