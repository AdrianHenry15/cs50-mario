#include <stdio.h>

int main(void)
{
    // Get input of the Height
    int height;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    // keep the pyramid blocks within 1-8 blocks put user input
    while (height < 1 || height > 8);

    // print desired pyramid height
    for (int i = 0; i < height; i++)
    {
        // print desired pyramid blocks
        for (int j = 0; j < height; j++)
        {
            // print spaces between each row of pyramid blocks
            if (i + j < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }


        }

        printf("\n");

    }
}