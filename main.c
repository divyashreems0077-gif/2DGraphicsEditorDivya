#include <stdio.h>

char canvas[20][40];

void initializeCanvas()
{
    int i,j;

    for(i=0;i<20;i++)
    {
        for(j=0;j<40;j++)
        {
            canvas[i][j]='_';
        }
    }
}

void displayCanvas()
{
    int i,j;

    for(i=0;i<20;i++)
    {
        for(j=0;j<40;j++)
        {
            printf("%c",canvas[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    initializeCanvas();
    displayCanvas();

    return 0;
}