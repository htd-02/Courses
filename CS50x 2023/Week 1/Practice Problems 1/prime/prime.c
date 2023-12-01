#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    bool check = true;
    if (number != 1)
    {
        int counter = 2;
        while (counter < number && check == true)
        {
            if (number % counter != 0)
            {
                check = true;
                counter++;
            }
            else
            {
                check = false;
            }
        }
    }
    else
    {
        check = false;
    }
    return check;
}
