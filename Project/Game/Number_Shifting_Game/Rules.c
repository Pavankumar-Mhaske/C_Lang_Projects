// #include<stdio.h>
// #include<conio.h>
// #include "Fflush.c"
// #include "Colors.c"
void displayRules(void);
// void main(void)
// {
//     displayRules();
// }
void displayRules(void)
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t\t\tEnter any key to start the Game.....");
    Fflush(getch());
    setTextLightGreen();
    printf("\n\n\n\n");
    printf("************************************************************************************************************************************************************************************************\n");
    printf("************************************************************************************************************************************************************************************************\n");
    setTextLightYellow();
    printf("\n\t\t\t\t\t\t\t\t\t____________________________________\n");
    printf("\t\t\t\t\t\t\t\t\t|\t\t\t\t    |\n");
    printf("\t\t\t\t\t\t\t\t\t|\t");
    setTextRed();
    printf("NUMBER SHIFTING GAME\t    ");
    setTextLightYellow();
    printf("|\n");
    // printf("\t\t|\t\t\t\t    |\n");
    printf("\t\t\t\t\t\t\t\t\t|___________________________________|\n\n\n");\
    setTextLightGreen();
    printf("************************************************************************************************************************************************************************************************\n");
    printf("************************************************************************************************************************************************************************************************\n");

    setTextRed();   
    printf("\n\n\n\t\t\t\t\t\t\t\t\tRULES OF THIS GAME\n\n");

    setTextBlue();
    printf("\t\t\t\t\t\t1.You can move only 1 step at a time by arrow key\n");
    setTextLightAqua();
    printf("\t\t\t\t\t\t\t\tMove UP     : by UP Arrow Key \n");
    printf("\t\t\t\t\t\t\t\tMove DOWN   : by DOWN Arrow Key \n");
    printf("\t\t\t\t\t\t\t\tMove LEFT   : by LEFT Arrow Key \n");
    printf("\t\t\t\t\t\t\t\tMove RIGHT  : by RIGHT Arrow Key \n\n\n");

    setTextBlue();
    printf("\t\t\t\t\t\t2.You can move number at empty position only\n\n\n");

    setTextBlue();
    printf("\t\t\t\t\t\t3.For each valid move : Your total number of move will decreased by 1\n\n\n");

    setTextBlue();    
    printf("t\t\t\t\t\t\t4.Wining situations : Number in a 4*4 matrix should be in order from 1 to 15\n");
    
    setTextGreen();
    printf("\t\t\t\t\t\t\t\t\t\tWinning Situation : \n");
    printf("\t\t\t\t\t\t\t\t--------------------------\n");
    printf("\t\t\t\t\t\t\t\t|  1  |  2  |  3  |  4  |\n");
    printf("\t\t\t\t\t\t\t\t|  5  |  6  |  7  |  8  |\n");
    printf("\t\t\t\t\t\t\t\t|  9  |  10 |  11 |  12 |\n");
    printf("\t\t\t\t\t\t\t\t|  13 |  14 |  15 |     |\n");
    printf("\t\t\t\t\t\t\t\t--------------------------\n\n\n");

    setTextBlue();
    printf("\t\t\t\t\t\t5.You can Exit the game at any time by pressing 'E' or 'e' key \n\n\n");
    printf("\t\t\t\t\t\t  So try to win in minimum no of move\n");

    setTextYellow();
    printf("\n\t\t\t\t\t\t\t\tHappy Gaming , Good Luck !\n\n");

    setTextWhite();
    printf("\t\t\t\t\t\t\t\tEnter any key to start.....");
    fflush(stdin);
    // getch();
    Fflush(getch());

}



    // 0 = Black       8 = Gray
    // 1 = Blue        9 = Light Blue
    // 2 = Green       A = Light Green
    // 3 = Aqua        B = Light Aqua
    // 4 = Red         C = Light Red
    // 5 = Purple      D = Light Purple
    // 6 = Yellow      E = Light Yellow
    // 7 = White       F = Bright White