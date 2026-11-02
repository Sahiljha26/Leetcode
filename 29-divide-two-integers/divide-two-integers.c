#include <limits.h>

int divide(int dividend, int divisor) {

    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    long long a = dividend;
    long long b = divisor;

    int sign = 1;

    if (a < 0) {
        sign = -sign;
        a = -a;
    }

    if (b < 0) {
        sign = -sign;
        b = -b;
    }

    long long result = 0;

    while (a >= b) {

        long long temp = b;
        long long multiple = 1;

        while (a >= (temp << 1)) {
            temp = temp << 1;
            multiple = multiple << 1;
        }

        a = a - temp;
        result = result + multiple;
    }

    if (sign < 0) {
        return -result;
    }

    return result;
}