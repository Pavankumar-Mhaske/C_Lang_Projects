
void shiftUp(int **B ,int *row,int *col);
void shiftDown(int **B,int *row,int *col);
void shiftRight(int **B,int *row,int *col);
void shiftLeft(int **B,int *row,int *col);


void shiftUp(int **B ,int *row,int *col)
{
    if(*row==0)
    {
        B[*row][*col] = B[3][*col] ;
        B[3][*col] = 0 ;
        *row = 3 ;
    }
    else
    {
        B[*row][*col] = B[*row-1][*col];
        B[*row-1][*col] = 0 ;
        (*row)-- ;
    }
}


void shiftDown(int **B,int *row,int *col)
{
    if(*row==3)
    {
        B[*row][*col] = B[0][*col] ;
        B[0][*col] = 0 ;
        *row = 0 ;
    }
    else
    {
        B[*row][*col] = B[*row+1][*col];
        B[*row+1][*col] = 0 ;
        (*row)++;
    }
}

void shiftLeft(int **B,int *row,int *col)
{
    if(*col==0)
    {
        B[*row][*col] = B[*row][3] ;
        B[*row][3] = 0 ;
        *col= 3 ;
    }
    else
    {
        B[*row][*col] = B[*row][*col-1];
        B[*row][*col-1] = 0 ;
        (*col)--;
    }
}


void shiftRight(int **B,int *row,int *col)
{
    if(*col==3)
    {
        B[*row][*col] = B[*row][0] ;
        B[*row][0] = 0 ;
        *col = 0 ;
    }
    else
    {
        B[*row][*col] = B[*row][*col+1];
        B[*row][*col+1] = 0 ;
        (*col)++;
    }
}