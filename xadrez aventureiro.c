#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    // Implementação de Movimentação do Bispo
    printf("--- Movimento do Bispo (5 casas na diagonal) ---\n");
    int passoBispo = 1;
    while (passoBispo <= MOV_BISPO) {
        printf("Cima, Direita\n");
        passoBispo++;
    }

    // Implementação de Movimentação da Torre
    printf("\n--- Movimento da Torre (5 casas para a direita) ---\n");
    for (int passoTorre = 1; passoTorre <= MOV_TORRE; passoTorre++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int passoRainha = 1;
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha <= MOV_RAINHA);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    printf("\n--- Movimento do Cavalo (Em 'L': 2 para Baixo, 1 para a Esquerda) ---\n");
    const int CAVALO_BAIXO = 2;
    const int CAVALO_ESQUERDA = 1;

    // Loop aninhado: O 'for' (externo) controla o movimento principal (vertical).
    for (int i = 1; i <= CAVALO_BAIXO; i++) {
        printf("Baixo\n");
        
        // Quando o cavalo termina de descer as casas necessárias, 
        // ele entra no loop aninhado 'while' (interno) para virar à esquerda.
        if (i == CAVALO_BAIXO) {
            int j = 1;
            while (j <= CAVALO_ESQUERDA) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}