// #include<stdio.h>
// #include<conio.h>
// #include "Colors.c"
// #include "TopBoard.c"
// #include "Matrix.c"


char escape(void);

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


//     displayNameChance("pavan",6);
//     matrix(A);
//     escape();

// }


char escape(void)
{
    setTextLightGreen();
    printf("\n\n\n");
    printf("\n\t\t\t___________________________________________________________________________");
    printf("\n\t\t\t---------------------------------------------------------------------------");
    setTextYellow();

    printf("\n\t\t\t\t");
    printf("You have chosen the Exit Option \tAre you sure, you want to exit ? ");

    setTextBlue();
    printf("\n\t\t\t\t\t");
    printf("  Press->    Yes : 'y'    ,    No : 'Press any other key'\t ");
    setTextAqua();
    printf("\n\t\t\t\t\t");
    printf("                    -                -------------------    ");

    setTextLightGreen();
    printf("\n\t\t\t___________________________________________________________________________");
    printf("\n\t\t\t===========================================================================");
    
    fflush(stdin);
    char ch = Fflush(getch());
    return ch;
}



// printf("\n\n\t");
//                 printf("|  You have chosen the Exit Option !");
//                 printf("\tAre you sure, you want to exit ? |");
//                 printf("\n");
//                 printf("\t");
//                 printf("|\t  Press->    Yes : 'y'    ,    No : 'Press any other key'\t |");
//                 printf("\n");

//                 fflush(stdin);
//                 char exitChar=escape();