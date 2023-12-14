#include <cs50.h>
#include <stdio.h>

bool valid_triangle(double side[]);

int main(void)
{
    // Get length of each side
    const int s = 3;
    double side[s];
    for (int i = 0; i < s; i++)
    {
        side[i] = get_double("Side %i: ", i + 1);
    }

    // Call function to test if these lengths are capable of making a triangle
    bool validity = valid_triangle(side);
    printf("Can these value make a valid triangle?\n");
    if (!validity)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
}

bool valid_triangle(double side[])
{
    // Check for positive sides
    if (side[0] <= 0 || side[1] <= 0 || side[2] <= 0)
    {
        return false;
    }

    // Check if sum of two sides greater than third
    if ((side[0] + side[1]) <= side[2] || (side[1] + side[2]) <= side[0] || (side[2] + side[0]) <= side[1])
    {
        return false;
    }

    // If all good
    return true;
}
