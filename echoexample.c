#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    size_t length= 1;
    for (int i=1; i<argc; i++)
    length += strlen(argv[i]);
    char *buffer = malloc(length);
    if (buffer == NULL) abort();
    memset(buffer, 0, length);
    free(buffer);
    return EXIT_SUCCESS;
}
