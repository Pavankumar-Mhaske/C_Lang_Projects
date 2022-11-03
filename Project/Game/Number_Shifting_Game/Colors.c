#include<windows.h>
// #include<conio.h>
// #include<stdio.h>


void setTextDefault(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x07);
}

void setTextBlack(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x00);
}

void setTextBlue(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x01);
}

void setTextGreen(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc , 0x02);
}

void setTextAqua(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x03);
}

void setTextRed(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x04);
}

void setTextPurple(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x05);
}

void setTextYellow(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x06);
}

void setTextWhite(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x07);
}

void setTextGrey(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x08);
}

void setTextLightBlue(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x09);
}

void setTextLightGreen(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x0A);
}

void setTextLightAqua(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x0B);
}

void setTextLightRed(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x0C);
}

void setTextLightPurple(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x0D);
}

void setTextLightYellow(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x0E);
}

void setTextBrightWhite(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x0F);
}

void setColorGrey(void)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc,0x80);
}

void colorLine(int n);
void colorLine(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==0)
            {
                setTextRed();
                printf("*");
            }
            else if(j==1)
            {
                setTextBlue();
                printf("*");
            }
            else if(j==2)
            {
                setTextYellow();
                printf("*");
            }                
            else if(j==3)
            {
                setTextAqua();
                printf("*");
            }                
            else
            {
                setTextGreen();
                printf("*");
            }
        }
    }
}

/*
    0 = Black       8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White
*/