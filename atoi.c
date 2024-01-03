//converts a (positive or negative) integer from a string (e.g., "50") to an int (e.g., 50)
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    int n = strlen(input);
    int num;
    for (int i = 0; i < n; i++)
    {
        num=num*10+(input[i]-'0');
    }
    return num;
}