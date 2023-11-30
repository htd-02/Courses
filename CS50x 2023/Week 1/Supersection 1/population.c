#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for starting number of llamas
    int start;
    do
    {
        start = get_int("How many starting llamas? ");
    }
    while (start < 9 );

    // Prompt user for goal number of llamas
    int end;
    do
    {
        end = get_int("Which goal population? ");
    }
    while (end < start);

    // Add and substract llamas every year until reaching the goal number of llamas
    int years = 0;
    int number = start;
    while (number < end)
    {
        number += number / 12;
        years++;
    }

    // Print the number of years it took to reach the goal number of llamas
    printf("It took %i years to reach %i llamas with a starting number of %i.\n", years, end, start);
}
