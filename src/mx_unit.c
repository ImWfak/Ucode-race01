#include "header.h"

char *mx_findCharResult(char *operandA, char *operandC, char *result, char operator) {
    char *charResult = mx_strnew(mx_strlen(operandA) + mx_strlen(operandC) + mx_strlen(result) + 8);

    mx_strcpy(charResult, operandA);

    charResult[mx_strlen(operandA)] = ' ';
    charResult[mx_strlen(operandA) + 1] = operator;
    charResult[mx_strlen(operandA) + 2] = ' ';
    
    mx_strcpy(&charResult[mx_strlen(operandA) + 3], operandC);
    mx_strcpy(&charResult[mx_strlen(operandA) + 3 + mx_strlen(operandC)], " = ");
    mx_strcpy(&charResult[mx_strlen(operandA) + 6 + mx_strlen(operandC)], result);

    return charResult;
}

