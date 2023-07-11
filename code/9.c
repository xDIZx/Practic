#include <stdio.h>
#include <stdlib.h>

int calculateMinimumSteps(int x, int y) {
    int steps = 0;
    int diff = abs(y - x) - 1;

    if (diff <= 1)
        return diff;

    steps = 2;

    while (steps * (steps - 1) / 2 < diff)
        steps++;

    return steps;
}

int main() {
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    int result = calculateMinimumSteps(x, y);
    printf("Minimum number of steps: %d\n", result);

    printf("The sequence of steps: ");
    if (x < y) {
        for (int i = x + 1; i <= y; i++)
            printf("%d ", i);
    } else {
        for (int i = x - 1; i >= y; i--)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
