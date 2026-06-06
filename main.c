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
    displayPicture();

    return 0;
}
