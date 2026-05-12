#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre - Funções Recursivas e Loops Aninhados

// --- FUNÇÕES RECURSIVAS ---

// Movimentação da Torre
// Utiliza recursividade simples para mover para a Direita
void moverTorre(int passos) {
    if (passos > 0) {
        printf("Direita\n");
        moverTorre(passos - 1); // Chama a si mesma diminuindo o passo
    }
}

// Movimentação da Rainha
// Utiliza recursividade simples para mover para a Esquerda
void moverRainha(int passos) {
    if (passos > 0) {
        printf("Esquerda\n");
        moverRainha(passos - 1); // Chama a si mesma diminuindo o passo
    }
}

// Movimentação do Bispo
// Exigência: Recursividade aliada a Loops Aninhados (Externo vertical, Interno horizontal)
void moverBispo(int passos) {
    if (passos > 0) {
        // Loops aninhados simulando o passo diagonal
        for (int i = 0; i < 1; i++) { // Loop Externo (Movimento Vertical)
            printf("Cima\n");
            for (int j = 0; j < 1; j++) { // Loop Interno (Movimento Horizontal)
                printf("Direita\n");
            }
        }
        moverBispo(passos - 1); // Continua a recursão para a próxima casa
    }
}

int main() {
    // Declaração de constantes para as recursões
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;

    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorre(MOV_TORRE);

    printf("\n--- Movimento do Bispo (Recursivo + Aninhado) ---\n");
    moverBispo(MOV_BISPO);

    printf("\n--- Movimento da Rainha (Recursivo) ---\n");
    moverRainha(MOV_RAINHA);

    printf("\n--- Movimento do Cavalo (Loops Complexos) ---\n");
    // O Cavalo se move em L: 2 para cima e 1 para a direita.
    // Exigência: Loops aninhados, múltiplas variáveis, continue e break.
    
    // Loop externo com múltiplas variáveis controlando a execução do movimento "L"
    for (int L_concluido = 0, iteracao = 1; L_concluido < 1; iteracao++) {
        
        // Loop interno controlando os passos individuais do Cavalo
        for (int passo = 1; passo <= 3; passo++) {
            
            // Condição para os movimentos verticais (os 2 primeiros passos)
            if (passo <= 2) {
                printf("Cima\n");
                continue; // Pula o restante do bloco e volta pro início do loop interno
            }
            
            // Condição para o movimento horizontal (o último passo do "L")
            if (passo == 3) {
                printf("Direita\n");
                L_concluido = 1; // Atualiza a variável do loop externo
                break; // Encerra o loop interno imediatamente
            }
        }
    }

    return 0;
}