#include <stdio.h>

// Função para entrada dos dados
void entrada(char estado[20], char cod[10], char cidade[20], int *populacao, float *area, float *pib, int *pontosTuristicos) {
    printf("Digite o Estado: ");
    scanf("%s", estado);  

    printf("Digite o código: ");
    scanf("%s", cod);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", populacao); 

    printf("Digite a área em km2: ");
    scanf("%f", area); 

    printf("Digite o PIB: ");
    scanf("%f", pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", pontosTuristicos);
}

// Função para exibir os dados
void saida(char estado[20], char cod[10], char cidade[20], int populacao, float area, float pib, int pontosTuristicos) {
    printf("\nEstado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nNúmero de pontos turísticos: %d\n",
           estado, cod, cidade, populacao, area, pib, pontosTuristicos);
}

int main() {
    // Carta 1
    char estado1[20], cod1[10], cidade1[20];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2[20], cod2[10], cidade2[20];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    //entrada
    printf("Desafio Cartas Super Trunfo\n");
    printf("Carta 1:\n");
    entrada(estado1, cod1, cidade1, &populacao1, &area1, &pib1, &pontosTuristicos1);
    
    printf("\nCarta 2:\n");
    entrada(estado2, cod2, cidade2, &populacao2, &area2, &pib2, &pontosTuristicos2);

    //saída
    printf("\nCarta 1:");
    saida(estado1, cod1, cidade1, populacao1, area1, pib1, pontosTuristicos1);

    printf("\nCarta 2:");
    saida(estado2, cod2, cidade2, populacao2, area2, pib2, pontosTuristicos2);

    return 0;
}