#include <stdio.h>
#include <locale.h>  
 int main() {
 	
    setlocale(LC_ALL,"Portuguese_Brazil");     
    
	double a, b, c, A, B, C;
	
	printf("Teste de Tri�ngulo\n");
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
    	printf("Estes valores n�o formam tri�ngulos\n"); }
	
	else {
	    
    	if ((A * A) == (B * B) + (C * C)) {
    	    printf("Se fomar� um tri�ngulo  ret�ngulo\n"); }
    	
    	if ((A * A) > (B * B) + (C * C)) {
    	    printf("Se fomar� um tri�ngulo obtus�ngulo\n"); }
    	
    	if ((A * A) < (B * B) + (C * C)) {
    	    printf("Se fomar� um tri�ngulo acut�ngulo\n"); }
    	
    	if ((A == B) && (B == C) && (C == A)) {
    	    printf("Se fomar� um tri�ngulo equilatero\n"); }
    	
    	if ((A == B && A != C) || (B == C && B != A) || (C == A && C !=B )) {
    	    printf("Se fomar� um tri�ngulo isosceles\n"); }
	}
    return 0;
}
