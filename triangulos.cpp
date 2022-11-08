#include <stdio.h>
#include <locale.h>  
 int main() {
 	
    setlocale(LC_ALL,"Portuguese_Brazil");     
    
	double a, b, c, A, B, C;
	
	printf("Teste de Triângulo\n");
	printf("Insira 3 valores para testarmos\n");
	scanf("%lf %lf %lf", &a,&b,&c);

	if (a >= b && a >= c) {
		A = a;
		B = b;
		C = c;	
	}
	
	if (b >= a && b >= c) {
		A = b;
		B = a;
		C = c;	
	}
	
	if (c >= b && c >= a) {
		A = c;
		B = b;
		C = a;	
	}
	
    if (A >= B + C ) {
    	printf("Estes valores não formam triângulos\n"); }
	
	else {
	    
    	if ((A * A) == (B * B) + (C * C)) {
    	    printf("Se fomará um triângulo  retângulo\n"); }
    	
    	if ((A * A) > (B * B) + (C * C)) {
    	    printf("Se fomará um triângulo obtusângulo\n"); }
    	
    	if ((A * A) < (B * B) + (C * C)) {
    	    printf("Se fomará um triângulo acutângulo\n"); }
    	
    	if ((A == B) && (B == C) && (C == A)) {
    	    printf("Se fomará um triângulo equilatero\n"); }
    	
    	if ((A == B && A != C) || (B == C && B != A) || (C == A && C !=B )) {
    	    printf("Se fomará um triângulo isosceles\n"); }
	}
    return 0;
}
