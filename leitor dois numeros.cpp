#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int v, v1, c;
	float r;
	
	printf("Insira um n?mero inteiro\n");
	scanf("%d",&v);
	printf("Insira mais um n?mero inteiro\n");
	scanf("%d",&v1);
	
	printf("Que opera??o matem?tica deseja realizar?\n");
	printf("1 = Soma; 2 = Subtra??o; 3 = Multiplica??o; 4 = Divis?o;\n");
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
				printf("Essa divis?o n?o pode ser realizada\n");
				return 0;
		}
		
		printf("O resultado da opera??o ? %.2f",r);
	} 
		else {
		printf("N?mero invalido, retorne e digite novamente um n?mero v?lido\n");
	}
	
	return 0;
}
