#include "header.h"

int main(int argc, char* argv[]) {
	if(argc != 5) {
		mx_printerr("usage: ./Part_of_the_matrix [operand1] [operation] [operand2] [result]\n");
        return -1;
	}
	char sign = mx_findSign(argv[2]);
	if( sign == '?') {
		char *addition = mx_findCharResult(argv[1],argv[3],argv[4], '+');
		char *subtraction = mx_findCharResult(argv[1],argv[3],argv[4], '-');
		char *multiply = mx_findCharResult(argv[1],argv[3],argv[4], '*');
		char *divide = mx_findCharResult(argv[1],argv[3],argv[4], '/');
		mx_findResult(addition);
		mx_findResult(subtraction);
		mx_findResult(multiply);
		mx_findResult(divide);

	}
	else if(mx_findOperator(sign)) {
		char *str = mx_findCharResult(argv[1],argv[3],argv[4], sign);
		mx_findResult(str);
	} 
	else {

	}
	return 0;
}

