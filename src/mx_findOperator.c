#include "header.h"

bool mx_findOperator(char c) {
    if(c == '+'
        || c == '-'
        || c == '/'
        || c == '*') {
        return true;
    }
    return false;
}

