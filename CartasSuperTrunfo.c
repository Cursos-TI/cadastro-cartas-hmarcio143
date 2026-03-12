#include <stdio.h>


int main(){

    char estado[50];
    char estado_2[50];
    char cod_carta[50];
    char cod_carta_2[50];
    char nome_cidade[50];
    char nome_cidade_2[50];
    int pupulacao;
    int pupulacao_2;
    float area;
    float area_2;
    float PIB;
    float PIB_2;
    int numero_pontos_turisticos;
    int numero_pontos_turisticos_2;

    printf("Qual o nome do primeiro estado?: \n");
    scanf(" %49[^\n]", estado);

    printf("Qual o nome do segundo estado?: \n");
    scanf(" %49[^\n]", estado_2);

    printf("Qual o codigo da primeira carta?: \n");
    scanf("%49s", cod_carta);

    printf("Qual o codigo da segunda carta?: \n");
    scanf("%49s", cod_carta_2);

    printf("Qual o nome da primeira cidade?: \n");
    scanf(" %49[^\n]", nome_cidade);

    printf("Qual o nome da segunda cidade?: \n");
    scanf(" %49[^\n]", nome_cidade_2);

    printf("Qual a populacao da primeira cidade?: \n");
    scanf("%d", &pupulacao);

    printf("Qual a populacao da segunda cidade?: \n");
    scanf("%d", &pupulacao_2);

    printf("Qual a area da primeira cidade?: \n");
    scanf("%f", &area);

    printf("Qual a area da segunda cidade?: \n");
    scanf("%f", &area_2);

    printf("Qual o PIB da primeira cidade?: \n");
    scanf("%f", &PIB);

    printf("Qual o PIB da segunda cidade?: \n");
    scanf("%f", &PIB_2);

    printf("Qual o numero de pontos turisticos da primeira cidade?: \n");
    scanf("%d", &numero_pontos_turisticos);

    printf("Qual o numero de pontos turisticos da segunda cidade?: \n");
    scanf("%d", &numero_pontos_turisticos_2);
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", cod_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", pupulacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Numero de pontos turisticos: %d\n", numero_pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Codigo: %s\n", cod_carta_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("Populacao: %d\n", pupulacao_2);
    printf("Area: %.2f\n", area_2);
    printf("PIB: %.2f\n", PIB_2);
    printf("Numero de pontos turisticos: %d\n", numero_pontos_turisticos_2);

    return 0;

}
