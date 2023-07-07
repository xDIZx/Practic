#include <stdio.h>
#include <math.h>

double calculateVectorLength(int x1, int y1, int x2, int y2) {
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;
    double length = sqrt(deltaX * deltaX + deltaY * deltaY);
    return length;
}

int main() {
    int x1, y1, x2, y2;
    printf("Enter the coordinates of the vector (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    double result = calculateVectorLength(x1, y1, x2, y2);
    printf("The length of the vector: %.6f\n", result);

    return 0;
}
