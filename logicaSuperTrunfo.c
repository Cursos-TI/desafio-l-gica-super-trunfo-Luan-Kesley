#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declarando as variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[30], cidade2[30];
    float area1, area2;
    float pib1, pib2;
    float densiPop1, densiPop2;
    float pibpercap1, pibpercap2;
    float superPoder1, superPoder2;
    int turistico1, turistico2;
    int pop1, pop2;

    // Cadastro das informações da Carta 1:
    printf("Informe uma letra de 'A' a 'H' para representar o estado da Carta 1: \n");
    scanf(" %c", &estado1);

    printf("Informe o código da Carta 1 (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", &codigo1);
    
    printf("Informe o nome da cidade da Carta 1: \n");
    scanf("%s", &cidade1);

    printf("Informe a população da cidade da Carta 1: \n");
    scanf("%d", &pop1);     

    printf("Informe a área (em km²) da cidade da Carta 1: \n");
    scanf("%f", &area1);    

    printf("Informe o PIB da cidade da Carta 1: \n");
    scanf("%f", &pib1);    

    printf("Informe o número de pontos turísticos da cidade da Carta 1: \n");
    scanf("%d", &turistico1);    
    

    // Cadastro das informações da Carta 2:
    printf("\n");
    printf("Informe uma letra de 'A' a 'H' para representar o estado da Carta 2: \n");
    scanf(" %c", &estado2);

    printf("Informe o código da Carta 2 (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", &codigo2);
    
    printf("Informe o nome da cidade da Carta 2: \n");
    scanf("%s", &cidade2);

    printf("Informe a população da cidade da Carta 2: \n");
    scanf("%d", &pop2);     

    printf("Informe a área (em km²) da cidade da Carta 2: \n");
    scanf("%f", &area2);    

    printf("Informe o PIB da cidade da Carta 2: \n");
    scanf("%f", &pib2);    

    printf("Informe o número de pontos turísticos da cidade da Carta 2: \n");
    scanf("%d", &turistico2);

    //cálculo da Densidade Populacional e do PIB per capita de cada carta
    densiPop1 = pop1 / area1;
    densiPop2= pop2 / area2;

    pibpercap1 = pib1 / pop1;
    pibpercap2 = pib2 / pop2;

    //Cálculo do super poder
    //Carta1:
    superPoder1 = (float)(pop1 + area1 + pib1 + turistico1 + pibpercap1 + (1 / densiPop1));
    //Carta2:
    superPoder2 = (float)(pop2 + area2 + pib2 + turistico2 + pibpercap2 + (1 / densiPop2));

    //Exibição dos Dados das Cartas:
    //Carta 1:
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop1);
    printf("PIB per Capita: %.2f reais\n", pibpercap1);
    printf("Super Poder: %.2f\n", superPoder1);

    //Carta 2:
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop2);
    printf("PIB per Capita: %.2f reais\n", pibpercap2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    //Comparando o poder das cartas:
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", cidade1, pop1);
    printf("Carta 2 - %s: %d\n", cidade2, pop2);
        if (pop1>pop2){
            printf("Carta 1 - %s venceu!\n\n", cidade1);
        } else {
            printf("Carta 2 - %s venceu!\n\n", cidade2);
        }

    printf("Comparação de cartas (Atributo: Área):\n");
    printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f km²\n", cidade2, area1);
        if (area1>area2){
            printf("Carta 1 - %s venceu!\n\n", cidade1);
        } else {
            printf("Carta 2 - %s venceu!\n\n", cidade2);
        }    

    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s: %.2f reais\n", cidade1, pib1);
    printf("Carta 2 - %s: %.2f reais\n", cidade2, pib2);
        if (pib1>pib2){
            printf("Carta 1 - %s venceu!\n\n", cidade1);
        } else {
            printf("Carta 2 - %s venceu!\n\n", cidade2);
        }    

    printf("Comparação de cartas (Atributo: Número de pontos turísticos):\n");
    printf("Carta 1 - %s: %d\n", cidade1, turistico1);
    printf("Carta 2 - %s: %d\n", cidade2, turistico2);
        if (turistico1>turistico2){
            printf("Carta 1 - %s venceu!\n\n", cidade1);
        } else {
            printf("Carta 2 - %s venceu!\n\n", cidade2);
        }    

    printf("Comparação de cartas (Atributo: Densidade populacional):\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densiPop1);
    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densiPop2);
        if (densiPop1<densiPop2){
            printf("Carta 1 - %s venceu!\n\n", cidade1);
        } else {
            printf("Carta 2 - %s venceu!\n\n", cidade2);
        }    

    printf("Comparação de cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - %s: %.2f reais\n", cidade1, pibpercap1);
    printf("Carta 2 - %s: %.2f reais\n", cidade2, pibpercap2);
        if (pibpercap1>pibpercap2){
            printf("Carta 1 - %s venceu!\n\n", cidade1);
        } else {
            printf("Carta 2 - %s venceu!\n\n", cidade2);
        }    

    printf("Comparação de cartas (Atributo: Super Poder):\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, superPoder1);
    printf("Carta 2 - %s: %.2f\n", cidade2, superPoder2);
        if (superPoder1>superPoder2){
            printf("Carta 1 - %s venceu!\n\n", cidade1);
        } else {
            printf("Carta 2 - %s venceu!\n\n", cidade2);
        }    


    return 0;
}
