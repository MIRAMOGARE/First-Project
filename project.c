#include <stdio.h>
int main()
{
    char board[3][3] = {0};      
    int i, j;                    
    char mark;                 

    for (int move = 0; move < 9; move++)          
    {
        printf("*********************************************************************\n");
        printf("Enter position\n");
        scanf("%d",&i);   
        scanf("%d",&j); 

        
        printf("Enter mark (X or O)\n ");
        scanf(" %c",&mark);       
        printf("_____________________________________________________________________\n");
        
        board[i-1][j-1] = mark;

        
        printf("\n");
        for (i = 0; i < 3; i++)                      
        {
            for (j = 0; j < 3; j++)
            {
                if (board[i][j] == 0)
                    printf("null ");                 
                else
                    printf("%c    ", board[i][j]);   
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}