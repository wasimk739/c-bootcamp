// #include<stdio.h>  
// int main(){  
// int number=50;    
// int *p;      
// p=&number;//stores the address of number variable    
// printf("Address of p variable is %x \n",p); // p contains the address of the number therefore printing p gives the address of number.     
// printf("Value of p variable is %d \n",*p); // As we know that * is used to dereference a pointer therefore if we print *p, we will get the value stored at the address contained by p.    
// return 0;  
// }    

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n=50;
    int *p;
    p=&n;
    printf("address of p variable %d\n", p);
    printf("value of p variable %d", *p);
    return EXIT_SUCCESS;
}