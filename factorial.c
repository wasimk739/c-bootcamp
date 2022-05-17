#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

//the result in case of an integer overflow is undefined 
// int factorial(int n) {
//     int factorial = 1;
//     for (int i=1; i<=n; i++)
//     factorial = factorial*i;
//     return 1;

int factorial(int n) {
    if (n<0)
    return 0;
    if (n==0)
    return 1;
    return n*factorial(n-1);
}

int main(void){
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(100) == 2);
    return EXIT_SUCCESS;
}