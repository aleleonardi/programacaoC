#include <stdio.h>

int main () {
    char carta_1_estado, carta_2_estado, carta_1_codigo[4], carta_2_codigo[4], carta_1_cidade[20], carta_2_cidade[20];
    long int carta_1_populacao, carta_2_populacao, carta_1_pturistico, carta_2_pturistico;
    double carta_1_area, carta_2_area, carta_1_pib, carta_2_pib;

    // Atributos Carta 1

    printf("Insira os dados da carta 1\n");
    printf("Estado: ");
    scanf(" %c", &carta_1_estado);

    printf("Codigo: ");
    scanf("%s", carta_1_codigo);

    printf("Cidade: ");
    scanf("%s", carta_1_cidade);

    printf("Populacao: ");
    scanf("%li", &carta_1_populacao);
    printf("Area: ");
    scanf("%lf", &carta_1_area);

    printf("PIB: ");
    scanf("%lf", &carta_1_pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &carta_1_pturistico);

    // Atributos Carta 2

    printf("\n");
    printf("Agora insira os dados da carta 2\n");
    printf("Estado: ");
    scanf(" %c", &carta_2_estado);

    printf("Codigo: ");
    scanf("%s", carta_2_codigo);

    printf("Cidade: ");
    scanf("%s", carta_2_cidade);

    printf("Populacao: ");
    scanf("%li", &carta_2_populacao);

    printf("Area: ");
    scanf("%lf", &carta_2_area);

    printf("PIB: ");
    scanf("%lf", &carta_2_pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &carta_2_pturistico);


    // Exibir atributos da carta 1

    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta_1_estado);
    printf("Codigo: %s\n", carta_1_codigo);
    printf("Cidade: %s\n", carta_1_cidade);
    printf("Populacao: %li\n", carta_1_populacao);
    printf("Area: %.2lf\n", carta_1_area);
    printf("PIB: %.2lf\n", carta_1_pib);
    printf("Pontos Turisticos: %.2d\n", carta_1_pturistico);
    printf("\n");
    printf("--------------------------------------------\n");
    

    // Exibir atributos da carta 2

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta_2_estado);
    printf("Codigo: %s\n", carta_2_codigo);
    printf("Cidade: %s\n", carta_2_cidade);
    printf("Populacao: %li\n", carta_2_populacao);
    printf("Area: %.2lf\n", carta_2_area);
    printf("PIB: %.2lf\n", carta_2_pib);
    printf("Pontos Turistic1os: %.2d\n", carta_2_pturistico);
    printf("\n");
    printf("--------------------------------------------");

}