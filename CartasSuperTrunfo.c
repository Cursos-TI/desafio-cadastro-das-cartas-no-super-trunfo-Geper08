#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Geovani

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Entrada de dados da primeira carta
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", codigo1);
    getchar(); // Limpa buffer antes de ler a string
    
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove a quebra de linha
    
    printf("Digite a população: ");
    scanf(" %d", &populacao1);
    
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area1);
    
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    getchar(); // Limpa buffer
    
    // Entrada de dados da segunda carta
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf(" %s", codigo2);
    getchar(); // Limpa buffer antes de ler a string
    
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Remove a quebra de linha
    
    printf("Digite a população: ");
    scanf(" %d", &populacao2);
    
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);
    
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);
    
    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}


