#include <stdio.h>


/**
 * main - Find the maximum value between two numbers.
 *
 * Description: Function max finds the maximum value between two integers
 * a and b
 *
 * Return: Always 0 (Success)
 */

int max( int num_1, int num_2){
    int result = 0;

    if ( num_1 > num_2)
        {
            result = num_1;
        }
    else {
        result = num_2;
    }
    
    return result;
}

int main(void){
    int a = 5;
    int b = 10;
    int ret;

    ret = max(a,b);
    printf("The maximum number is: %d\n", ret);

    return (0);
}