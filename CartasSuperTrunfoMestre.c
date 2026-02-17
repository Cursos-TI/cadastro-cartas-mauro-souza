/*
🏆 Nível Mestre
No nível Mestre, você implementará comparações entre as cartas, utilizando operadores relacionais e manipulando grandes números com precisão.

🆕 Diferença em relação ao Nível Aventureiro:
Comparação de Cartas:
O sistema permitirá ao usuário comparar duas cartas com base nas propriedades inseridas e calculadas.
Cada carta terá um "Super Poder", que é a soma de todas as propriedades.
⚙️ Funcionalidades do Sistema:
O sistema utilizará operadores relacionais para determinar a carta vencedora com base nas propriedades comparadas.
A comparação considerará:
Densidade Populacional: Vence a carta com menor valor.
Outras Propriedades: Vence a carta com maior valor.
O resultado das comparações será exibido claramente para cada propriedade.
📥 Entrada e 📤 Saída de Dados:
O usuário insere as cartas a serem comparadas.
O sistema exibe os resultados das comparações, indicando a carta vencedora para cada propriedade.
*/
#include<stdio.h>

int main() {
    // Declaração de variáveis
    char estado_carta1, estado_carta2; // armazena uma letra de A a H para representar um dos oito estados
    char codigo_carta1[4], codigo_carta2[4]; // armazena o código da carta formado pela letra do estado e dois caracteres númericos de 01 a 04 
    char nome_cidade_carta1[81], nome_cidade_carta2[81];  // armazena o nome da cidade
    int populacao_carta1, populacao_carta2; // armazena o número de habitantes da cidade
    float area_carta1, area_carta2; // armazena a área da cidade em kilometros quadrados
    double pib_carta1, pib_carta2; // armazena o PIB (Produto Interno Bruto) da cidade
    float densidade_populacional_carta1, densidade_populacional_carta2; // armazena a densidade populacional da cidade ou seja população / área da cidade
    double pib_per_capita_carta1, pib_per_capita_carta2; // armazena o pib per capita da cidade ou seja PIB / população da cidade
    int pontos_turisticos_carta1, pontos_turisticos_carta2; // armazena o número de pontos turísticos da cidade
    double super_poder_carta1, super_poder_carta2; // armazena o super poder das cartas
    char resultado_populacao[200], resultado_area[200], resultado_pib[200], resultado_densidade_populacional[200], resultado_pib_per_capita[200], resultado_pontos_turisticos[200], resultado_super_poder[200]; // armazena o resultado das comparações

    // Informações gerais
    printf("\n\n****** Super Trunfo de Países ******\n\n");
    // Coletando informações da primeira carta
    printf("Digite os dados da primeira carta\n\n");
    printf("-=== Carta1 ===-\n");

    // Observações sobre o campo estado_carta1
    printf("Digite uma letra de 'A' a 'H' para representar um dos oito estados.\n\n");
    // Letra do estado
    printf("Letra do Estado: ");
    scanf(" %c", &estado_carta1);
    printf("\n");

    // Observação sobre o campo codigo_carta1
    printf("\nDigite um código para essa carta - O código deverá ser formado pela\nletra '%c' que você informou anteriormente e dois caracteres númericos de 01 a 04.\nExemplo: '%c03'\n\n", estado_carta1, estado_carta1);
    // Código da carta
    printf("Código da Carta: ");
    scanf("%s", codigo_carta1);
    printf("\n");

    // Observação sobre o campo nome_cidade_carta1
    printf("\nDigite o nome da cidade com no máximo 80 caracteres.\n\n");
    // Nome da cidade
    printf("Nome da Cidade: ");
    // Limpa o buffer
    getchar();
    // scanf(" %s", nome_cidade_carta1);
    fgets(nome_cidade_carta1, 80, stdin);
    printf("\n");

    // Observação sobre o campo populacao_carta1
    printf("\nDigite o número de habitantes da cidade.\n\n");
    // População
    printf("População: ");
    scanf("%d", &populacao_carta1);
    printf("\n");

    // Observação sobre o campo area_carta1
    printf("\nDigite a área da cidade em quilômetros quadrados.\n\n");
    // Área
    printf("Área: ");
    scanf("%f", &area_carta1);
    printf("\n");

    // Observação sobre o campo pib_carta1
    printf("\nDigite o PIB (Produto Interno Bruto) da cidade.\n\n");
    // PIB
    printf("PIB: ");
    scanf("%lf", &pib_carta1);
    printf("\n");

    // Observações sobre o campo pontos_turisticos_carta1 
    printf("\nDigite a quantidade de pontos turísticos na cidade.\n\n");
    // Pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);
    printf("\n\n");

    // Coletando informações da segunda carta
    printf("Digite os dados da segunda carta\n\n");
    printf("-=== Carta2 ===-\n");

    // Observações sobre o campo estado_carta2
    printf("Digite uma letra de 'A' a 'H' para representar um dos oito estados.\n\n");
    // Limpa o buffer
    getchar();
    // Letra do estado
    printf("Letra do Estado: ");
    scanf(" %c", &estado_carta2);
    printf("\n");

    // Observação sobre o campo codigo_carta2
    printf("\nDigite um código para essa carta - O código deverá ser formado pela\nletra '%c' que você informou anteriormente e dois caracteres númericos de 01 a 04.\nExemplo: '%c03'\n\n", estado_carta2, estado_carta2);
    // Código da carta
    printf("Código da Carta: ");
    scanf("%s", codigo_carta2);
    printf("\n");

    // Campos calculados
    densidade_populacional_carta1 = (float) populacao_carta1 / area_carta1; // calcula a densidade populacional da carta 1
    pib_per_capita_carta1 = pib_carta1 / (double) populacao_carta1; // calcula o pib per capita da carta 1

    // Observação sobre o campo nome_cidade_carta2
    printf("\nDigite o nome da cidade com no máximo 80 caracteres.\n\n");
    // Nome da cidade
    printf("Nome da Cidade: ");
    // Limpa o buffer
    getchar();
    // scanf(" %s", nome_cidade_carta1);
    fgets(nome_cidade_carta2, 80, stdin);
    printf("\n");

    // Observação sobre o campo populacao_carta2
    printf("\nDigite o número de habitantes da cidade.\n\n");
    // População
    printf("População: ");
    scanf("%d", &populacao_carta2);
    printf("\n");

    // Observação sobre o campo area_carta2
    printf("\nDigite a área da cidade em quilômetros quadrados.\n\n");
    // Área
    printf("Área: ");
    scanf("%f", &area_carta2);
    printf("\n");

    // Observação sobre o campo pib_carta2
    printf("\nDigite o PIB (Produto Interno Bruto) da cidade.\n\n");
    // PIB
    printf("PIB: ");
    scanf("%lf", &pib_carta2);
    printf("\n");
    
    // Observações sobre o campo pontos_turisticos_carta2
    printf("\nDigite a quantidade de pontos turísticos na cidade.\n\n");
    // Pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);
    printf("\n\n");

    // Campos calculados
    densidade_populacional_carta2 = (float) populacao_carta2 / area_carta2; // calcula a densidade populacional da carta 2
    pib_per_capita_carta2 = pib_carta2 / (double) populacao_carta2; // calcula o pib per capita da carta 2


    // Calculando o Super Poder de cada carta o atributo Densidade Populacional não será somado pois nesse caso o menor valor é que pontua
    super_poder_carta1 = populacao_carta1 + area_carta1 + pib_carta1 + pontos_turisticos_carta1;
    super_poder_carta2 = populacao_carta2 + area_carta2 + pib_carta2 + pontos_turisticos_carta2;

    // Comparando os atributos de cada carta
    // População
    if (populacao_carta1 > populacao_carta2){

        sprintf(resultado_populacao, "População: Vencedora Carta Cod %s - %s com %d habitantes\n",codigo_carta1, nome_cidade_carta1, populacao_carta1);

    }else if (populacao_carta2 > populacao_carta1){

        sprintf(resultado_populacao, "População: Vencedora Carta Cod %s - %s com %d habitantes\n",codigo_carta2, nome_cidade_carta2, populacao_carta2);

    } else {

        sprintf(resultado_populacao, "População: Cartas Cod %s - %s e Cod %s - %s, empatadas com %d habitantes\n", codigo_carta1, nome_cidade_carta1, codigo_carta2, nome_cidade_carta2, populacao_carta2);

    }
    // Área
    if (area_carta1 > area_carta2){

        sprintf(resultado_area, "Área: Vencedora Carta Cod %s - %s com %.2f km²\n",codigo_carta1, nome_cidade_carta1, area_carta1);

    }else if (area_carta2 > area_carta1){

        sprintf(resultado_area, "Área: Vencedora Carta Cod %s - %s com %.2f km²\n",codigo_carta2, nome_cidade_carta2, area_carta2);

    } else {

        sprintf(resultado_area, "Área: Cartas Cod %s - %s e Cod %s - %s, empatadas com %.2f km²\n", codigo_carta1, nome_cidade_carta1, codigo_carta2, nome_cidade_carta2, area_carta2);

    }
    // PIB
    if (pib_carta1 > pib_carta2){

        sprintf(resultado_pib, "PIB: Vencedora Carta Cod %s - %s com %.2lf de reais\n",codigo_carta1, nome_cidade_carta1, pib_carta1);

    }else if (pib_carta2 > pib_carta1){

        sprintf(resultado_pib, "PIB: Vencedora Carta Cod %s - %s com %.2lf de reais\n",codigo_carta2, nome_cidade_carta2, pib_carta2);

    } else {

        sprintf(resultado_pib, "PIB: Cartas Cod %s - %s e Cod %s - %s, empatadas com %.2lf de reais\n", codigo_carta1, nome_cidade_carta1, codigo_carta2, nome_cidade_carta2, pib_carta2);

    }
    // Pontos Turísticos
    if (pontos_turisticos_carta1 > pontos_turisticos_carta2){

        sprintf(resultado_pontos_turisticos, "Pontos Turísticos: Vencedora Carta Cod %s - %s com %d pontos turísticos\n",codigo_carta1, nome_cidade_carta1, pontos_turisticos_carta1);

    }else if (pontos_turisticos_carta2 > pontos_turisticos_carta1){

        sprintf(resultado_pontos_turisticos, "Pontos Turísticos: Vencedora Carta Cod %s - %s com %d pontos turísticos\n",codigo_carta2, nome_cidade_carta2, pontos_turisticos_carta2);
        
    } else {

        sprintf(resultado_pontos_turisticos, "Pontos Turísticos: Cartas Cod %s - %s e Cod %s - %s, empatadas com %d pontos turísticos\n", codigo_carta1, nome_cidade_carta1, codigo_carta2, nome_cidade_carta2, pontos_turisticos_carta2);

    }
    // Densidade Populacional
    if (densidade_populacional_carta1 < densidade_populacional_carta2){
    
        sprintf(resultado_densidade_populacional, "Densidade Populacional: Vencedora Carta Cod %s - %s com %.2f hab/km²\n",codigo_carta1, nome_cidade_carta1, densidade_populacional_carta1);
    
    } else if (densidade_populacional_carta2 < densidade_populacional_carta1){

        sprintf(resultado_densidade_populacional, "Densidade Populacional: Vencedora Carta Cod %s - %s com %.2f hab/km²\n",codigo_carta2, nome_cidade_carta2, densidade_populacional_carta2);

    } else {

        sprintf(resultado_densidade_populacional, "Densidade Populacional: Cartas Cod %s - %s e Cod %s - %s, empatadas com %.2f hab/km²\n", codigo_carta1, nome_cidade_carta1, codigo_carta2, nome_cidade_carta2, densidade_populacional_carta2);

    }
    // PIB per Capita
    if (pib_per_capita_carta1 > pib_per_capita_carta2){

        sprintf(resultado_pib_per_capita, "PIB per Capita: Vencedora Carta Cod %s - %s com %.2lf de reais\n",codigo_carta1, nome_cidade_carta1, pib_per_capita_carta1);

    }else if (pib_per_capita_carta2 > pib_per_capita_carta1){

        sprintf(resultado_pib_per_capita, "PIB per Capita: Vencedora Carta Cod %s - %s com %.2lf de reais\n",codigo_carta2, nome_cidade_carta2, pib_per_capita_carta2);

    } else {

        sprintf(resultado_pib_per_capita, "PIB per Capita: Cartas Cod %s - %s e Cod %s - %s, empatadas com %.2lf de reais\n", codigo_carta1, nome_cidade_carta1, codigo_carta2, nome_cidade_carta2, pib_per_capita_carta2);

    }  
    // Super Poder
    if (super_poder_carta1 > super_poder_carta2){
    
        sprintf(resultado_super_poder, "Super Poder: Vencedora Carta Cod %s - %s com um Super Poder Total de: %.2f\n",codigo_carta1, nome_cidade_carta1, super_poder_carta1);

    }else if (super_poder_carta2 > super_poder_carta1){

        sprintf(resultado_super_poder,"Super Poder: Vencedora Carta Cod %s - %s com um Super Poder Total de: %.2f\n",codigo_carta2, nome_cidade_carta2, super_poder_carta2);

    } else {

        sprintf(resultado_super_poder, "Super Poder: Cartas Cod %s - %s e Cod %s - %s, empatadas com um Super Poder Total de: %.2f\n", codigo_carta1, nome_cidade_carta1, codigo_carta2, nome_cidade_carta2, super_poder_carta2);

    }

    // Exibe as informações armazenadas
    printf("***** As informações armazenadas foram *****\n\n");
    printf("-=== Carta1 ===-\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Código: %s\n", codigo_carta1);
    printf("Cidade: %s", nome_cidade_carta1);
    printf("População: %d hab\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: %.2lf de reais\n", pib_carta1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta1);
    printf("PIB per Capita: %.2lf de reais\n", pib_per_capita_carta1);
    printf("\n\n");
    printf("-=== Carta2 ===-\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Cidade: %s", nome_cidade_carta2);
    printf("População: %d hab\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: %.2lf de reais\n", pib_carta2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta2);
    printf("PIB per Capita: %.2lf de reais\n", pib_per_capita_carta2);
    printf("\n\n");
    printf("*** Resultado das comparações ***\n\n");
    printf("%s", resultado_populacao);
    printf("%s", resultado_area);
    printf("%s", resultado_pib);
    printf("%s", resultado_densidade_populacional);
    printf("%s", resultado_pib_per_capita);
    printf("%s", resultado_pontos_turisticos);
    printf("%s", resultado_super_poder);
    printf("\n\n");
    
    
    return 0;

}
