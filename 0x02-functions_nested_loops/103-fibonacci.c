#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void) {
    // initialize the first two terms of the Fibonacci sequence
    int prev = 1;
    int curr = 2;

    // initialize the sum of even-valued terms
    int even_sum = 0;

    // loop until the current term exceeds 4 million
    while (curr <= 4000000) {
        // check if the current term is even
        if (curr % 2 == 0) {
            even_sum += curr;
        }

        // calculate the next term of the Fibonacci sequence
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    // print the sum of even-valued terms
    printf("%d\n", even_sum);

    return (0);
}
