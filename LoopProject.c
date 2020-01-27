#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? Type Y or N\n"); //Asking the Question//
         
    if (c == 'Y' || c == 'y')
    {
        printf("Good for you, wanna cookie?\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Well that sucks, don't it?\n");
    }    
    else
    {
        printf("Gee aren't you edgy? %c isn't Y or N\n", c);
    }
}
