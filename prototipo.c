#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};  // Inicializa todo o tabuleiro com 0

    // Navio Horizontal (linha 2, colunas 3 a 5)
    for (int j = 3; j <= 5; j++) {
        tabuleiro[2][j] = 3;
        printf("Navio Horizontal: (%d, %d)\n", 2, j);
    }

    // Navio Vertical (coluna 7, linhas 4 a 6)
    for (int i = 4; i <= 6; i++) {
        tabuleiro[i][7] = 3;
        printf("Navio Vertical: (%d, %d)\n", i, 7);
    }

    //Saida no tabuleiro
    for (int i = 0; i < 10; i++)        //Definindo as linhas do tabuleiro
        {                                   
            for (int j = 0; j < 10; j++)    //Definindo as colunas do tabuleiro
            {
                printf("%d ", tabuleiro [i] [j]);                
            }
            printf("\n");

        }
               
    return 0;
}
