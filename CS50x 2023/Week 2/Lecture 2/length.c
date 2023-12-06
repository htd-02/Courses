#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt for name
    string name = get_string("Name: ");

    // Count characters
    int length = strlen(name);

    printf("%i\n", length);
}
