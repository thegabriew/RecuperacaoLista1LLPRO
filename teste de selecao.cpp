#include <stdio.h>
 
int main() {
 
   int w,x,y,z;
   
   printf("Teste de sele??o\n");
   printf("Digite 4 Valores inteiros\n");
   scanf("%d %d %d %d",&w,&x,&y,&z);
 
    if (x > y && z > w && y + z > w + x && y > 0 && z > 0 && w %2 == 0) {
        printf("Estes valores s?o aceitos\n");
    } else {
        printf("Estes valores n?o s?o aceitos\n");
	}
    
    return 0;
}
