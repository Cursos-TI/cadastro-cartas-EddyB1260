#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //criando variaveis para 2 cartas
    int pop1, pop2, area1, area2, numero_pontos_turisticos1, numero_pontos_turisticos2;
    float pib1, pib2, pibpercapta1, pibpercapta2, densipop1, densipop2;
    float super_poder1, super_poder2;
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

    //Limpando o buffer após o scanf com %s
    getchar();

    printf("Insira o nome da cidade: \n");
    fgets(nome1,150,stdin);

    printf("Insira o Estado: \n");
    scanf(" %c", &estado1);

    //Carta dois
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

    getchar();

    printf("Insira o nome da cidade \n");
    fgets(nome2, 150, stdin);

    printf("Insira o Estado \n");
    scanf(" %c", &estado2);

    // Calculando Variáveis

    densipop1 = (float) pop1/area1;
    densipop2 = (float) pop2/area2;
    pibpercapta1 = pib1/pop1;
    pibpercapta2 = pib2/pop2;
    super_poder1 = (float) pop1 + area1 + numero_pontos_turisticos1 + pib1 + pibpercapta1 + (1 / densipop1);
    super_poder2 = (float) pop2 + area2 + numero_pontos_turisticos2 + pib2 + pibpercapta2 + (1 / densipop2);

    // Comparando as Cartas
    printf ("----------Comparando as cartas--------------\n");
    if (pop1 > pop2)
        printf("POPULAÇÃO: Carta 1 venceu \n");
    else 
        printf("POPULAÇÃO: Carta 2 venceu \n");
    if (area1 > area2)
        printf("AREA: Carta 1 venceu \n");
    else 
        printf("AREA: Carta 2 venceu \n");
    if (numero_pontos_turisticos1 > numero_pontos_turisticos2)
        printf("NUMERO DE PONTOS TURISTICOS: Carta 1 venceu \n");
    else 
        printf("NUMERO DE PONTOS TURISTICOS: Carta 2 venceu \n");
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu \n");
    else 
        printf("PIB: Carta 2 venceu \n");
    if ( ( 1 / densipop1) > ( 1 / densipop2) )
        printf("DENSIDADE POPULACIONAL: Carta 1 venceu \n");
    else 
        printf("DENSIDADE POPULACIONAL: Carta 2 venceu \n");
    if (super_poder1 > super_poder2)
        printf("SUPER PODER: Carta 1 venceu \n");
    else 
        printf("SUPER PODER: Carta 2 venceu \n");



    
    
    // Exibição dos Dados das Cartas:
    printf("------Dados da Carta-------\n");
    printf("O nome da cidade é  %s \n", nome1);
    printf("O numero de pontos turisticos é %d \n", numero_pontos_turisticos1);
    printf("O PIB é %.2f \n", pib1);
    printf("A area é %d \n", area1);
    printf("A população é %d \n", pop1);
    printf("O Pib per capta é %.2f \n",pibpercapta1);
    printf("A densidade populacional é %.2f \n", densipop1);
    printf("O estado é %c \n", estado1);
    printf("O super poder é %.2f", super_poder1);

    printf("------Dados da Carta-------\n");
    printf("O nome da cidade é %s \n", nome2);
    printf("O numero de pontos turisticos é %d \n", numero_pontos_turisticos2);
    printf("O PIB é %.2f \n", pib2);
    printf("A area é %d \n", area2);
    printf("A população é %d \n", pop2);
    printf("O Pib per capta é %.2f \n",pibpercapta2);
    printf("A densidade populacional é %.2f \n", densipop2);
    printf("O estado é %c \n", estado2);
    printf("O Super Poder é %.2f", super_poder2);
    return 0;
}
