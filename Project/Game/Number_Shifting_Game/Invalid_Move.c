// #include<stdio.h>
// #include<conio.h>
// #include "Colors.c"
// #include "TopBoard.c"
// #include "Matrix.c"

void invalid(void);

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

//     displayNameChance("pavan",6);
//     matrix(A);
//     invalid();

// }

void invalid(void)
{
    setTextLightYellow();
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|---------------------------------------|");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|");
    setTextRed();
    printf("\tInvalid Move !");
    printf("\t\t\t");
    setTextLightYellow();
    printf("|");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t|---------------------------------------|");
}