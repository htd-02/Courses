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
    bool lowercase = false;
    bool uppercase = false;
    bool number = false;
    bool symbol = false;
    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] > 96 && password[i] < 123)
        {
            if (lowercase == false)
            {
                lowercase = true;
            }
        }
        else if (password[i] > 64 && password[i] < 91)
        {
            if (uppercase == false)
            {
                uppercase = true;
            }
        }
        else if (password[i] > 47 && password[i] < 58)
        {
            if (number == false)
            {
                number = true;
            }
        }
        else if (symbol == false)
        {
            symbol = true;
        }

        if (lowercase == true && uppercase == true && number == true && symbol == true)
        {
            return true;
        }
    }

    return false;
}
