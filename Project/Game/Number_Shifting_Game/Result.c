
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #include "Colors.c"
// #include "TopBoard.c"
// #include "Matrix.c"
// #include "Fflush.c"

int win(int **A,char* , int );
void lose(void);


// void main(void)
// {
//     int **A;
//     A = calloc(4,4);
//     for(int i=0;i<4;i++)
//         A[i] = calloc(4,4);
//     int Count =1 ;
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             A[i][j] = Count++;
//         }
//     }


//     displayNameChance("pavan",6);
//     matrix(A);
//     win(A,"PaVan",51);
//     // lose();

// }


int win(int **A,char *name , int chance)
{


    int count = 1;
    int loopVar = 1;
    for(int i=0 ; i<4&&loopVar ; i++)
    {
        for(int j=0;j<4;j++)
        {
            if(A[i][j]==0)
            {
                if(i+j==6)
                {
                    count++;
                }
                else
                {
                    loopVar = 0 ;
                    break;
                }
            }
            else
            {
                if(A[i][j]!=count)
                {
                    loopVar = 0;
                    break;
                } 
                count++;
            }
        }
    }

    if(count==17)
    {
        displayNameChance(name,--chance);
        matrix(A);
        printf("\n\n\n");

        printf("\n\t\t\t\t\t\t\t\t\t  ");
        colorLine(10);
        setTextLightBlue();
        printf("\n\t\t\t\t\t\t\t\t\t\t---------------------------------------");
        setTextLightGreen();
        printf("\n\t\t\t\t\t\t\t\t\t\t\tCongratulations , You Win !");
        setTextLightBlue();
        printf("\n\t\t\t\t\t\t\t\t\t\t---------------------------------------");
        printf("\n\t\t\t\t\t\t\t\t\t  ");
        colorLine(10);

        printf("\n");
        printf("\n\n");
        setTextBrightWhite();
        printf("\t\t\t\t\t\t\t\t\t\tPress any key to Continue.....");
        // fflush(stdin);
        Fflush(getch());
        return 1;
    }

    return 0;
}

void lose(void)
{
    setTextLightYellow();
    printf("\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t---------------------------------------");
    setTextRed();
    printf("\n\t\t\t\t\t\t\t\t\t\t    Bad Luck , You Lose the Game !");
    setTextLightYellow();
    printf("\n\t\t\t\t\t\t\t\t\t\t---------------------------------------");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t");
    setTextBrightWhite();
    printf("Press any key to Continue.....");
    // fflush(stdin);
    Fflush(getch());

}
