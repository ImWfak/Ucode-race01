#include "header.h"

void mx_findResult(char *arr) {
    int exsist = 0;
    for(int i = 0; i < 10; i++) {
        int j = 0;
        while(arr[j] != '?') {
            if(arr[j] == '\0') {
                break;
            }
            j++;
        }
        if(arr[j] == '?') {
            char *temp = mx_strdup(arr);
            temp[j] = i + '0';
            mx_findResult(temp);
            free(temp); 
        }
        else if(arr[j] == '\0') {
            if(mx_is_true(arr)) {
                exsist = 1;   
            }
        }
    }
    if(exsist == 1){
        mx_printres(arr);
    }
}

