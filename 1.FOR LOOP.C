#include <stdio.h>

int main() {

    // A simple for loop that prints numbers from 1 to 5

    // Syntax:
    // for(initialization; condition; update)

    printf("Demonstrating a for loop:\n");

    for (int i = 1; i <= 5; i++) {   // start i = 1, run until i <= 5, increase i by 1 every loop
        printf("Iteration %d: i = %d\n", i, i);
    }

    printf("Loop finished!\n");

    return 0;
}
