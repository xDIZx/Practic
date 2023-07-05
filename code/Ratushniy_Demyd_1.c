#include <stdio.h>

float eatCakeTime(float t1, float t2, float t3) {
    float totalTime = 1 / (1 / t1 + 1 / t2 + 1 / t3);
    return totalTime;
}

int main() {
    float t1, t2, t3;

    // Ввід значень t1, t2 і t3 з клавіатури
    printf("input t1: ");
    scanf("%f", &t1);
    printf("input t2: ");
    scanf("%f", &t2);
    printf("input t3: ");
    scanf("%f", &t3);

    // Виклик функції та виведення результату
    float totalTime = eatCakeTime(t1, t2, t3);
    printf("time: %.2f hours\n", totalTime);

    return 0;

}
