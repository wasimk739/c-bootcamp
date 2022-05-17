// #include<stdio.h>
  
// enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
  
// int main()
// {
//     enum week day;
//     day = Wed;
//     printf("%d",day);
//     return 0;
// } 

#include<stdio.h>

enum week{mon, tue, wed, thur, fri, sat, sun};

int main(){
    enum week day;
    day=wed;
    printf("%d", day);
    return 0;
}