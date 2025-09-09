# include <stdio.h>


int main() {

    int tabuleiro [10] [10] = {0};
    
    //Posição návio - Horizontal
    for (int j = 3; j <= 5; j++)  
    {
        tabuleiro [2] [j] = 3;
        printf("Navio na Horizontal: Linha %d, Coluna %d \n", 2, j);
    }

    for (int i = 4; i <= 6; i++)
    {
        tabuleiro [i] [7] = 3;
        printf("Navio na Vertical: Linha %d, Coluna %d \n", i, 7);
    }
    
        
    // Tabuleiro de Batalha Naval - 


    for (int i = 0; i < 10; i++) //Definição da linha no tabuleiro
    {
        for (int j = 0; j < 10; j++)  //Definição da coluna no tabuleiro
        {
            printf("%d", tabuleiro [i] [j]);
        }
        printf("\n");
    }
    



    return 0;
}