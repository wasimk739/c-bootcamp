// #include<stdio.h>  
// #include <string.h>    
// struct employee      
// {   int id;      
//     char name[50];      
// }e1;  //declaring e1 variable for structure    
// int main( )    
// {    
//    //store first employee information    
//    e1.id=101;    
//    strcpy(e1.name, "Sonoo Jaiswal");//copying string into char array    
//    //printing first employee information    
//    printf( "employee 1 id : %d\n", e1.id);    
//    printf( "employee 1 name : %s\n", e1.name);    
// return 0;  
// }    

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    int id;
    char name[10];
    float marks;
};

int main(void){
    struct student e1,e2;
    e1.id=1;
    strcpy(e1.name, "wasim");
    e1.marks=87;
    printf("stdudent id is %d\n", e1.id);
    printf("stdudent id is %f\n", e1.marks);
    printf("stdudent id is %s", e1.name);
    for (int i=1; i<3; i++){
        printf("stdudent id is %d%f%s\n", e1.id[i], e1.marks[i], e1.name[i]);
    //     printf("stdudent id is %f\n", e1.marks);
    //     printf("stdudent id is %s", e1.name);
    }

    return EXIT_SUCCESS;
}