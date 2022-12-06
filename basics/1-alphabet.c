#include <stdio.h>
#include "main.h"
/**
 * main - Find the maximum value between two numbers.
 *
 * Description: function that prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void){
    print_alphabet();
}

void print_alphabet(void){
    char c = 'a';

    while (c <= 'z'){
        putchar(c);
        c++;
    }
    putchar(10);

}


