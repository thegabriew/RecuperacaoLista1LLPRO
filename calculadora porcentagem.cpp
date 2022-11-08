#include <stdio.h> 
#include <locale.h> 

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int num;
	float a,b,c;
	
	printf("Conversor de porcentagem\n");
	printf("Insira um valor\n");
	scanf("%f",&a);
	printf("Qual a porcetagem desejada?\n");
	scanf("%f",&b);
	
	printf("Que tipo de calculo deseja realizar?\n");
	printf("1 para Calcular percentual\n");
	printf("2 para Calcular valor incicial somado ao percentual\n");
	printf("3 para Calcular valor inicial menos o percentual\n");
	scanf("%d",&num);
	
	if (num >= 1 && num <= 3) {
	
	if (num == 1) {
		c =(float) (b / 100) * a;
	} else if (num == 2) {
		c =(float) ((b / 100) * a) + a;
	} else {
		c =(float) a - ((b / 100) * a);
	}
	
	printf("%.2f é o resultado",c);
	}
	else {
		printf("Este valor não é aceitável, tente outra vez\n");
	}
	
	return 0;
}
