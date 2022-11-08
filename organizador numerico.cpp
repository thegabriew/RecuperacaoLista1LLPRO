#include <stdio.h>
#include <locale.h> 

int main() {
 setlocale(LC_ALL,"Portuguese_Brazil");
 
    int a,b,c;
 	
	printf("Organizador númerico\n");
	printf("O programa organizará os números em ordem crescente e na que foram inseridos\n");
    scanf("%d %d %d",&a,&b,&c);
    
    
    
    if(a < b && a < c && b > c) {
    	
        printf("Ordem Crescente:\n%d\n%d\n%d\n\nOrdem Digitada:\n%d\n%d\n%d\n",a,c,b,a,b,c);
    }
    
    if(a < c && a < b && c > b) {
        printf("Ordem Crescente:\n%d\n%d\n%d\n\nOrdem Digitada:\n%d\n%d\n%d\n",a,b,c,a,b,c);
    }
    
    if (b < a && b < c && a > c) {
        printf("Ordem Crescente:\n%d\n%d\n%d\n\nOrdem Digitada:\n%d\n%d\n%d\n",b,c,a,a,b,c);
    }
    
     if (b < c && b < a && c > a) {
        printf("Ordem Crescente:\n%d\n%d\n%d\n\nOrdem Digitada:\n%d\n%d\n%d\n",b,a,c,a,b,c);
    }
    
    if (c < a && c < b && b > a) {
        printf("Ordem Crescente:\n%d\n%d\n%d\n\nOrdem Digitada:\n%d\n%d\n%d\n",c,a,b,a,b,c);
    }
    
     if (c < b && c < a && a > b) {
     	printf("Ordem Crescente:\n%d\n%d\n%d\n\nOrdem Digitada:\n%d\n%d\n%d\n",c,b,a,a,b,c);
    }
 
    return 0;
}
