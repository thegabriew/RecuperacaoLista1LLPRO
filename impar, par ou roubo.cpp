#include <stdio.h>
#include <locale.h> 

int main() {
	
   setlocale(LC_ALL,"Portuguese_Brazil");

   int p,j1,j2,r,a,d;
   
   printf("Ímpar, par ou roubo\n");
   printf("Jogador 1:");
   printf("0 - Ímpar\n1 - Par\n");
   scanf("%d",&p);
   printf("Jogador 1, escolha um número\n");
   scanf("%d",&j1);
   printf("Jogador 2, escolha um número\n");
   scanf("%d",&j2);
   printf("Jogador 1, você tentará roubar?\n");
   printf("1 - Sim\n0 - Não\n");
   scanf("%d",&r);
   printf("Jogador 2, você acusará o jogador 1?\n");
   printf("1 - Sim\n0 - Não\n");
   scanf("%d",&a);
 
    if (p == 1) { 
      d = (j1 + j2) % 2;
      
      	if (d == 0 && r == 0) {
            if (a == 0) {
				printf("O vencedor foi o jogador 1\n");} 
			if (a == 1) {
				printf("O vencedor foi o jogador 1\n");} 
      }
      
      	if (d != 0 && r == 1) { 
            if (a == 0) {
				printf("O vencedor foi o jogador 1\n");} 
			if (a == 1) {
				printf("O vencedor foi o jogador 2\n");} 
      }
      
      if (d != 0 && r == 0) {
            if (a == 0) {
				printf("O vencedor foi o jogador 2\n");} 
			if (a == 1) {
				printf("O vencedor foi o jogador 2\n");} 
      }
      
     	 if (d == 0 && r == 1) { 
            if (a == 0) {
				printf("O vencedor foi o jogador 1\n"); }
			if (a == 1) {
				printf("O vencedor foi o jogador 2\n");} 
	   	 }	
      } 
	  
	   if (!(p == 1)) { 
        	d = (j1 + j2) % 2;
        
      		if (d >= 1 && r == 0) { 
            	if (a == 0) {
				printf("O vencedor foi o jogador 1\n");} 
				if (a == 1) {
				printf("O vencedor foi o jogador 1\n");} 
      			}
      		
      		if (d == 0 && r == 1) {
            	if (a == 0) {
				printf("O vencedor foi o jogador 2\n");} 
				if (a == 1) {
				printf("O vencedor foi o jogador 2\n");}
      			}
      			
      		if (d == 0 && r == 0) {
            	if (a == 0) {
				printf("O vencedor foi o jogador 2\n");}
				if (a == 1) {
				printf("O vencedor foi o jogador 2\n");} 
     		 }	
      		
      		if (d >= 1 && r == 1) {
            	if (a == 0) {
				printf("O vencedor foi o jogador 2\n");} 
				if (a == 1) {
				printf("O vencedor foi o jogador 2\n");} 
      			}
  		}	
      		
    return 0;
}
