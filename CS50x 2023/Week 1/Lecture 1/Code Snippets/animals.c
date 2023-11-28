#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = 3;
    while (i > 0)
    {
        printf("meow\n");
        i--;
    }

    while (i < 3)
    {
        printf("waf\n");
        i++;
    }

    for ( int j = 0; j < 3; j++)
    {
        printf("honk\n");
    }

    while (true) // Ctrl+C to interrupt
    {
        printf("quack\n");
    }
}
