#include "header.h"

char *mx_strdup(const char *str) {
    int len = mx_strlen(str);
    char *temp = mx_strnew(len);
    temp = mx_strcpy(temp, str);

    return temp;
}

