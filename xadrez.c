#include <stdio.h>

int main() {
    int bispo = 1, rainha = 1, torre = 1; //peças a serem usadas no jogo.
    int a , b;

    printf("Bispo\n");
    while (bispo <= 5)
    {
        printf("direita, cima %d\n", bispo); //direção e casas que o bispo ira andar.
        bispo++;
    }
    printf("\nTorre\n");
    while (torre <= 5)
    {
        printf("direita %d\n", torre); //direção e casas que a torre ira andar.
        torre++;
    }
    printf("\nRainha\n");
    while (rainha <= 8)
    {
        printf("esquerda %d\n", rainha); //direção e casas que a rainha ira andar.
        rainha++;
    }
    // Nível Aventureiro - Movimentação do Cavalo
    printf("\nCavalo\n");
    for (a = 1; a <= 1 ; a++) //feito com for
    {
        printf("baixo %d\n", a); //direção e casas que o cavalo ira andar
        for (b = 1; b <= 3; b++)
        {
             printf("esquerda %d\n", b);
        }
        
    }
    
    printf("\nCavalo\n");
    int c = 1;
    while (c <= 1) { //feito com while
        int d = 1;
            printf("baixo %d\n", c); //direção e casas que o cavalo ira andar
            while (d <= 3) {
            printf("esquerda %d\n", d);
            d++;
        }
        printf("\n");
        c++;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
