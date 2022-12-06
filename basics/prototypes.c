#include <stdio.h>
#include "main.h"
/**
 * main - Find the maximum value between two numbers.
 *
 * Description: Function max finds the maximum value between two integers
 * a and b
 *
 * Return: Always 0 (Success)
 */


int main(void){
    char name[] = "Bro";
    int age = 20;

    hello(name, age);

    return (0);
}

void hello(char name[], int age){
    printf("\n Hello %s,", name);
    printf("\n You are %d years old.\n", age);

}