#include <stdio.h>

// Funcoes recursivas
// Movimento da Torre 5 casas para a direita
void moverTorre(int passos) {
    if (passos > 0) {
        printf("Direita\n");
        moverTorre(passos - 1); // chamada recursiva
    }
}

// Movimento do Bispo 5 casas em diagonal cima e direita
void moverBispoRecursivo(int passos) {
    if (passos > 0) {
        printf("Cima Direita\n");
        moverBispoRecursivo(passos - 1);
    }
}

// Movimento da Rainha 8 casas para a esquerda
void moverRainha(int passos) {
    if (passos > 0) {
        printf("Esquerda\n");
        moverRainha(passos - 1);
    }
}

// Movimento do cavalo com loop complexo 

void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    // Cavalo: 2 casas para cima e 1 para a direita 
    for (int i = 0; i < 2; i++) {
        // imprime duas vezes cima
        printf("Cima\n");

        // após o segundo Cima, vai pra direita
        if (i == 1) {
            int j = 0;
            while (j < 1) {
                j++;
                printf("Direita\n");
                break;
            }
        }
    }

    printf("\n");
}

// Bispo com loop aninhado

void moverBispoComLoops() {
    printf("Movimento do Bispo com loops aninhados:\n");

    // movimento diagonal cima-direita 5 movimentos
    for (int linha = 1; linha <= 5; linha++) {
        for (int coluna = 1; coluna <= 1; coluna++) {
            printf("Cima Direita\n");
        }
    }

    printf("\n");
}

int main() {
    // Torre com recursão
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Bispo com recursão
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(5);
    printf("\n");

    // Rainha com recursão
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Cavalo com loops aninhados e lógica complexa
    moverCavalo();

    // Bispo com loops aninhados
    moverBispoComLoops();

    return 0;
}
