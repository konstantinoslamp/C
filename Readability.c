#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int count_letters();
int count_words();
int count_sentences();

int main(void)
{
string text = get_string("Type here your text: \n");

int letters = count_letters(text);

int words = count_words(text);

int sentences = count_sentences(text);

float L = ((float)letters/words)*100;
float S = ((float)sentences/words)*100;

float index = 0.0588*L-0.296*S-15.8;
int rindex = round(index);

if (rindex<1)
{
    printf("Before Grade 1\n");
}
else if (rindex>=16)
{
    printf("Grade 16+\n");
}
else
{
    printf("Grade %i\n", rindex);
}
}

int count_letters(string text)
{
    int n=0;
    for (int i=0, length = strlen(text); i<length; i++)
    {
        if(text[i]>= 'A' && text[i]<='Z')
        {
            n++;
        }
        else if(text[i]>= 'a' && text[i]<='z')
        {
            n++;
        }
    }
    return n;
}

int count_words(string text)
{
    int n=0;
    for (int i=0, length = strlen(text); i<length; i++)
    {
        if(i==0)
        {
            while (text[i] == ' ')
            {
                i++;
            }
        }
        if ((text[i] == ' ' && text[i+1] !=' ') || text[i+1] == '\0')
        {
            n++;
        }
    }
    return n;
}

int count_sentences(string text)
{
    int n=0;
    for (int i=0, length = strlen(text); i<length; i++)
    {
        if(text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            n++;
        }
    }
    return n;
}