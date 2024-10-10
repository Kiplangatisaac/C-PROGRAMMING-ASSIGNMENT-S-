#include <stdio.h>

int main() {
    int start, stop, step;

    printf("Enter the start value: ");
    scanf("%d",& start);
    printf("Enter the stop value: ");
    scanf("%d",& stop);
    printf("Enter the step value: ");
    scanf("%d",& step);

    // Display numbers from start to stop with the given step using for loop
    for (int current = start; current <= stop; current += step) {
        printf("%d\n", current);
    }

    return 0;
}
