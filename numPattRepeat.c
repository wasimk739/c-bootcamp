#include <stdio.h>
int main()
{
   int j,i,rows;
   int k = 1;
   printf("enter the rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
     for(j = 1; j <= i; j++)
     {  
       printf("%d", k++);
      }
     printf("\n");
    }
    return 0;
} 