#include <stdio.h>
int main()
{
   int j,i,rows;
   printf("enter the rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
     for(j=1;j<=i;j++)
     {  
       printf("%d", i);
      }
     printf("\n");
    }
    return 0;
} 