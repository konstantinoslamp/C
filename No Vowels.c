#include <cs50.h>
#include <stdio.h>
#include <string.h>

string noVowels(string input, char newin[]);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("%s one word needed\n", argv[0]);
        return 1;
    }
    char newWord[strlen(argv[1])+1];
    string modifiedString = noVowels(argv[1], newWord);
    printf("Modified string: %s\n", newWord);
    return 0;
}

string noVowels(string input, char newin[])
{
    int length = strlen(input);
    //newin[length + 1];

    for (int i = 0; i < length; i++)
    {
        switch (input[i])
        {
            case 'a':
                newin[i] = '6';
                break;
            case 'e':
                newin[i] = '3';
                break;
            case 'i':
                newin[i] = '1';
                break;
            case 'o':
                newin[i] = '0';
                break;
            default:
                newin[i] = input[i];
                break;
        }
    }

   newin[length] = '\0'; // Null-terminate the result string

    return newin;
}
