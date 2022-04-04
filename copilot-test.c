#include <stdio.h>
#include <stdlib.h>
//print hello world and calculate fibonacci series, printing each number
void main()
{
    printf("hello world\n");
    int fib = 1;
    int fib_prev = 1;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", fib);
        fib = fib_prev + fib;
        fib_prev = fib - fib_prev;
    }
    return;
}