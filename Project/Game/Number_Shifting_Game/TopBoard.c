// #include<stdio.h>
// #include<string.h>
// #include "Colors.c"


void displayNameChance(char name[] , int chance);
// int main()
// {
//     /* code */
//     displayNameChance("pavan",5);
//     // getch();
//     return 0;
// }

void displayNameChance(char name[] , int chance)
{
    system("cls");
    setTextLightPurple();
    printf("\n\n\n\n\n");
    printf("\t\t\t\t\t\t|----------------------------------------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t|                                                                                        |\n");
    printf("\t\t\t\t\t\t|                                                                                        |\n");
    printf("\t\t\t\t\t\t|      ");
    setTextBlue();
    printf("\t\tPlayer Name : ");
    setTextYellow();
    printf("%s",name);
    printf("\t");
    setTextBlue();
    printf("\tMove Remaing : ");
    
    if(chance<5)
        setTextRed();
    else
        setTextGreen();
    printf("%d",chance);

    setTextLightPurple();
    printf("                         \n");
    printf("\t\t\t\t\t\t|                                                                                        |\n");
    printf("\t\t\t\t\t\t|                                              ");
    if(chance<5)
        setTextRed();
    else
        setTextGreen();
    printf("********************");
    setTextLightPurple();
    printf("                      |\n");
    printf("\t\t\t\t\t\t|----------------------------------------------------------------------------------------|");
    printf("\n");
}