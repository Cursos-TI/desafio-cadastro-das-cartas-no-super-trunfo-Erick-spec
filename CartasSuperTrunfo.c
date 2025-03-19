#include <stdio.h>

int main() {
    char estado1;
    char codigo1[5];
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("Informe os dados da carta 1: \n");
    printf("Estado (A-H): ");
    scanf("%c", &estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade:");
    scanf("%49[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em Km²): ");
    scanf("%f", &area1);
    printf("Pib (em bilhões de reias): ");
    scanf("%f", &pib1);
    printf("Número de pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    printf("\nCarta 1:\n");
    



   
    










    return 0;
}
