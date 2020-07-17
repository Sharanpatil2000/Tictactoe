#include <stdio.h>
#include <stdlib.h>




int main()
{
    int one=1,two=2;
    printf("reference outline\n\n\n\n");
    printf("  0  1  2\n");
    printf("0 _  _  _\n");
    printf("1 _  _  _\n");
    printf("2 _  _  _\n");
    printf("\n\n\n\n");


    printf("Welcome to a game of Tic-Tac-toe\n");
    printf("there are 2 players for this game\n");
    printf("the marking of player one will be marked as 1 and marking of player two will be shown as 2\n");

    int board[3][3],i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            board[i][j]=0;
        }
    }


    printf("this game is being played on a 3*3 board\n\n");
    printf("this is the initail staus of the board\n");


    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %d ",board[i][j]=0);;
        }
        printf("\n");
    }

    int x,y;


    for(i=0; i<1; i++)
    {

        printf("player 1 enter the position");
        scanf("%d",&x);
        scanf("%d",&y);


        if(board[x][y]==0)
        {
            board[x][y]=1;
        }
        else
        {
            printf("invalid move;");
            exit(0);
        }


        printf("player 2 enter the position");
        scanf("%d",&x);
        scanf("%d",&y);


        if(board[x][y]==0)
        {
            board[x][y]=2;
        }
        else
        {
            printf("invalid move;");
            exit(0);
        }

        if((one==board[0][0] && one==board[1][1] && one==board[2][2]) || (one==board[0][0] && one==board[1][0] && one==board[2][0]) || (one==board[0][0] && one==board[0][1] && one==board[0][2]) || (one==board[0][1] && one==board[1][1] && one==board[2][1]) ||  (one==board[0][2] && one==board[1][2] && one==board[2][2] ) || ( one==board[1][0] && one==board[1][1] && one==board[1][2] ) || ( one==board[2][0] && one==board[2][1]&& one==board[2][2]))
        {
            printf("player one has won");
            exit(0);
        }
        else if((two==board[0][0] && two==board[1][1] && two==board[2][2]) || (two==board[0][0] && two==board[1][0] && two==board[2][0]) || (two==board[0][0] && two==board[0][1] && two==board[0][2]) || (two==board[0][1] && two==board[1][1] && two==board[2][1]) ||  (two==board[0][2] && two==board[1][2] && two==board[2][2] ) || ( two==board[1][0] && two==board[1][1] && two==board[1][2] ) || ( two==board[2][0] && two==board[2][1]&& two==board[2][2]))
        {
            printf("player 2 has won");
            exit(0);
        }
        else
        {
            continue;
        }

    }
    int jlet,klet;
    int counter=0;

    for(jlet=0; jlet<4; jlet++)
    {
        counter=counter+1;
        printf("player 1 enter the position");
        scanf("%d",&x);
        scanf("%d",&y);


        if(board[x][y]==0)
        {
            board[x][y]=1;
        }
        else
        {
            printf("invalid move;");
            exit(0);
        }


        if((one==board[0][0] && one==board[1][1] && one==board[2][2]) || (one==board[0][0] && one==board[1][0] && one==board[2][0]) || (one==board[0][0] && one==board[0][1] && one==board[0][2]) || (one==board[0][1] && one==board[1][1] && one==board[2][1]) ||  (one==board[0][2] && one==board[1][2] && one==board[2][2] ) || ( one==board[1][0] && one==board[1][1] && one==board[1][2] ) || ( one==board[2][0] && one==board[2][1]&& one==board[2][2]))
        {
            printf("player one has won");
            exit(0);
        }
        else if((two==board[0][0] && two==board[1][1] && two==board[2][2]) || (two==board[0][0] && two==board[1][0] && two==board[2][0]) || (two==board[0][0] && two==board[0][1] && two==board[0][2]) || (two==board[0][1] && two==board[1][1] && two==board[2][1]) ||  (two==board[0][2] && two==board[1][2] && two==board[2][2] ) || ( two==board[1][0] && two==board[1][1] && two==board[1][2] ) || ( two==board[2][0] && two==board[2][1]&& two==board[2][2]))
        {
            printf("player 2 has won");
            exit(0);

        }


        if(counter>3)
        {
            printf("the match is a draw\n");
            exit(0);
        }
        printf("player 2 enter the position");
        scanf("%d",&x);
        scanf("%d",&y);


        if(board[x][y]==0)
        {
            board[x][y]=2;
        }
        else
        {
            printf("invalid move;");
            exit(0);
        }

        if((one==board[0][0] && one==board[1][1] && one==board[2][2]) || (one==board[0][0] && one==board[1][0] && one==board[2][0]) || (one==board[0][0] && one==board[0][1] && one==board[0][2]) || (one==board[0][1] && one==board[1][1] && one==board[2][1]) ||  (one==board[0][2] && one==board[1][2] && one==board[2][2] ) || ( one==board[1][0] && one==board[1][1] && one==board[1][2] ) || ( one==board[2][0] && one==board[2][1]&& one==board[2][2]))
        {
            printf("player one has won");
            exit(0);
        }
        else if((two==board[0][0] && two==board[1][1] && two==board[2][2]) || (two==board[0][0] && two==board[1][0] && two==board[2][0]) || (two==board[0][0] && two==board[0][1] && two==board[0][2]) || (two==board[0][1] && two==board[1][1] && two==board[2][1]) ||  (two==board[0][2] && two==board[1][2] && two==board[2][2] ) || ( two==board[1][0] && two==board[1][1] && two==board[1][2] ) || ( two==board[2][0] && two==board[2][1]&& two==board[2][2]))
        {
            printf("player 2 has won");
            exit(0);

        }

    }




}
