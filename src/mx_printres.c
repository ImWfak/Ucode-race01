#include "header.h"

void mx_printres(char *arr) {
    int length=mx_strlen(arr);
    int operantA;
    int operandC;
    int result;
    char operator;
    for(int i = 0; i < length; i++) {
        if(i==0){
            operantA=mx_atoi(arr);
        }
        if(mx_findOperator(arr[i])){
            operator = arr[i];
            i++;
            i++;
            operandC=mx_atoi(&arr[i]);
        }
        if(arr[i]=='='){
            i++;
            i++;
            result=mx_atoi(&arr[i]);
        }
    }
    mx_printint(operantA);
    mx_printchar(' ');
    mx_printchar(operator);
    mx_printchar(' ');
    mx_printint(operandC);
    mx_printstr(" = ");
    mx_printint(result);
    mx_printchar('\n');
}

