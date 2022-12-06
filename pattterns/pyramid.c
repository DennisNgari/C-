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
    
    int i,rows,j,k;

    printf("Enter the number of rows you want to print: ");
    scanf("%d", &rows);

    for(i=1; i <= rows; i++){
        for (j = 1; j <= (rows - i); j++){
            printf(" ");
        }
        for (k = 1; k <= (2 * i) - 1; k++){
            printf("*");
        }
        printf("\n");
    }

    return (0);
}