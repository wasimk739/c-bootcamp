#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

//create a byte histogram
//calculate the frequency of each of the bytes in a file



int main(void) {
    int histogram[256];//hist[o] - hist[255]

    for (int c; (c=getchar()) !=EOF;){
        assert(c>=0 && c<=255);
        //count here
        histogram[c]++;//hist[c]+=1;
    }
    for (int i=0;i <=255; i++)
    printf("%02x: %d\n", i, histogram[i]);

    return EXIT_SUCCESS;
}