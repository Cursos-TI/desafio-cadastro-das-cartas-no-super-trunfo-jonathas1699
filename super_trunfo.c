#include <stdio.h>
#include <string.h>
#include <locale.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_string(char *variavel, int tamanho) {
    fgets(variavel, tamanho, stdin);
    variavel[strcspn(variavel, "\n")] = '\0';
}

int main() {
    // Configura locale para aceitar acentos
    setlocale(LC_ALL, "Portuguese");
    
    // definindo Variáveis da carta 1
    char estado1;
    char codigo1[4];
    char NomeCidade1[100];
    int populacao1;
    float area1;
    float PIB1;
    int pontotur1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[4];
    char NomeCidade2[100];
    int populacao2;
    float area2;
    float PIB2;
    int pontotur2;

    // Dados da carta 1
    printf("// INSIRA OS DADOS DA PRIMEIRA CARTA //\n");
    
    printf("Digite a letra do estado (De A a H): ");
    scanf(" %c", &estado1);
    limpar_buffer();
    
    printf("Digite o código (formato A01): ");
    scanf("%3s", codigo1);
    limpar_buffer();
    
    printf("Digite o nome da cidade: ");
    ler_string(NomeCidade1, sizeof(NomeCidade1));
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    limpar_buffer();
    
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    limpar_buffer();
    
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &PIB1);
    limpar_buffer();
    
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontotur1);
    limpar_buffer();

    // Dados da carta 2
    printf("\n// INSIRA OS DADOS DA SEGUNDA CARTA //\n");
    
    printf("Digite a letra do estado (De A a H): ");
    scanf(" %c", &estado2);
    limpar_buffer();
    
    printf("Digite o código (formato A01): ");
    scanf("%3s", codigo2);
    limpar_buffer();
    
    printf("Digite o nome da cidade: ");
    ler_string(NomeCidade2, sizeof(NomeCidade2));
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    limpar_buffer();
    
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    limpar_buffer();
    
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &PIB2);
    limpar_buffer();
    
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontotur2);
    limpar_buffer();

    // PARTE DE IMPRIMIR OS DADOS
    printf("\n=== DADOS DAS CARTAS ===\n");
    
    // Carta 1
    printf("\nDADOS DA CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", NomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);
    printf("Pontos turísticos: %d\n", pontotur1);

    // Carta 2
    printf("\nDADOS DA CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", NomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Pontos turísticos: %d\n", pontotur2);

    return 0;
}
