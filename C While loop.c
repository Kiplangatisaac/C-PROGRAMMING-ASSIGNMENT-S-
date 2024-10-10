#include <stdio.h>

int main() {
    int start, stop, step;
    
    printf("Enter the start value: ");
    scanf("%d", &start);
    printf("Enter the stop value: ");
    scanf("%d", &stop);
    printf("Enter the step value: ");
    scanf("%d", &step);

    // Display numbers from start to stop with the given step using while loop
    int current = start;
    while (current <= stop) {
        printf("%d\n", current);
        current += step; // Increment by step value
    }

    return 0;
}
