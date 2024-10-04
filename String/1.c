#include <stdio.h>
#include <math.h>

int main(){
char Nome[25], c;
    
    printf("Digite seu nome:");
    scanf("%s", Nome);
    printf("\nPrimeiras três letras do seu nome são: %c, %c, %c", Nome[0], Nome[1], Nome[2]);
}
