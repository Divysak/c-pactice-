#include <stdio.h>

int main() {

    // A simple while loop that prints numbers from 1 to 5

    int i = 1;   // initialization before the loop

    printf("Demonstrating a while loop:\n");

    while (i <= 5) {   // condition: loop runs as long as i <= 5
        printf("Iteration %d: i = %d\n", i, i);
        i++;   // update: increasing i to avoid infinite loop
    }

    printf("Loop finished!\n");

    return 0;
}
