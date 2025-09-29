#include <stdio.h>

// Função para calcular densidade populacional
float calcularDensidade(unsigned long int populacao, float area) {
    return populacao / area;
}

// Função para calcular PIB per capita
float calcularPIBperCapita(float pib, unsigned long int populacao) {
    return pib / populacao;
}

// Função para calcular o Super Poder
float calcularSuperPoder(unsigned long int populacao, float area, float pib, int pontosTuristicos, float pibPerCapita, float densidade) {
    return (float)populacao + area + pib + pontosTuristicos + pibPerCapita + (1.0f / densidade);
}

int main() {
    // Declaração de variáveis para duas cartas
    char nome1[50], estado1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    char nome2[50], estado2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Nome: "); scanf(" %[^\n]", nome1);
    printf("Estado: "); scanf(" %[^\n]", estado1);
    printf("Populacao: "); scanf("%lu", &populacao1);
    printf("Area (km²): "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Nome: "); scanf(" %[^\n]", nome2);
    printf("Estado: "); scanf(" %[^\n]", estado2);
    printf("Populacao: "); scanf("%lu", &populacao2);
    printf("Area (km²): "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional
    float densidade1 = calcularDensidade(populacao1, area1);
    float densidade2 = calcularDensidade(populacao2, area2);

    // Cálculo do PIB per capita
    float pibPerCapita1 = calcularPIBperCapita(pib1, populacao1);
    float pibPerCapita2 = calcularPIBperCapita(pib2, populacao2);

    // Cálculo do Super Poder
    float superPoder1 = calcularSuperPoder(populacao1, area1, pib1, pontosTuristicos1, pibPerCapita1, densidade1);
    float superPoder2 = calcularSuperPoder(populacao2, area2, pib2, pontosTuristicos2, pibPerCapita2, densidade2);

    // Comparações
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2 ? 1 : 0));
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2 ? 1 : 0));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2 ? 1 : 0));
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2 ? 1 : 2), (pontosTuristicos1 > pontosTuristicos2 ? 1 : 0));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2 ? 1 : 0));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2), (pibPerCapita1 > pibPerCapita2 ? 1 : 0));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2 ? 1 : 2), (superPoder1 > superPoder2 ? 1 : 0));

    return 0;
}