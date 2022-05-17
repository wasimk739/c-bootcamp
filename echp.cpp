#include <stdio.h>
#include <stdlib.h>


//./echo:
// argc =1
//  argv[0]= "./echo"
// argv[1] = null

int main(int argc, char *argv[]){
    puts(argv[1]);
    puts("");
    return EXIT_SUCCESS;

}
