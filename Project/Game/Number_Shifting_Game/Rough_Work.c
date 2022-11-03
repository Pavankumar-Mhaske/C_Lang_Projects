#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "Colors.c"

int** fun(int **);
// void Fflush(void);
// int dummy(char );
int main(void)
{
        int **p ;
        p = calloc(4,4);

        for(int i=0;i<4;i++)
                p[i] = calloc(4,4);
        p[0][0] = 13 ;        
        p[0][1] = 6 ;
        p[0][2] = 3 ;
        p[0][3] = 1 ;
        p[1][0] = 5 ;
        p[1][1] = 7 ;
        p[1][2] = 8 ;
        p[1][3] = 12 ;
        p[2][0] = 10 ;
        p[2][1] = 0 ;
        p[2][2] = 11 ;
        p[2][3] = 15 ;
        p[3][0] = 9 ;
        p[3][1] = 2 ;
        p[3][2] = 14 ;
        p[3][3] = 4 ;

        for(int i=0;i<4;i++)
        {
                for(int j=0;j<4;j++)
                {
                        printf("%d ",p[i][j]);
                }
                printf("\n");
        }


        
}
// int** fun(int** A)
// {
//         int **p  =calloc(4,4);
//         for(int i =0 ;i<4;i++)
//                 p[i] = calloc(4,4);
//         p[0][0] =4;
//         p[0][3] =1;
//         p[3][3] =0;
//         A = p ;
//         return p;
// }
// int dummy(char ch )
// {

//         if (ch==72 || ch == 75 || ch==77 || ch==80)
//         {
//                 ch = getch();
//                 return 1 ;
//         }
//        else
//             return 0 ;
// }

// void Fflush(void)
// {
//     char ch = getch();
//     while(ch==-32 || ch==72 || ch == 75 || ch == 77 || ch == 80)
//         ch = getch();
// }
