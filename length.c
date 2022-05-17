#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main(int argc, char *argv[]){
    if (argc !=5) {
        fprintf(stderr, "%s: error : expecting 4 aruments\n", argv[0]);
        abort();
    }
    int x1 = atoi(argv[1]);
    int y1 = atoi(argv[2]);
    int x2 = atoi(argv[3]);
    int y2 = atoi(argv[4]);

    double length = lengthBetweenPoints (x1,y1,x2,y2);

    printf("Length between (%d, %d) and (%d, %d) : %f\n", x1, y1, x2, y2);
}