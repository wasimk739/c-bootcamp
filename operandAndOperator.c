#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    if (argc !=4){
        fprintf(stderr, "%s : error: Wrong number of arguments. Expecting 3 arguments.\n, argv[0]");
        exit(EXIT_FAILURE);
    }

    int operand1, operand2;
    char operator;

    operand1 = atoi(argv[1]);
    operator = argv[2][0];
    operand2 = atoi(argv[3]);

    int result;

    switch(operator){
    case '+':
        result = operand1 + operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '/':
        result = operand1 / operand2;
        break;
    case '%':
        result = operand1 % operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    default:
    fprintf(stderr, "%s: error : unsupported operator %s.\n", argv[0], argv[2]);
    return EXIT_SUCCESS;
}