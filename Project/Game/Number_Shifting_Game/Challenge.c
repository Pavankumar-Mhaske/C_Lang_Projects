// #include<stdio.h>
// #include<conio.h>
// #include "Colors.c"
// #include "TopBoard.c"
// #include "Matrix.c"
// #include "Fflush.c"

int challenge(char *);

// void main(void)
// {
//     // int A[4][4];
//     // int Count =1 ;
//     // for(int i=0;i<4;i++)
//     // {
//     //     for(int j=0;j<4;j++)
//     //     {
//     //         A[i][j] = Count++;
//     //     }
//     // }
//     // A[0][0] =4;
//     // A[0][3] =1;
//     // A[3][3] =0;

//     // displayNameChance("pavan",6);
//     // matrix(A);
//     int chance = challenge("Pavan");
//     printf("%d",chance);

// }

int  challenge(char *name)
{
    system("cls");
    int chance = 100 ;
    char choice ;

    setTextLightPurple();
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------------------------------------\n\n");

    setTextBlue();
    printf("\t\t\t\t\t\t  Hello ");
    setTextYellow();
    printf(" %s ",name);
    setTextBlue();
    printf(", You can select a challenge here.....\n\n");
    setTextRed();
    printf("\t\t\t\t\t\t\t\t\t\tTypes of Challeges :\n");
    setTextBlue();
    printf("\t\t\t\t\t\t\t\t1.Custume Challege\n\n");

    printf("\t\t\t\t\t\t\t\t2.Auto Challege (Any Other Key)\n");
    setTextAqua();
    printf("\t\t\t\t\t\t\t\t    ( Available chances : %d  )\n",chance);
    printf("\n");
    setTextLightPurple();
    printf("\t\t\t\t\t\t----------------------------------------------------------------------------------------\n");

    // fflush(stdin);


    choice = Fflush(getch());


    if(choice=='1')
    {
        setTextBrightWhite();
        // printf("\t\t\t\t\t\t\t\tHello %s  .\n",name);
        printf("\n\t\t\t\t\t\tEnter Number of chances you want to Complete the Game : ");
        setTextYellow();

        scanf("%d",&chance);

        printf("\n\n\n\n\n\t\t\t\t\t\t\t");
        colorLine(10);
        setTextYellow();
        printf("\n\n\t\t\t\t\t\t\t\tYou have selected : ");
        setTextRed();
        printf("CUSTUME CHALLENGE");
        setTextYellow();
        printf("\n\t\t\t\t\t\t\t\tYou will get : ");
        setTextRed();
        printf("%d",chance);
        setTextYellow();
        printf("   Chances ");
        
        printf("\n\n\b\t\t\t\t\t\t\t");
        colorLine(10);

    }
    else
    {
        printf("\n\n\n\n\n\t\t\t\t\t\t\t");
        colorLine(10);
        setTextYellow();
        printf("\n\n\t\t\t\t\t\t\t\tYou have selected : ");
        setTextRed();
        printf("AUTO CHALLENGE");
        
        setTextYellow();
        printf("\n\t\t\t\t\t\t\t\tYou will get : ");
        setTextRed();
        printf("%d",chance);
        setTextYellow();
        printf("   Chances ");
        printf("\n\n\t\t\t\t\t\t\t");
        colorLine(10);

    }
    setTextBrightWhite();
    printf("\n\n\n\n\n\t\t\t\t\t\t\t");
    printf("Press any key to Continue......");
    Fflush(getch());

    return chance ;
}
