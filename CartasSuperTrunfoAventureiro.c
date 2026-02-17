/*
🛡️ Nível Aventureiro
No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

🆕 Diferença em relação ao Nível Novato:
Novas Propriedades Calculadas:
Densidade Populacional: População dividida pela área da cidade.
PIB per Capita: PIB total dividido pela população.
⚙️ Funcionalidades do Sistema:
O sistema agora calculará automaticamente a Densidade Populacional e o PIB per Capita com base nos dados inseridos.
Essas novas propriedades serão adicionadas às informações exibidas para cada cidade.
📥 Entrada e 📤 Saída de Dados:
O usuário continua inserindo os dados de cada carta interativamente.
O sistema exibirá os dados, incluindo as novas propriedades calculadas, de forma clara e organizada.

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
    pib_per_capita_carta2 = pib_carta2 / (float) populacao_carta2; // calcula o pib per capita da carta 2

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
    
    return 0;

}
