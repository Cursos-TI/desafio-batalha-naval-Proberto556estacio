#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    int tabuleiro [10] [10] = {0};    //Declaração a matriz de números inteiros (10 x 10) inicializando com 0.

        //Exibe título "Posicionanento dos navios"
        printf("\nPosicionamento dos Navios\n");

        // Navio 1 - posição horizontal - linha 2 fixa, coluna 3 a 5
        for (int j = 3; j <= 5; j++)    
        {
            tabuleiro [2] [j] = 3;
            printf("Návio 1 na horizontal: linha %d, coluna %d \n", 2, j);
        }
        
        // Navio 2 - posicionamento vertical - coluna 7 fixa, linha 4 a 6
        for (int i = 4; i <= 6; i++)            
        {
            tabuleiro [i] [7] = 3;
            printf("Navio 2 na vertical: linha %d, coluna %d \n", i, 7);
        }
        
        // Navio 3 - posicionamento diagonal principal
        

        //Tabuleiro Definido - 0 representa "Água" e 3 representa partes dos "Navios"
        printf("\nTabuleiro Batalha Naval\n");

        for (int i = 0; i < 10; i++)        //Definindo as linhas do tabuleiro
        {                                   
            for (int j = 0; j < 10; j++)    //Definindo as colunas do tabuleiro
            {
                printf("%d ", tabuleiro [i] [j]);   
            }
            printf("\n");
        }

    
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
