#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int calculateIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distance > r1 + r2) {
        return 0; // Немає точок перетину
    } else if (distance < abs(r1 - r2)) {
        return 0; // Одне коло міститься всередині іншого, немає точок перетину
    } else if (distance == 0 && r1 == r2) {
        return -1; // Безкінечно багато точок перетину, кола ідентичні
    } else if (distance == r1 + r2 || distance == abs(r1 - r2)) {
        return 1; // Одна точка перетину
    } else {
        return 2; // Дві точки перетину
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates and radii of the circles (x1 y1 r1 x2 y2 r2): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int result = calculateIntersectionPoints(x1, y1, r1, x2, y2, r2);
    printf("The number of intersection points: %d\n", result);

    return 0;
}
