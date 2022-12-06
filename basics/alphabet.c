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
    int r;

    r = _isalpha('H');
    putchar(r + '0');
    r = _isalpha('o');
    putchar(r + '0');
    r = _isalpha(108);
    putchar(r + '0');
    r = _isalpha(';');
    putchar(r + '0');
    putchar('\n');
    return (0);
}

int _isalpha(int c){

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);

}
