#include "header.h"

bool mx_is_true(char *str) {
    int length=mx_strlen(str);
    int operandA;
    int operandC;
    int result;
    char operator;
    for(int i = 0; i < length; i++){
        if(i==0){
            operandA=mx_atoi(str);
        }
        if(mx_findOperator(str[i])){
            operator=str[i];
            i+=2;
            operandC=mx_atoi(&str[i]);
        }
        if(str[i]=='='){
            i+=2;
            result=mx_atoi(&str[i]);
        }
    }
    if(operator =='+') {
        if(operandA + operandC == result){
            return true;
        }
    }else if(operator =='-') {
        if(operandA - operandC == result){
           return true;
        }
    }else if(operator =='/') {
        if(operandA / operandC == result){
            return true;
        }
    }else if(operator =='*') {
        if(operandA * operandC == result){
            return true;
        }
    }
    return false;
}

