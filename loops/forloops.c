#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j;


    for (i=65; i < 91; i++)
    {
        putchar(i);
    }
    printf("\n");

    for (j=97; j < 123; j++)
    {
        putchar(j);
    }
    printf("\n");
    
    return (0);
}