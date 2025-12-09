#include <stdio.h>

int main() {

    // A simple do-while loop that prints numbers from 1 to 5

    int i = 1;  // initialization

    printf("Demonstrating a do-while loop:\n");

    do {
        printf("Iteration %d: i = %d\n", i, i);
        i++;   // update step
    } while (i <= 5);   // condition checked after the loop body

    printf("Loop finished!\n");

    return 0;
}
