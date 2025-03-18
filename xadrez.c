#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int torre = 5; // Uma casa pra frente 
    int bispo = 5; // para direitadiagonal para cima e à direita
    int rainha = 8; // para a esquerda

    // Movimentação da Torre: 5 casas para a direita
    printf("Movimentaçâo da torre: \n");
    int i = 0;
    while (i < torre)
    {
        printf("Direira\n");
        i++;
    }
    
    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita
    printf("Movimentaçâo do bispo:\n");
    int j = 0;
    do {
        printf("Cima Direita\n");
        j++;
    } while (j < bispo);

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("Movimentação da rainha:\n");
    for (i = 0; i < rainha; i++)
    {
        printf("Esquerda\n");
    }
    

    return 0;
}
