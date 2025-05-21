#include <stdio.h>

// Define o tamanho máximo de movimento
#define MAX_MOVES 3

// Função recursiva para movimentar a Torre para cima
void moverTorreCima(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    moverTorreCima(passos - 1);
}

// Função recursiva para movimentar a Torre para baixo
void moverTorreBaixo(int passos) {
    if (passos == 0) return;
    printf("Baixo\n");
    moverTorreBaixo(passos - 1);
}

// Função recursiva para movimentar a Torre para a esquerda
void moverTorreEsquerda(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverTorreEsquerda(passos - 1);
}

// Função recursiva para movimentar a Torre para a direita
void moverTorreDireita(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorreDireita(passos - 1);
}

// Função recursiva para o movimento diagonal do Bispo
void moverBispoDiagonal(int passos) {
    if (passos == 0) return;
    printf("Diagonal Superior Direita\n");
    moverBispoDiagonal(passos - 1);
}

// Função da Rainha que combina os movimentos da Torre e do Bispo
void moverRainha(int passos) {
    printf("Movimentos da Rainha:\n");
    moverTorreCima(passos);
    moverTorreDireita(passos);
    moverBispoDiagonal(passos);
    printf("\n");
}

// Movimento do Cavalo usando loops aninhados
void moverCavalo() {
    printf("Movimentos do Cavalo (2 para cima, 1 para direita):\n");
    for (int i = 0; i < 3; i++) { // Simula três movimentos possíveis
        for (int j = 0; j < 2; j++) { // Simula direção
            if (i == 1 && j == 1) continue; // Pula uma iteração arbitrária
            printf("Cavalo se move: 2 casas para cima e 1 para a direita\n");
            break; // Sai após o movimento
        }
    }
    printf("\n");
}

// Movimento do Bispo com loops aninhados
void moverBispoComLoops() {
    printf("Movimentos do Bispo (loops aninhados):\n");
    for (int linha = 1; linha <= MAX_MOVES; linha++) {
        for (int coluna = 1; coluna <= MAX_MOVES; coluna++) {
            if (linha == coluna) {
                printf("Movendo Diagonal: linha -%d / coluna +%d\n", linha, coluna);
            }
        }
    }
    printf("\n");
}

int main() {
    int passos = MAX_MOVES;

    printf("Movimentos da Torre:\n");
    moverTorreCima(passos);
    moverTorreBaixo(passos);
    moverTorreEsquerda(passos);
    moverTorreDireita(passos);
    printf("\n");

    moverBispoDiagonal(passos);

    printf("\n");
    moverBispoComLoops();

    moverRainha(passos);

    moverCavalo();

    return 0;
}
