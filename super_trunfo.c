#include <stdio.h>

// Estrutura para guardar os dados de uma carta
struct Carta {
    char estado;                   // Letra do estado (de A a H)
    char codigo[4];                // Código da carta, tipo "A01"
    char nomeCidade[50];           // Nome da cidade
    int populacao;                // Quantidade de habitantes
    float area;                   // Tamanho da cidade em km²
    float pib;                    // PIB da cidade (em bilhões de reais)
    int pontosTuristicos;         // Quantos pontos turísticos tem
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1;
    struct Carta carta2;

    // Começo do programa, explicando o que vai ser feito
    printf("Cadastro de Cartas do Super Trunfo\n\n");

    // Coletando os dados da primeira carta
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);  // espaço antes do %c evita problemas com enter anterior

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // lê até o enter (pega nomes com espaço)

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n");

    // Coletando os dados da segunda carta
    printf("Digite os dados da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n");

    // Mostrando os dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n\n", carta1.pontosTuristicos);

    // Mostrando os dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
