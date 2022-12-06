#include <stdio.h>
/**
 * main - Create a pattern program
 *
 * Description: A nested function that creates a pattern of five stars
 * six times
 *
 * Return: Always 0 (Success)
 */

int main(void){
    int i;
    int j;
    for(i=1; i <= 6; i++){
        for (j = 1; j <= 5; j++){
            printf("*");
        }
        printf("\n");
    }

    return (0);
}