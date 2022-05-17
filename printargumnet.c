// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[]){
//     int i=0;
//     while (i < argc){
//         puts(argv[i]);
//         i++;
//     }
//     return EXIT_SUCCESS;
// }

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    argv[0] = "hi";
    argv[1] = "hello";
    argv[2] = "how";
    int i=0;
    while (i < argc){
        puts(argv[i]);
        i++;
    }
    return EXIT_SUCCESS;
}