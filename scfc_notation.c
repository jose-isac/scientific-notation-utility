#include <stdio.h>
#include <stdbool.h>
#include "scfc_notation.h"

bool is_between_zero_and_one(double number){
    return (number > 0) && (number < 1);    
}

bool is_not_between_one_and_ten(double number){
    return !(number > 1 && number < 10);
}

void scfc_notation(double number){
    double divisor = 10.0;
    int exponent = 0;

    if (is_between_zero_and_one(number)) {
        while (is_not_between_one_and_ten(number)) {
            number *= divisor;
            exponent++;
        }
        printf("%f * 10^-%i\n", number, exponent);
    } else {
        while (is_not_between_one_and_ten(number)){
            number /= divisor;
            exponent++;
        }
        printf("%f * 10^%i\n", number, exponent);
    }
}
