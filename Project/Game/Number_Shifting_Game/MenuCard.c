// #include<stdio.h>
// #include<conio.h>
// #include "Colors.c"

char* menuCard(void);

// void main(void)
// {
//     // getch();
//     char *ch = menuCard();
// }


char* menuCard(void)
{

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    setTextLightYellow();
    printf("\t\t\t\t\t\t*************************************************************************************\n");        
    setTextRed();
    printf("\t\t\t\t\t\t\t\t\t\tNumber Shifting Game ");
    setTextLightYellow();
    printf("\n\t\t\t\t\t\t*************************************************************************************\n"); 
    printf("\n\n\n");   
    setTextAqua();
    printf("\n\t\t\t\t\t\t\t\t\t\t\tWell Played \n\n");

    setTextBlue();
    printf("\n\t\t\t\t\t\t---------------------------------------");
    printf("\n\t\t\t\t\t\t\tPress");
    printf("\n\t\t\t\t\t\t\t1.Exit");
    printf("\n\t\t\t\t\t\t\t2.Continue Game(Press any other key)");
    printf("\n\t\t\t\t\t\t---------------------------------------");
    printf("\n");

    char choice ;
    // fflush(stdin);
    choice = Fflush(getch());

    if(choice=='1')
        return "off";
    else
        return "on";
    
}