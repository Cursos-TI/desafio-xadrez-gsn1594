#include <stdio.h>

int main(){

    int torre = 5;
    int bispo = 5;
    int i = 1;
    int rainha= 8;
    int j = 1;

     // Movimento da Torre usando for.
    
    printf("Movimento da Torre:\n\n");
    for (int i = 1; i <= torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo usando while.
   
    printf("\n\nMovimento do Bispo:\n\n");
    while (i <= bispo) {
        printf("Cima,Direita\n");
        i++;
    }

    // Movimento da Rainha usando do-while.
   
    printf("\n\nMovimento da Rainha:\n\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= rainha);

    return 0;

}
