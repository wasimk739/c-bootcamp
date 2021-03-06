#include<stdio.h>
#include<stdlib.h>
  
// Taking argument as command line
int main(int argc, char *argv[]) 
{
    int a, b, c;
    if (argc == 0) 
    {
        printf("enter empty string only ");
        return 0;
    }
    if (argc == 1) 
    {
        puts("enter the argument only ");
        return 0;
    }
    if (argc >= 2) 
    {
        puts("enter empty string only ");
        return 0;
    }
    a = atoi(argv[1]); 
    b = atoi(argv[2]);
    c = atoi(argv[3]);
  
    // Checking if all the numbers are positive of not
    if (a < 0 || b < 0 || c < 0) 
    {
        printf("enter only positive values in arguments !!");
        return 1;
    }
  
    // Checking if all the numbers are different or not
    if (!(a != b && b != c && a != c)) 
    {
        printf("please enter three different value ");
        return 1;
    }
    else
    {
        // Checking condition for "a" to be largest
        if (a > b && a > c)             
            printf("%d is largest", a);
  
        // Checking condition for "b" to be largest    
        else if (b > c && b > a) 
            printf ("%d is largest", b);
  
        // Checking condition for "c" to be largest..
        else if (c > a && c > b) 
            printf("%d is largest ",c);
    }
    return 0;
}