#include "header.h"

bool mx_isdigit(int c) {
    if (c >= 48 && c <= 57)
        return c;
    return 0;
}
