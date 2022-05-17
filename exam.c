// #include<stdio.h>
// #include<stdlib.h>

// int main(void){
//     int arr[10]={1,2,3,4};
//     int arr2[5]={3,4,5,6};

//     for(int i=0; i<=3;i++)
//     {
//         for(int j=0; j<=3; j++){
//             int c=arr[i]+arr2[j];
//             // printf("%d%d\n", arr[i], arr2[j]);
//             printf("%d", c);
//         }
//     }

// }

// swap 2 numbers using pointer

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int a=3;
    int a =3;
    int b =5;
    printf("%d%d", a,b);
    // int ptr;
    int *p;

    *p = a;
    a = b;
    b = *p;

    printf("%d%d",a,b);
    return EXIT_SUCCESS;
}
