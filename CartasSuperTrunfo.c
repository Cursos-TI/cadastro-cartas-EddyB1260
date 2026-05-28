#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //criando variaveis para 2 cartas
    int pop1, pop2, area1, area2, numero_pontos_turisticos1, numero_pontos_turisticos2;
    float pib1, pib2;
    char nome1[150], nome2[150];
    char codigo_cidade1[5], codigo_cidade2[5];
    char estado1, estado2;
    
    // Cadastro das Cartas:
    printf("Insira população: \n");
    scanf("%d", &pop1);

    printf("Insira a area: \n");
    scanf("%d", &area1);

    printf("Insira o pib: \n");
    scanf("%f", &pib1);
    
    printf("Insira o numero de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticos1);

    printf("Insira o Código da carta: \n");
    scanf("%s", &codigo_cidade1);

    printf("Insira o nome da cidade \n");
    scanf("%s", &nome1);

    printf("Insira o Estado \n");
    scanf("%c", &estado1);

    printf("carta 2\n");
    printf("Insira população: \n");
    scanf("%d", &pop2);

    printf("Insira a area: \n");
    scanf("%d", &area2);

    printf("Insira o pib: \n");
    scanf("%f", &pib2);
    
    printf("Insira o numero de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticos2);

    printf("Insira o Código da carta: \n");
    scanf("%s", &codigo_cidade2);

    printf("Insira o nome da cidade \n");
    scanf("%s", &nome2);

    printf("Insira o Estado \n");
    scanf("%c", &estado2);
    
    // Exibição dos Dados das Cartas:
    printf("------Dados da Carta-------\n");
    printf("O nome é %s \n", nome1);
    printf("O numero de pontos turisticos é %d \n", numero_pontos_turisticos1);
    printf("O PIB é %.2f \n", pib1);
    printf("A area é %d \n", area1);
    printf("A população é %d \n", pop1);
    printf("O estado é %c \n", estado1);

    printf("------Dados da Carta-------\n");
    printf("O nome é %s \n", nome2);
    printf("O numero de pontos turisticos é %d \n", numero_pontos_turisticos2);
    printf("O PIB é %.2f \n", pib2);
    printf("A area é %d \n", area2);
    printf("A população é %d \n", pop2);
    printf("O estado é %c \n", estado2);
    return 0;
}
