#include <stdio.h>
#include <locale.h> 
int main() {
	
  setlocale(LC_ALL,"Portuguese_Brazil");
  
  float a,b,c,d,r,m,mf;
  
  	printf("Calculadora de m�dia de 3\n");
  	
  	printf("Insira a primeira nota\n");
    scanf("%f",&a);
    printf("Insira a segunda nota\n");
    scanf("%f",&b);
    printf("Insira a terceira nota\n");
    scanf("%f",&c);
    printf("Insira a quarta nota\n");
    scanf("%f",&d);
    
    m = (a*2+b*3+c*4+d*1)/10;
    
    if(m >= 7) {
        printf("M�dia: %.1f\nO aluno foi aprovado.\n",m);
    }
    
	if (m < 5) {
        printf("M�dia: %.1f\nO aluno foi reprovado.\n",m);
    }
    
    if(m >= 5 && m < 7) {
    	printf("Aluno foi para recupera��o\n");
    	printf("Insira a nota da recupera��o\n");
        scanf("%f",&r);
        printf("Media: %.1f\n",m);
        printf("Aluno est� em exame.\n");
        printf("Nota do exame: %.1f\n",r);
        mf = (r+m)/2;
        
        if(mf >= 5) {
            printf("O aluno foi aprovado.\n");
        }
        
        else {
            printf("O aluno foi aprovado.\n");
        }
        
        printf("M�dia final: %.1f\n",mf);
    }
    
    return 0;
}

