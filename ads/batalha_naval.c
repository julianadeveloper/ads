#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3
#define NAVIO 3
#define AGUA 0

// Função para verificar se é possível posicionar o navio sem ultrapassar limites ou sobrepor
int podePosicionar(int tabuleiro[TAM][TAM], int linha, int coluna, int dx, int dy) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        int l = linha + i * dx;
        int c = coluna + i * dy;

        if (l < 0 || l >= TAM || c < 0 || c >= TAM) return 0;
        if (tabuleiro[l][c] != AGUA) return 0;
    }
    return 1;
}

// Função para posicionar o navio no tabuleiro
void posicionarNavio(int tabuleiro[TAM][TAM], int linha, int coluna, int dx, int dy) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        int l = linha + i * dx;
        int c = coluna + i * dy;
        tabuleiro[l][c] = NAVIO;
    }
}

// Função para exibir o tabuleiro no console
void mostrarTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\nTabuleiro:\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM] = {0}; // Inicializa tudo com 0 (água)

    // Navio 1 - horizontal (linha fixa, coluna varia)
    if (podePosicionar(tabuleiro, 0, 0, 0, 1)) {
        posicionarNavio(tabuleiro, 0, 0, 0, 1);
    }

    // Navio 2 - vertical (coluna fixa, linha varia)
    if (podePosicionar(tabuleiro, 2, 5, 1, 0)) {
        posicionarNavio(tabuleiro, 2, 5, 1, 0);
    }

    // Navio 3 - diagonal principal (linha++, coluna++)
    if (podePosicionar(tabuleiro, 4, 4, 1, 1)) {
        posicionarNavio(tabuleiro, 4, 4, 1, 1);
    }

    // Navio 4 - diagonal secundária (linha++, coluna--)
    if (podePosicionar(tabuleiro, 0, 9, 1, -1)) {
        posicionarNavio(tabuleiro, 0, 9, 1, -1);
    }

    // Mostra o tabuleiro final
    mostrarTabuleiro(tabuleiro);

    return 0;
}
