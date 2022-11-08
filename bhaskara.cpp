#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a,b,c,rz1,rz2,delta;
    
    printf("Calculadora de Bhaskara\n");
    printf("Insira o valor de A, B e C\n");
    printf("Valor de A: \n");
    scanf("%lf",&a);
    printf("Valor de B: \n");
    scanf("%lf",&b);
    printf("Valor de C: \n");
    scanf("%lf",&c);
    
    
    delta = (b * b) - (4 * a * c) ;

    
    rz1 = (-b + sqrt(delta)) / (2 * a) ;
    rz2 = (-b - sqrt(delta)) / (2 * a) ;
    
    if(a != 0 && delta > -1){
        printf("A primeira raiz equivale a %.5lf e a segunda a %.5lf\n",rz1, rz2);
    }
    else{
        printf("Este cálculo é impossível\n");
    }
 
    return 0;
}
