#include <stdio.h> 


int main() {

    
    //variáveis da carta 1//
    char estado1;
    char codigo1[4];
    char NomeCidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontotur1;

    //Variáveis da carta 2//
    char estado2;
    char codigo2[4];
    char NomeCidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontotur2;


    // Dados da carta 1
printf("//INSIRA OS DADOS DA PRIMEIRA CARTA//\n");
printf("Digite a letra do estado (De A a H): ");
scanf(" %c", &estado1);  // Espaço antes do %c para consumir \n
printf("Digite a letra do estado e o código (de 01 a 04, EX: A01; B02): ");
scanf("%3s", codigo1);  // Limita a 3 caracteres para evitar overflow
printf("Digite o nome da cidade: ");
scanf(" %s", NomeCidade1);  // Lê até encontrar quebra de linha
printf("Digite o número da população: ");
scanf("%d", &populacao1);
printf("Digite a área (em km²): ");
scanf("%f", &area1);
printf("Digite o PIB (em bilhões de reais): ");
scanf("%f", &PIB1);
printf("Digite a quantidade de pontos turísticos: ");
scanf("%d", &pontotur1);

// Limpar o buffer de entrada
while(getchar() != '\n');

// Dados da carta 2
printf("\n//INSIRA OS DADOS DA SEGUNDA CARTA//\n");
printf("Digite a letra do estado (De A a H): ");
scanf(" %c", &estado2);
printf("Digite a letra do estado e o código (de 01 a 04, EX: A01; B02): ");
scanf("%3s", codigo2);
printf("Digite o nome da cidade: ");
scanf(" %s", NomeCidade2);
printf("Digite o número da população: ");
scanf("%d", &populacao2);
printf("Digite a área (em km²): ");
scanf("%f", &area2);
printf("Digite o PIB (em bilhões de reais): ");
scanf("%f", &PIB2);
printf("Digite a quantidade de pontos turísticos: ");
scanf("%d", &pontotur2);



    //PARTE DE IMPRIMIR OS DADOS//

    printf("DADOS DA CARTA 1: \n");
    printf("A letra do estado é: %c \n", estado1);
    printf("O código é: %s \n", codigo1);
    printf("O nome da cidade é: %s \n", NomeCidade1);
    printf("A população da cidade é de: %d \n",populacao1);
    printf("A área da cidade é de: %f \n", area1);
    printf("O PIB é de: %f \n", PIB1);
    printf("A quantidade de pontos turísticos é: %d \n", pontotur1);


    printf("DADOS DA CARTA 2: \n");
    printf("A letra do estado é: %c \n", estado2);
    printf("O código é: %s \n", codigo2);
    printf("O nome da cidade é: %s \n", NomeCidade2);
    printf("A população da cidade é de: %d \n",populacao2);
    printf("A área da cidade é de: %f \n", area2);
    printf("O PIB é de: %f \n", PIB2);
    printf("A quantidade de pontos turísticos é: %d \n", pontotur2);
    

 


    



}



