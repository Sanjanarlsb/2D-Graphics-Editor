#include <stdio.h>

#define WIDTH 40
#define HEIGHT 20

char picture[HEIGHT][WIDTH];

// Fill the canvas with '_'
void initializePicture()
{
    int i, j;

    for(i = 0; i < HEIGHT; i++)
    {
        for(j = 0; j < WIDTH; j++)
        {
            picture[i][j] = '_';
        }
    }
}
void drawRectangle(int x, int y, int width, int height)
{
    int i, j;

    for(i = y; i < y + height; i++)
    {
        for(j = x; j < x + width; j++)
        {
            picture[i][j] = '*';
        }
    }
}
void drawLine(int x1, int y1, int x2, int y2)
{
    int i;

    if(y1 == y2)
    {
        for(i = x1; i <= x2; i++)
        {
            picture[y1][i] = '*';
        }
    }
    else if(x1 == x2)
    {
        for(i = y1; i <= y2; i++)
        {
            picture[i][x1] = '*';
        }
    }
}

// Display the canvas
void displayPicture()
{
    int i, j;

    for(i = 0; i < HEIGHT; i++)
    {
        for(j = 0; j < WIDTH; j++)
        {
            printf("%c ", picture[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("2D Graphics Editor Started!\n\n");

    initializePicture();
    drawRectangle(5, 3, 10, 5);
    drawLine(0, 0, 20, 0);
    drawLine(25, 2, 25, 12);
    displayPicture();

    return 0;
}
