#include <stdio.h>

int main(){

    int torre = 5;
    int bispo = 5;
    int i = 1;
    int rainha= 8;
    int j = 1;
    int j1 = 0;
    const int cBaixo = 2;
    const int cEsquerda = 1;

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


 // Quantidade de casas a mover: 2 para baixo, 1 para esquerda.
   

    printf("\n\nMovimento do Cavalo:\n\n");

    // movimenta para baixo usando for.

    for (int i1 = 0; i1 < cBaixo; i1++) {
        printf("Baixo\n");

        // usando while para mover para a esquerda uma vez após descer.
        
        while (j1 < cEsquerda && i1 == cBaixo - 1) {
            // Só executa quando terminou de descer (na última iteração do for)
            printf("Esquerda\n");
            j1++;
        }
    }



    return 0;

}
