#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for a value between 1 and 8
    int size;
    do
    {
        size = get_int("Between 1 and 8, what should be the size of the pyramid? ");
    }
    while (size < 1 || size > 8);

    // Generate the pyramid
    int line = 1;
    while (line <= size)
    {
        // Print first row of spaces
        int spaces = size - line;
        int counter = 0;
        while (counter < spaces)
        {
            printf(" ");
            counter++;
        }

        // Print first row of bricks
        counter = 0;
        while (counter < line)
        {
            printf("#");
            counter++;
        }

        // Print second row of spaces
        printf("  ");

        // Print second row of bricks
        counter = 0;
        while (counter < line)
        {
            printf("#");
            counter++;
        }

        // End of line
        printf("\n");
        line++;
    }
}
