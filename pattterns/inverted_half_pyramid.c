#include <stdio.h>
/**
 * main - Create a pattern program
 *
 * Description: A nested function that creates an inverted half pyramid pattern
 *
 * Return: Always 0 (Success)
 */

int main(void){
    
    int i,j,rows;

    printf("Enter the number of rows you want to print: ");
    scanf("%d", &rows);

    for(i=rows; i > 0; i--){
        for(j=i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }

    return (0);
}