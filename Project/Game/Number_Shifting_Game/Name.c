// #include<stdio.h>
// #include "Colors.c"
char* getName(void);
// void main(void)
// {
//     getName();
// }
char* getName(void)
{
    system("cls");
    setTextPurple();
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t|------------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t|                                                            |\n");
    printf("\t\t\t\t\t\t\t\t|                      ");
    setTextYellow();
    printf("Enter Name :                          ");
    setTextPurple();
    printf("|\n");
    printf("\t\t\t\t\t\t\t\t|                                                            |\n");
    printf("\t\t\t\t\t\t\t\t|------------------------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t***************** ->>  ");
    setTextAqua();
    fflush(stdin);
    char *name = calloc(16,1);
    scanf("%s",name);
    return name;
    // getch();
}