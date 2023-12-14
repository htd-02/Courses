#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get Size
    int size;
    do
    {
        size = get_int("Size please: ");
    }
    while (size < 1);

    // Create & Print Array
    int array[size];
    array[0] = 1;
    printf("%i\n", array[0]);
    for (int i = 1; i < size; i++)
    {
        array[i] = array[i - 1] * 2;
        printf("%i\n", array[i]);
    }
}
