#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */


int main(void){

    int i,j;

    i = 65;
    j = 97;

    while(i < 91){
        putchar(i);
        i++;
    }

    while(j < 123){
        putchar(j);
        j++;
    }

    putchar(10);

    return (0);
}