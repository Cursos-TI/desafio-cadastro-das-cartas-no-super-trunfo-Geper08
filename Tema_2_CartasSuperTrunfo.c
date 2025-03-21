#include <stdio.h>
#include <string.h>

// Função para formatar números com pontos
void formatarNumero(int numero, char *saida) {
    char temp[20];
    sprintf(temp, "%d", numero);
    
    int len = strlen(temp);
    int ponto = (len - 1) % 3 + 1;  
    int j = 0;
    
    for (int i = 0; i < len; i++) {
        if (i > 0 && (i - ponto) % 3 == 0) {
            saida[j++] = '.';
        }
        saida[j++] = temp[i];
    }
    saida[j] = '\0';
}

int main() {
    // Declaração de variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da segunda carta
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Formatar os valores de população
    char popFormatada1[20], popFormatada2[20];
    formatarNumero(populacao1, popFormatada1);
    formatarNumero(populacao2, popFormatada2);

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %s habitantes\n", popFormatada1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %s habitantes\n", popFormatada2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Comparação baseada no atributo "População"
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %s habitantes\n", nomeCidade1, estado1, popFormatada1);
    printf("Carta 2 - %s (%c): %s habitantes\n", nomeCidade2, estado2, popFormatada2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate! Ambas as cidades têm a mesma população.\n");
    }

    return 0;
}
