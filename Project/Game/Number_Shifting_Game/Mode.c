// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #include<time.h>
// #include "Colors.c"
// #include "Fflush.c"

int ** mode(char *);

// void main(void)
// {
//     // int **A = mode();
//     // for(int i=0;i<4;i++)
//     // {
//     //     for(int j=0;j<4;j++)
//     //     {
//     //         printf("%d ",A[i][j]);
//     //     }
//     //     printf("\n");
//     // }
//     int **p = mode("PaVan");
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<4;j++)
//             printf("%d ",p[i][j]);
//         printf("\n");
//     }

//     printf("\n\n");
    
//     p = mode("PVan");
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<4;j++)
//             printf("%d ",p[i][j]);
//         printf("\n");
//     }
//     getch();
// } 

int ** mode(char *name)
{

    system("cls");
    setTextLightPurple();
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------------------------------------\n\n");

    setTextBlue();
    printf("\t\t\t\t\t\t  Hello ");
    setTextYellow();
    printf(" %s ",name);
    setTextBlue();
    printf(", You can select Mode of the Numbers-Shifting-Game  here.....\n\n");
    setTextRed();
    printf("\t\t\t\t\t\t\t\t\t\tTypes of Modes :\n");
    setTextBlue();
    printf("\t\t\t\t\t\t\t\t1.Random Mode\n");
    setTextAqua();
    printf("\t\t\t\t\t\t\t\t    ( For Each Level : Random Orientation of elements  )\n\n");
    setTextBlue();
    printf("\t\t\t\t\t\t\t\t2.Default Mode (Any Other Key)\n");
    setTextAqua();
    printf("\t\t\t\t\t\t\t\t    ( For Each Level  : Fixed Orientation of elements  )");
    printf("\n");
    setTextLightPurple();
    printf("\t\t\t\t\t\t----------------------------------------------------------------------------------------\n");

    setTextGreen();
    printf("\n\n\n");
    printf("\t\t\t\t\t\tFor\n");
    printf("\t\t\t\t\t\t\t1. Random Mode --> Press 1\n\n");
    printf("\t\t\t\t\t\t\t2. Default Mode --> Press any Other key \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t");
    char choice = Fflush(getch());

    int **p ;
    p = calloc(4,4);
    for(int i=0;i<4;i++)
        p[i] = calloc(4,4);

    if(choice=='1')
    {
        srand(time(0));
        int length = 0 , arr[16] , i  ;
        while(length<16)
        {
            int ele = rand()%16 ;

            for(i=0;i<length;i++)
            {
                if(arr[i] == ele) 
                    break;
            }
            if(i==length)
            {
                arr[length] = ele ;
                length++;
            }
        }
        int index = 0;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                p[i][j] = arr[index++];
            }
        }
    }
    else
    {
        // int Count =1 ;
        // for(int i=0;i<4;i++)
        // {
            // for(int j=0;j<4;j++)
            // {
            //     p[i][j] = Count++;
            // }
        // }
        // p[0][0] =4;
        // p[0][3] =1;
        // p[3][3] =0;
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
    }

    printf("\n\n\n\n\n\t\t\t\t\t\t\t");
    colorLine(10);
    setTextYellow();
    printf("\n\t\t\t\t\t\t\t\tYou have selected : ");
    if(choice=='1')
    {
        setTextRed();
        printf("Random Mode\n");
    }
    else
    {
        setTextRed();
        printf("Default Mode\n");
    }

    printf("\n\t\t\t\t\t\t\t");
    colorLine(10);

    setTextBrightWhite();
    printf("\n\n");
    printf("\n\t\t\t\t\t\t\t\t\tPress any key to Continue...");
    Fflush(getch());

    return p;
}
