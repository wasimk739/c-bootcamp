#include <stdio.h>

int main()
{
    int n, sum = 0;
    int multiplicationTable;
    printf("enter the number\n");
    scanf("%d", &n);
    for (int i = 1; i<=10; i++){
        // printf("enter the number");
        multiplicationTable = n*i;
        printf("15 X %d is %d\n",i, multiplicationTable);
    }
    return 0;
}