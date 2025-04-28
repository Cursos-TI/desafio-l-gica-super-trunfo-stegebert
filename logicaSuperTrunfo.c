#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[50], cidade1[50], estado2[50], cidade2[50];
    int codigo1, codigo2, populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2, densidade_pop1, densidade_pop2, pib_per_capita1, pib_per_capita2;

    
    // Cadastro das Cartas:
    // Primeira carta
    printf("Digite o estado da cidade 1: ");
    scanf("%s", estado1);
    printf("Digite o código da carta 1: ");
    scanf("%d", &codigo1);
    printf("Digite o nome da cidade 1: ");
    scanf("%s", cidade1);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontos_turisticos1);

    // Segunda carta
    printf("\nDigite o estado da cidade 2: ");
    scanf("%s", estado2);
    printf("Digite o código da carta 2: ");
    scanf("%d", &codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf("%s", cidade2);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos_turisticos2);

    // Calcular densidade populacional e PIB per capita
    densidade_pop1 = populacao1 / area1;
    densidade_pop2 = populacao2 / area2;

    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // Comparação das cartas (Atributo: População)
    printf("\nComparação de cartas (Atributo: População):\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 - %s venceu! População: %d > %d\n", cidade1, populacao1, populacao2);
    } else if (populacao1 < populacao2) {
        printf("Carta 2 - %s venceu! População: %d > %d\n", cidade2, populacao2, populacao1);
    } else {
        printf("As duas cidades têm a mesma população: %d\n", populacao1);
    }

    // Comparação das cartas (Atributo: Área)
    printf("\nComparação de cartas (Atributo: Área):\n");
    if (area1 > area2) {
        printf("Carta 1 - %s venceu! Área: %.2f km² > %.2f km²\n", cidade1, area1, area2);
    } else if (area1 < area2) {
        printf("Carta 2 - %s venceu! Área: %.2f km² > %.2f km²\n", cidade2, area2, area1);
    } else {
        printf("As duas cidades têm a mesma área: %.2f km²\n", area1);
    }

    // Comparação das cartas (Atributo: PIB)
    printf("\nComparação de cartas (Atributo: PIB):\n");
    if (pib1 > pib2) {
        printf("Carta 1 - %s venceu! PIB: %.2f > %.2f\n", cidade1, pib1, pib2);
    } else if (pib1 < pib2) {
        printf("Carta 2 - %s venceu! PIB: %.2f > %.2f\n", cidade2, pib2, pib1);
    } else {
        printf("As duas cidades têm o mesmo PIB: %.2f\n", pib1);
    }

    // Comparação das cartas (Atributo: Densidade Populacional)
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
    if (densidade_pop1 < densidade_pop2) {
        printf("Carta 1 - %s venceu! Densidade populacional: %.2f < %.2f\n", cidade1, densidade_pop1, densidade_pop2);
    } else if (densidade_pop1 > densidade_pop2) {
        printf("Carta 2 - %s venceu! Densidade populacional: %.2f < %.2f\n", cidade2, densidade_pop2, densidade_pop1);
    } else {
        printf("As duas cidades têm a mesma densidade populacional: %.2f\n", densidade_pop1);
    }

    // Comparação das cartas (Atributo: PIB per capita)
    printf("\nComparação de cartas (Atributo: PIB per capita):\n");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 - %s venceu! PIB per capita: %.2f > %.2f\n", cidade1, pib_per_capita1, pib_per_capita2);
    } else if (pib_per_capita1 < pib_per_capita2) {
        printf("Carta 2 - %s venceu! PIB per capita: %.2f > %.2f\n", cidade2, pib_per_capita2, pib_per_capita1);
    } else {
        printf("As duas cidades têm o mesmo PIB per capita: %.2f\n", pib_per_capita1);
    }

    return 0;
}