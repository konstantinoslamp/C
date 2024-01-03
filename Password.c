// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int length = strlen(password);
    bool loc = false;
    bool upc = false;
    bool num = false;
    bool sym = false;
    for (int i = 0; i < length; i++)
    {
       int dig = password[i];
        if (dig > 96 && dig < 123)
        {
            loc = true;
        }
        else if(dig>64 && dig<91){
            upc=true;
        }
        else if(dig>32 && dig<48){
                sym=true;
        }
        else if(dig>49 && dig<58){
            num=true;
        }
    }
    if (loc&&upc&&sym&&num){
        return true;
    }
    return false;
}