#include<stdio.h>
#include<string.h>

struct student{
    char name[10];
    int id;
};

int main(){
    struct student w,t;
    w.id=10;
    strcpy(w.name, "wasim");
    printf("%s\n", w.name);
    printf("%d", w.id);
}

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