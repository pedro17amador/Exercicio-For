#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,n3,n4,md;
	int i;
	
	printf("\tAlgoritmo que calcula a média de um aluno.\n");
	
	for(i=1;i<=4;i++){
		printf("\n%d° Aluno\n",i);	
		printf("Digite a primeira nota do aluno:");
		scanf("%f",&n1);
		printf("Digite a segunda nota do aluno:");
		scanf("%f",&n2);
		printf("Digite a terceira nota do aluno:");
		scanf("%f",&n3);
		printf("Digite a quarta nota do aluno:");
		scanf("%f",&n4);
		
		md = (n1+n2+n3+n4)/4;
		
		if(md >= 7){
			printf("\nA média do aluno é: %.2f\n",md);
			printf("Aprovado\n");
		}
		else{
			printf("\nA média do aluno é: %.2f \n", md);
			printf ("Reprovado\n");
		}
	}
	system("PAUSE");
	return 0;
}
