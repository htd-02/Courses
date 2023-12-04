#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Ask for credit card number
    long number = get_long("Credit Card nuber: ");

    // Determine which brand the card is from
    string brand;

    // American Express variables
    double amexLowOne = 3.4 * 1e14;
    double amexHighOne = 3.5 * 1e14;
    double amexLowTwo = 3.7 * 1e14;
    double amexHighTwo = 3.8 * 1e14;
    // MasterCard variables
    double mcLow = 5.1 * 1e15;
    double mcHigh = 5.6 * 1e15;
    // Visa variables
    double visaLowOne = 4 * 1e12;
    double visaHighOne = 5 * 1e12;
    double visaLowTwo = 4 * 1e15;
    double visaHighTwo = 5 * 1e15;
    if ((number >= (long) amexLowOne && number < (long) amexHighOne) ||
        (number >= (long) amexLowTwo && number < (long) amexHighTwo))
    {
        brand = "AMEX";
    }
    else if (number >= (long) mcLow && number < (long) mcHigh)
    {
        brand = "MASTERCARD";
    }
    else if ((number >= (long) visaLowOne && number < (long) visaHighOne) ||
             (number >= (long) visaLowTwo && number < (long) visaHighTwo))
    {
        brand = "VISA";
    }
    else
    {
        brand = "INVALID";
    }

    // Check Luhn's algorithm
    if (strcmp("INVALID", brand) != 0)
    {
        // Decompose the number into individual integers
        int counter = 1;
        int algoTest = 0;
        while (number)
        {
            int testValue = number % 10;

            // Check each individual numbers
            if (counter % 2 == 0)
            {
                // If (digit * 2) is higher than 9
                if (testValue * 2 > 9)
                {
                    algoTest += (testValue * 2) % 10;
                    algoTest += (testValue * 2 / 10) % 10;
                }
                else
                {
                    algoTest += testValue * 2;
                }
            }
            else
            {
                algoTest += testValue;
            }
            number /= 10;
            counter++;
        }

        // test algoTest
        if (algoTest % 10 != 0)
        {
            brand = "INVALID";
        }
    }

    // Print brand or INVALID
    printf("%s\n", brand);
}
