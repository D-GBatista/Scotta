//3) Dado um vetor unidimensional de 5 posições, armazene em cada índice um valor aleatório (pode-se repetir). Ao final informar quantos números são iguais.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int v1[5], c, i,c2, c3=0;

    srand(time(NULL));
    
    for (c = 0; c < 5; c++){
        v1[c]= rand() % 10;
    }

    for (c = 0; c < 5; c++){
        for(c2 = 0; c2 < 5; c2++){
            if(v1[c]==v1[c2]){
                c3++;}
    }
        printf("O valor %d aparece %d vezes\n", v1[c], c3);
        c3=0;
    }
    return 0;
}
