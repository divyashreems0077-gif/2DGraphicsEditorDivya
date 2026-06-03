#include <stdio.h>

char canvas[10][20];

void initializeCanvas()
{
    int i, j;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 20; j++)
        {
            canvas[i][j] = '_';
        }
    }
}

void drawPoint(int row, int col)
{
    if(row >= 0 && row < 10 && col >= 0 && col < 20)
    {
        canvas[row][col] = '*';
    }
}

void displayCanvas()
{
    int i, j;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 20; j++)
        {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row, col;

    initializeCanvas();

    printf("Enter row (0-9): ");
    scanf("%d", &row);

    printf("Enter column (0-19): ");
    scanf("%d", &col);

    drawPoint(row, col);

    displayCanvas();

    return 0;
}