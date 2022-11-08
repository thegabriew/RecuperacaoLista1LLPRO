#include <stdio.h>
#include <locale.h> 

int main() {
   setlocale(LC_ALL,"Portuguese_Brazil");
   
   int s,tv,c,h;
   
   printf("Calculadora de Fuso Horario\n");
   printf("Que horas você saiu?\n");
   scanf("%d",&s);
   printf("Qual foi o tempo de viagem?\n");
   scanf("%d",&tv);
   printf("Qual o fuso horário do lugar que chegou?\n");
   scanf("%d",&c);

   h = s + tv + c;
   
   if (h == 24 || h == 0) {
   		printf("0H\n");} 
   		
	   		else if (h > 24) {
   			h = h - 24;
   			printf("%dH\n",h); } 
   		
    		else if (h > 0 && h <= 23) {
   			printf("%dH\n",h);}
   			
      		else if (h < 0) {
   				h = h + 24;
   				printf("%dH\n",h);}
   		   		
    return 0;
}
