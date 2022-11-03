#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


#include "Fflush.c"
#include "Welcome.c"
#include "Rules.c"
#include "Name.c"
#include "Challenge.c"
#include "Mode.c"
#include "TopBoard.c"
#include "Matrix.c"
#include "Invalid_Move.c"
#include "Escape.c"
#include "Result.c"
#include "MenuCard.c"
#include "Shifting.c"

void main(void)
{
    welcome();
    displayRules();

    char *game ;
    game = "on" ;
    int level = 0 ;

    while (game=="on")
    {

        char name[16] ;
        strcpy(name ,  getName());

        int stop = 1 ;  // Game exit variable
        int  row , col; // Position of the Empty Block
        int chance = challenge(name) ; // Number of chances Player can get

        int **A = mode(name);
        int loopVar = 1 ;
        for(int i=0 ;  i<4 && loopVar  ; i++)
        {
            for(int j=0;j<4;j++)
            {
                if(A[i][j]==0)
                {
                    row = i ;
                    col = j ;
                    loopVar = 0;
                    break ;
                }
            }
        }
        /* code */
        char move ;
        while( chance>0 && stop)
        {
            // printf("Player Name : %s\t\tMove Remaining : %d\n\n\n",name,chance);

            displayNameChance(name,chance);
            matrix(A);

            // Move Validation

            while (1)
            {
                fflush(stdin);
                move = getch();

                if( move==-32)
                {
                    move = getch();
                    break;
                }
                else if(move=='e' || move=='E' || move==72 || move==75 || move==77 || move==80)
                {
                    break;
                }
                else
                {
                    system("cls");
                    // printf("Player Name : %s\t\tMove Remaining : %d\n\n\n",name,chance);
                    displayNameChance(name,chance);
                    matrix(A);
                    invalid();
                }

            }

            // Shifting Element According to the move
            if( move==72 || move==75 || move==77 || move==80 )

            {
                switch(move)
                {
                case 72:
                    // shiftUp(A,&row,&col);
                    shiftDown(A,&row,&col);
                    break;
                case 80:
                    shiftUp(A,&row,&col);
                    // shiftDown(A,&row,&col);
                    break;
                case 75:
                    shiftRight(A,&row,&col);
                    // shiftLeft(A,&row,&col);
                    break;
                case 77:
                    shiftLeft(A,&row,&col);
                    // shiftRight(A,&row,&col);
                    break;
                }

                if(win(A,name,chance))
                {
                    // displayNameChance(name, chance);
                    chance  = -1 ;
                }
                else
                {
                    // Reducing Moves
                    chance-- ;
                }

            }
            // Choice is Exit
            else
            {
                char exitChar=escape();
                if(exitChar=='y' || exitChar=='Y')
                    stop = 0;
            }
        }

        if(chance==0)
        {
            // printf("Player Name : %s\t\tMove Remaining : %d\n\n\n",name,chance);
            displayNameChance(name , chance);
            matrix(A);
            lose();
        }

        game = menuCard();

    }

}





