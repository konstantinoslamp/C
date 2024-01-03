#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    // Check for the correct number of command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string key = argv[1];

    for (int i = 0; i < strlen(key); i++)
    {
        if (key[i] < 48 || key[i] > 57)
        {
            printf("Key must be a non-negative integer.\n");
            return 1;
        }
    }
    // Convert the command-line argument to an integer
    int k = atoi(argv[1]);

    // Check if the conversion was successful and k is a non-negative integer
    if (k < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string txt = get_string("plaintext: ");
    int length = strlen(txt);
    for (int i = 0; i < length; i++)
    {
        if (isalpha(txt[i]))
        {
            if (islower(txt[i]))
            {
                txt[i] = (txt[i] - 'a' + k) % 26 + 'a';
            }
            else if (isupper(txt[i]))
            {
                txt[i] = (txt[i] - 'A' + k) % 26 + 'A';
            }
        }
    }

    printf("ciphertext: %s\n", txt);
    return 0;
}