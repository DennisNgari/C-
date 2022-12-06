#include <stdio.h>
#include "main.h"

/**
 * main - Working with pointers 
 *
 * Description: A nested function that creates half a pyramid
 *
 * Return: Always 0 (Success)
 */

int main(){
    int x = 10, y = 20;

    //Accessing values using pointers.
    printf("Accessing values using pointers.\n");
    accessing_values(x, y);
    printf("\n");

    // Changing the values of pointers
    printf("Changing the values of pointers\n");
    changing_value_of_pointer(x,y);
    printf("\n");


    //Pointer to pointer
    printf("Pointer to pointer\n");
    pointer_to_pointer(x,y);
    printf("\n");


    //Function pointers
    printf("Function pointers\n");
    void(*fun_ptr)(int) = &fun;
    (*fun_ptr)(10);
    printf("\n");

    return 0;

}

// funct: 1. Accessing the values using pointers
void accessing_values(int x, int y){
    int *px, *py;
    px = &x;
    py = &y;

    //Accessing the value of x and y
    printf("Declared value of x is:  %d, Value of x accessed via a pointer is %d, Address of x: %p\n", x,*px, px);
    printf("Declared value of y is:  %d, Value of y accessed via a pointer is %d, Address of y: %p\n", y,*py, py);
}

// Funct: 2. Changing the value of a pointer
void changing_value_of_pointer(int x, int y){
    int *px, *py;
    px = &x;
    py = &y;

    //Changing the value of a pointer.
    *py = *px;
    printf("value of y = %d, Address of y: %p\n",*py, py);
}

// Funct: 3. Pointer to pointer
void pointer_to_pointer(int x, int y){
    int *px, *py;
    px = &x;
    py = &y;

    //Pointer to a pointer
    int ** dp = &px;
    printf("Address of x is: %p, value of x = %d\n",dp, **dp);

}

// Funct: 4. Function pointers
void fun(int a){
    printf("The value of a is: %d\n", a);
}