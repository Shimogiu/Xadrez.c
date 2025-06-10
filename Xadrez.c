#include <stdio.h>

int main() {
//Movimento da Torre usando FOR
// A torre se move 5 casas para direita
printf("Movimento da Torre:\n");
for (int i = 1; i<=5; i++) {
    printf("Casa %d: Direita\n",i);
}

printf("\n");

//Movimentação do Bispo usando o While
//O bispo se move 5 casas na diagonal, para cima e para direita
printf("Movimento do Bispo:\n");
int j=1;
while (j<=5) {
    printf("Casa %d: Cima Direta\n", j);
    j++;
}

printf("\n");

//Movimento da Rainha
// A rainha se move 8 casas para a esquerda
printf("Movimento da Rainha:\n");
int k = 1;
do {
    printf("Casa %d: Esquerda\n", k);
    k++;
  }  while(k <=8);



return 0;
}
