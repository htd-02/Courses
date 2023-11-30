#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name? ");
    int age = get_int("How old are you? ");
    string phone = get_string("What is your phone number? ");

    printf("Your name is %s\nYou are %i years old\nYour phone number is %s\n", name, age, phone);
}
