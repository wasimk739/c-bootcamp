#include <stdio.h>

int main()
{
    int n, sum = 0;
    int cube;
    printf("enter the number\n");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        // printf("enter the number");
        cube = i*i*i;
        printf("Cube of %d is %d\n", i, cube);
    }
    return 0;
}