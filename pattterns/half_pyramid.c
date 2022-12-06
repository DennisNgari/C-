#include <stdio.h>
/**
 * main - Create a pattern program
 *
 * Description: A nested function that creates half a pyramid
 *
 * Return: Always 0 (Success)
 */

int main(void){
    
    int i,j,rows;

    printf("Enter the number of rows you want to print: ");
    scanf("%d", &rows);

    for(i=1; i <= rows; i++){
        for(j=1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return (0);
}