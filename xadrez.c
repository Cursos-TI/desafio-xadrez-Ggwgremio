#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int bispo = 1, rainha = 1, torre = 1; //peças a serem usadas no jogo.

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
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
