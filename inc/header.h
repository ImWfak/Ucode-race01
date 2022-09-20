#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "calculator.h"

int mx_intlen(int n);
int mx_lengh(char *str);
int mx_atoi(const char *str);
int mx_strlen(const char *s);
int mx_findQuestions(char *str);

bool mx_isdia(char c);
bool mx_isdigit(int c);
bool mx_isspace(char c);
bool mx_is_true(char *str);
bool mx_findOperator(char c);

void mx_printres(char *arr);
void mx_printint(int n);
void mx_printchar(char c);
void mx_findResult(char *arr);
void mx_printerr(const char *s);
void mx_printstr(const char *s);

char mx_findSign(char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char* src);
char *mx_findCharResult(char *operandA, char *operandC, char *result, char operator);

#endif
