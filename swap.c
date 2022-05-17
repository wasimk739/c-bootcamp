// #include <stdio.h>

// void swap(int n1, int n2){
//     int temp;
//     temp=n1;
//     n1=n2;
//     n2=temp;

// }

// int main(void) {
//     int number1 = 100;
//     int number2 = 200;
//     printf("number1: %d, number2 : %d\n", number1, number2);
//     swap(number1, number2);
//     printf("number1: %d, number2 : %d\n", number1, number2);
// }

// above program getting output 100 200 
// 100 200


// #include <stdio.h>

// void swap(int *n1, int *n2){
//     int temp;
//     temp=*n1;
//     *n1=*n2;
//     *n2=temp;

// }

// int main(void) {
//     int number1 = 100;
//     int number2 = 200;
//     printf("number1: %d, number2 : %d\n", number1, number2);
//     swap(&number1, &number2);
//     printf("number1: %d, number2 : %d\n", number1, number2);
// }

// above program will give the out 100 200
// 200 100

#include <stdio.h>

void swap(int *n1, int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;

}

int main(void) {
    int number1 = 100;
    int number2 = 200;
    int *p1 = &number1;
    int *p2 = &number2;
    printf("number1: %d, number2 : %d\n", number1, number2);
    swap(p1, p2);
    printf("number1: %d, number2 : %d\n", number1, number2);
}