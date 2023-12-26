#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool linear(string strings[], string s);

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    string s = get_string("String: ");

    // Linear search
    bool result = linear(strings, s);
    if (result == true)
    {
        printf("Found\n");
        return 0;
    }
    else
    {
        printf("Not found\n");
        return 1;
    }

}

// Linear search
bool linear(string strings[], string s)
{
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            return true;
        }

    }
    return false;
}
