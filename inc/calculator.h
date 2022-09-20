#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "header.h"

int mx_addition(int operandA, int operandC);
int mx_subtstraction(int operandA, int operandC);
int mx_multiply(int operandA, int operandC);
int mx_divide(int operandA, int operandC);

typedef struct s_operation
{
	int (*funk)(int operandA, int operandC);
}					t_operation;

enum e_operation
{
	SUBBSTRACTION,
	ADDITION,
	MULTIPLY,
	DIVIDE,
};

enum e_error
{
	INCORRECT_OPERAND,
	INCORRECT_OPERATION,
	DIV_BY_ZERO
};

#endif
