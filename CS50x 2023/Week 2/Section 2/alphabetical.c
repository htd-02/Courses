#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int b;
    int length;
    string word;
    do
    {
        // Get Word
        word = get_string("Lowercase single word please: ");

        // Make sure word is a single word in lowercase
        length = strlen(word);
        b = 1;
        int i = 0;
        while (b == 1 && i < length)
        {
            if (word[i] < 97 || word[i] > 122)
            {
                b = 0;
            }
            i++;
        }
    }
    while (b == 0);

    printf("Are the characters in alphabetical order?\n");

    // Check if the characters are in alphabetical order
    for (int i = 0; i < length - 1; i++)
    {
        if (word[i] > word[i + 1])
        {
            // Print No and exit
            printf("No\n");
            return 0;
        }
    }

    // Print Yes and exit
    printf("Yes\n");
    return 0;
}
