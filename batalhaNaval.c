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

    //Print das Matrizes
    printf("Matriz com a posição dos navios:\n");
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("# # # # # # # # \n");

    //DESAFIO NÍVEL MESTRE:

    int cone [3][5];
    int cruz [5][5];
    int octa [5][5];

    //HABILIDADE CONE:

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cone[i][j] = 0;
            if(j >= 2-i && j <= 2+i)
            {
                cone[i][j] = 3;
            }
        }
    }
    printf("Matriz do cone:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("# # # # # # # # \n");


    //HABILIDADE CRUZ:

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cruz[i][j] = 0;
            if(i == 2 || j == 2)
            {
                cruz[i][j] = 3;
            }
        }
    }
    printf("Matriz da cruz:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    printf("# # # # # # # # \n");

    //HABILIDADE OCTAEDRO:

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            octa[i][j] = 0;
            if((i == 2 || j == 2) && j != 0 && j != 4)
            {
                octa[i][j] = 3;
            }
        }
    }
    printf("Matriz do octaedro:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", octa[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}