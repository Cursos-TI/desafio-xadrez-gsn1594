#include <stdio.h>

void mTorre(int casas){

if(casas>0){
    printf("Direita\n");
    mTorre(casas-1);

}
}

void mBispo(int casas1){

if(casas1>0){
    printf("Cima,Direita\n");
    mBispo(casas1-1);

}
}
void mRainha(int casas2){

if(casas2>0){
    printf("Esquerda\n");
    mRainha(casas2-1);

}
}

int main(){

    int j1 = 0;
    const int cBaixo = 2;
    const int cEsquerda = 1;

    printf("\nMovimento da Torre:\n\n");
    
    mTorre(5);
    
    printf("\n\nMovimento do Bispo:\n\n");
    
    mBispo(5);
    
    printf("\nMovimento da Rainha:\n\n");
    
    mRainha(8);
    
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
