#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct Birthday{        //Assume that a pointer is 64 bits
    char *firstname;  //offset 0, lenghth 8
    char *lastname;     //offset 8, length 8
    char *birthday;     //offset 16, length 8
    

    //total size :24
};

int main(void){
    fprintf(stderr, "offset of firstname:     %zu\n", offsetof(struct Birthday, firstname));
    fprintf(stderr, "offset of lastname:      %zu\n", offsetof(struct Birthday, lastname));
    fprintf(stderr, "offset of birthday:      %zu\n", offsetof(struct Birthday, birthday));
    fprintf(stderr, "offset of Birthday:      %zu\n", sizeof(struct Birthday));
}
