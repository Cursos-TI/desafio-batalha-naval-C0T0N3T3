#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    
    // Nosso tabuleiro vai ser uma matriz 5x5.
    int tabuleiro[5][5];
    
    // Vamos usar variáveis para guardar as coordenadas que a gente vai digitar.
    int linha_navio1, coluna_navio1;
    int linha_navio2, coluna_navio2;
    
    // Entrada de Dados
    // Vamos pedir para o usuário digitar onde quer colocar o primeiro navio.
    // Ele vai ser um navio horizontal, de 3 partes.
    printf("Digite a linha para o Navio Horizontal (de 0 a 4): ");
    scanf("%d", &linha_navio1);
    
    printf("Digite a coluna inicial para o Navio Horizontal (de 0 a 2): ");
    scanf("%d", &coluna_navio1);
    
    // Agora a gente coloca o navio no tabuleiro, usando o que o usuário digitou.
    // Usamos o numero 1.
    tabuleiro[linha_navio1][coluna_navio1] = 1;
    tabuleiro[linha_navio1][coluna_navio1 + 1] = 1;
    tabuleiro[linha_navio1][coluna_navio1 + 2] = 1;
    
    // E agora o segundo navio. Ele é vertical e tem 3 partes.
    printf("\nDigite a linha inicial para o Navio Vertical (de 0 a 2): ");
    scanf("%d", &linha_navio2);
    
    printf("Digite a coluna para o Navio Vertical (de 0 a 4): ");
    scanf("%d", &coluna_navio2);
    
    // Colocamos o segundo navio. Usamos o numero 2 pra ele.
    tabuleiro[linha_navio2][coluna_navio2] = 2;
    tabuleiro[linha_navio2 + 1][coluna_navio2] = 2;
    tabuleiro[linha_navio2 + 2][coluna_navio2] = 2;

    // Saída de Dados
    // Agora a gente tem que mostrar onde os navios estão, usando o que o usuário digitou.
    printf("\n--- Onde estao os Navios ---\n");
    
    printf("Navio Horizontal (3 partes) esta nas coordenadas:\n");
    printf("(%d, %d)\n", linha_navio1, coluna_navio1);
    printf("(%d, %d)\n", linha_navio1, coluna_navio1 + 1);
    printf("(%d, %d)\n", linha_navio1, coluna_navio1 + 2);
    
    printf("\nNavio Vertical (3 partes) esta nas coordenadas:\n");
    printf("(%d, %d)\n", linha_navio2, coluna_navio2);
    printf("(%d, %d)\n", linha_navio2 + 1, coluna_navio2);
    printf("(%d, %d)\n", linha_navio2 + 2, coluna_navio2);

    return 0;
}