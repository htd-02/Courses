#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    // For debugging variable values
    // printf("%i letters\n%i words\n%i sentences\n", count_letters(text), count_words(text), count_sentences(text));

    float L = (float) count_letters(text) / count_words(text) * 100;
    double S = (float) count_sentences(text) / count_words(text) * 100;
    double grade = 0.0588 * L - 0.296 * S - 15.8;
    // For debugging variable values
    // printf("L = %f\nS = %f\nGrade = %f\n", L, S, grade);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade < 16)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else
    {
        printf("Grade 16+\n");
    }
}

int count_letters(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        text[i] = toupper(text[i]);
        if (text[i] > 64 && text[i] < 91)
        {
            count++;
        }
    }
    return count;
}

int count_words(string text)
{
    int count = 1;
    if (strlen(text) == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < strlen(text); i++)
        {
            if (i != 0 && text[i] == 32 && text[i - 1] != 32 && i != strlen(text) - 1)
            {
                count++;
            }
        }
        return count;
    }
}

int count_sentences(string text)
{
    int count = 1;
    if (strlen(text) == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < strlen(text); i++)
        {
            if ((text[i] == 33 || text[i] == 46 || text[i] == 63) && text[i + 1] == 32 && i != 0 && i != strlen(text) - 1)
            {
                count++;
            }
        }
        return count;
    }
}
