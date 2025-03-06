#include <stdio.h>

// Estrutura para armazenar os atributos de uma carta
typedef struct {
    char estado[50];
    int codigo;
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular os atributos derivados (densidade populacional, PIB per capita e Super Poder)
void calcularAtributos(Carta *c) {
    c->densidade_populacional = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
    c->super_poder = c->populacao + c->area + c->pib + c->pontos_turisticos + c->pib_per_capita + (1 / c->densidade_populacional);
}

// Função para ler os dados de uma carta
void lerCarta(Carta *c) {
    printf("Digite o estado: ");
    scanf(" %[^"]s", c->estado);
    printf("Digite o código: ");
    scanf("%d", &c->codigo);
    printf("Digite o nome da carta: ");
    scanf(" %[^"]s", c->nome);
    printf("Digite a população: ");
    scanf("%lu", &c->populacao);
    printf("Digite a área: ");
    scanf("%f", &c->area);
    printf("Digite o PIB: ");
    scanf("%f", &c->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontos_turisticos);
    
    calcularAtributos(c);
}

// Função para comparar os atributos e imprimir os resultados
void compararCartas(Carta c1, Carta c2) {
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (c1.populacao > c2.populacao) ? 1 : 2, (c1.populacao > c2.populacao));
    printf("Área: Carta %d venceu (%d)\n", (c1.area > c2.area) ? 1 : 2, (c1.area > c2.area));
    printf("PIB: Carta %d venceu (%d)\n", (c1.pib > c2.pib) ? 1 : 2, (c1.pib > c2.pib));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (c1.pontos_turisticos > c2.pontos_turisticos) ? 1 : 2, (c1.pontos_turisticos > c2.pontos_turisticos));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (c1.densidade_populacional < c2.densidade_populacional) ? 1 : 2, (c1.densidade_populacional < c2.densidade_populacional));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (c1.pib_per_capita > c2.pib_per_capita) ? 1 : 2, (c1.pib_per_capita > c2.pib_per_capita));
    printf("Super Poder: Carta %d venceu (%d)\n", (c1.super_poder > c2.super_poder) ? 1 : 2, (c1.super_poder > c2.super_poder));
}

int main() {
    Carta carta1, carta2;
    
    printf("Cadastro da Carta 1:\n");
    lerCarta(&carta1);
    printf("\nCadastro da Carta 2:\n");
    lerCarta(&carta2);
    
    compararCartas(carta1, carta2);
    
    return 0;
}
