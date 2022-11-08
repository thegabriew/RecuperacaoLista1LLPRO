#include <stdio.h>
#include <locale.h>
int main() {
	
 setlocale(LC_ALL,"Portuguese_Brazil");
 
   int inicio,fim,tempo;
   
   printf("Calculadora de Tempo de Jogo\n");
   
   pritnf("Insira a hora em que o jogo começou\n");
   scanf("%d",&inicio);
   printf("Insira a hora em que o jogo terminou\n");
   scanf("%d",&fim);
   
   if (inicio < fim) {
    tempo = fim - inicio;
    printf("O tempo de jogo foi de %.d horas\n",tempo);  
   }
   
   else {
       tempo = (24 - inicio) + fim;
       printf("O JOGO DUROU %.d HORA(S)\n",tempo);
   }
    return 0;
}
