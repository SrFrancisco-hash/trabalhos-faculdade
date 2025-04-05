#include <stdio.h>

int main() {

    char estado1[50], estado2[50];
    char codigodacarta1[50], codigocarta2[50];
    char nomecd1[50], nomecd2[50];
    int ppl1, ppl2;
    float areakm1, areakm2;
    float pib1, pib2;
    int nmrpt1, nmrpt2;

    //--- código carta 1 ---//
    printf("Carta 1:\n");

    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Código: \n");
    scanf("%s", codigodacarta1);

    printf("Nome da cidade: \n");
    scanf("%s", nomecd1);

    printf("População: \n");
    scanf("%d", &ppl1);

    printf("Área: \n");
    scanf("%f", &areakm1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &nmrpt1);

    //--- info carta 1 ---//
    printf("\n--- Dados da carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\n", nomecd1);
    printf("População: %d\n", ppl1);
    printf("Área: %.2f km²\n", areakm1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", nmrpt1);

    //--- código carta 2 ---//
    printf("\nCarta 2:\n");

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Código: \n");
    scanf("%s", codigocarta2);

    printf("Nome da cidade: \n");
    scanf("%s", nomecd2);

    printf("População: \n");
    scanf("%d", &ppl2);

    printf("Área: \n");
    scanf("%f", &areakm2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &nmrpt2);

    //--- info carta 2 ---//
    printf("\n--- Dados da carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecd2);
    printf("População: %d\n", ppl2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", nmrpt2);
    // --- Comparação entre as cidades ---
    int pontos1 = 0, pontos2 = 0;
    // População
    if (ppl1 > ppl2) {
        pontos1++;
    } else if (ppl2 > ppl1) {
        pontos2++;
    }
    // Área
    if (areakm1 > areakm2) {
        pontos1++;
    } else if (areakm2 > areakm1) {
        pontos2++;
    }
    // PIB
    if (pib1 > pib2) {
        pontos1++;
    } else if (pib2 > pib1) {
        pontos2++;
    }
    // Pontos turísticos
    if (nmrpt1 > nmrpt2) {
        pontos1++;
    } else if (nmrpt2 > nmrpt1) {
        pontos2++;
    }
    printf("\n--- Resultado da Comparação ---\n");
    if (pontos1 > pontos2) {
        printf("A cidade vencedora é: %s (%s)!\n", nomecd1, estado1);
    } else if (pontos2 > pontos1) {
        printf("A cidade vencedora é: %s (%s)!\n", nomecd2, estado2);
    } else {
        printf("Empate entre %s e %s!\n", nomecd1, nomecd2);
    }

    return 0;
}