#include <stdio.h>

int main(){

    //Vetores Navios
    int ship_one[3] = {3, 3, 3};
    int ship_two[3] = {3, 3, 3};
    int ship_three[3] = {3, 3, 3};
    int ship_four[3] = {3, 3, 3};

    //Matriz Tabuleiro
    int board [10][10];

    //Execução do Tabuleiro
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            board[i][j] = 0;
        }
    }
    
    //Posições dos Navios
    for(int i = 0; i < 3; i++)
    {
        board[3][2 + i] = ship_one[i];
        board[6 + i][5] = ship_two[i];
        board[7 + i][6 + i] = ship_three[i];
        board[i][6 + i] = ship_four[i];
    }

    //Print da Matriz
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}