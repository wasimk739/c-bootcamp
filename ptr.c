// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     // int a=3;
//     int a=3;
//     int b=5;
//     // int ptr;
//     int *p;

//     *p = &a;
//      a = b;
//      b = *p;

//     printf("%d%d",a,b);
//     return EXIT_SUCCESS;
// }

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[10]={1,2,3};
    int b[10]={2,3,4};
    int c[10];
    for (int i = 0; i < 3; i++)
        c[i] = a[i] + b[i];
    printf("Sum of two array elements are:\n");
    for (int i = 0; i < 3; i++)
        printf("%d\n", c[i]);
        return EXIT_SUCCESS;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x = 4;
    int y = 5;
    int *a, *b, temp;
    printf("%d,%d\n", x, y);
    a = &x;
    b = &y;
    temp = *b;
    *b = *a;
    *a = temp;
    printf("swap of two variables = %d,%d\n", x, y);
    return EXIT_SUCCESS;
}
