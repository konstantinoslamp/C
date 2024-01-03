#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("How many blocks do you want? \n");
    }
    while (h <= 0 || h >= 9);

    // Print the pyramids side by side with a void in between
    for (int i = 0; i < h; i++)
    {
        // Print spaces for the left pyramid
        for (int j = 0; j < h - i - 1; j++)
        {
            printf(" ");
        }
        // Print hashes for the left pyramid
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }cd
        

        // Print spaces for the void
        printf("  ");

        // Print hashes for the right pyramid
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}