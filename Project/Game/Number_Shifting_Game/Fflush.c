
int Fflush(char ch);
int Fflush(char ch)
{
    if(ch==-32)
    {
        ch = getch();
        return ch;
    }
    return ch;
}
