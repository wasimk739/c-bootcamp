#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    // srand(int) time(NULL));
    srand(time(NULL));
    // int a=rand() % 10;
    int number=(rand() % 10)+1;
    printf("%ld\n",number);

    // printf("size of time_t :   %zu\n", sizeof(time_t));
    // printf("size of unsigned int :   %zu\n", sizeof(unsigned int));

    puts("I have thought of a number betn 1 to 10");
    puts("can you guess it?");
    puts("your input:");

    int guess;
    scanf("%d\n", &guess);

    printf("your guess: %d\n", guess);
    printf("your guess: %d\n", number);

    if(guess == number){
        puts("you guessed correctly.\n Maybe you are not so dumb");
    }
    else{
        puts("not correct");
    };
    return EXIT_SUCCESS;
}