//    1 
//   2 3 
//  4 5 6 
// 7 8 9 10 

#include <stdio.h>
int main()
{
   int j,i,rows;
   int k = 1;
   printf("enter the rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   { 
     printf(" ");
     for(j = 1; j <= i; j++)
     {  
       printf(" ");
       printf("%d", k++);
      }
     printf("\n");
    }
    return 0;
} 