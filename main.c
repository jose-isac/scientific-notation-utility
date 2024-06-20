#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "scfc_notation.h"

int main(int argc, char *argv[]){
    
    if (argc != 2) {
        puts("Usage: scfnotation NUMBER");
        return EXIT_FAILURE;
    } 

    double number = atof(argv[1]);
    bool isValidNumber = number != 0;

    if (isValidNumber) {
        scfc_notation(number);
    } else {
        puts("Error: Invalid number");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

