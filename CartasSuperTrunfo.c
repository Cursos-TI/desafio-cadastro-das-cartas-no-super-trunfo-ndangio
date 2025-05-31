#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

//Variaveis - Carta 1.

    char Estado1;
    char Codigo1[4];
    char Cidade1[20];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

//Variaveis - Carta 2.
    
    char Estado2;
    char Codigo2[4];
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

    
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

//Instruções e leitura dos dados - Carta 1.

    printf("Cadastro da Carta 1:\n");
    
    printf("Informe o Estado (Inicial de A à H): ");
    scanf(" %c", &Estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", Codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf("%s", Cidade1);

    printf("Informe a População (Número de habitantes): ");
    scanf("%d", &Populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &Area1);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &PIB1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos1);

//Instruções e leitura dos dados - Carta 2.

    printf("Cadastro da Carta 2:\n");
    
    printf("Informe o Estado (Inicial de A à H): ");
    scanf(" %c", &Estado2);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", Codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf("%s", Cidade2);

    printf("Informe a População (Número de habitantes): ");
    scanf("%d", &Populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &Area2);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &PIB2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos2);

    
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Exibição dos dados da Carta 1.

    printf("\nCarta 1:\n")
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);

// Exibição dos dados da Carta 2.

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);


    return 0;
}
