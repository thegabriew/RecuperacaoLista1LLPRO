#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int v, v1, c;
	float r;
	
	printf("Insira um número inteiro\n");
	scanf("%d",&v);
	printf("Insira mais um número inteiro\n");
	scanf("%d",&v1);
	
	printf("Que operação matemática deseja realizar?\n");
	printf("1 = Soma; 2 = Subtração; 3 = Multiplicação; 4 = Divisão;\n");
	scanf("%d",&c);
	
	if (c >= 1 && c <= 4) {
		
		if (c == 1) {
			r = v + v1;
		} 
		else if (c == 2) {
				r = v - v1;
		} 
		else if (c == 3) {
				r = v * v1;
		} 
		else if (c == 4 && v1 > 0 || v1 < 0) {
				r =(float) v / v1;
		} else  {
				printf("Essa divisão não pode ser realizada\n");
				return 0;
		}
		
		printf("O resultado da operação é %.2f",r);
	} 
		else {
		printf("Número invalido, retorne e digite novamente um número válido\n");
	}
	
	return 0;
}
