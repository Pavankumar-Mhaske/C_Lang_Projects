// #include<stdio.h>
// #include<conio.h>
// #include "Colors.c"
// #include "TopBoard.c"
void matrix(int **);
// void main(void)
// {
//     int A[4][4];
//     int Count =1 ;
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             A[i][j] = Count++;
//         }
//     }
//     A[0][0] =4;
//     A[0][3] =1;
//     A[3][3] =0;
//     matrix(A);

// }
void matrix(int **A)
{
    
    // displayNameChance("pavan",5);
    setTextBlue();

    printf("\n\n\n\n\n\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t-----------------------------\n");
        for(int i=0;i<4;i++)
        {
            printf("\t\t\t\t\t\t\t\t\t\t|");
            
            for(int j=0;j<4;j++)
            {
                if(A[i][j]>9)
                {
                    setTextAqua();
                    printf("  %d  ",A[i][j]);
                    setTextBlue();
                    printf("|");
                }
                else if(A[i][j]==0)
                {
                    setColorGrey();
                    printf("      ");
                    setTextBlue();
                    printf("|");
                }
                else
                {
                    setTextAqua();
                    printf("  %d   ",A[i][j]);
                    setTextBlue();
                    printf("|");
                }
            }
            printf("\n");
        }
        setTextBlue();
        printf("\t\t\t\t\t\t\t\t\t\t-----------------------------");
        printf("\n\n");
        // getch();
}