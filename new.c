#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[10];
    int id;

}e1,e2;

int main(){
    e1.name="wasim";
    e1.id=20;
    printf("%s", e1.name);
    printf("%d", e1.id);

}
// union student{
//     char name[10];
//     int id;

// };


