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
    displayPicture();

    return 0;
}
