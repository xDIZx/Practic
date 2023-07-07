#include <stdio.h>

// Функція для знаходження кількості рівних дільників числа n
int countEqualDivisors(int n) {
    int count = 0;

    for (int m = 1; m <= n; m++) {
        if (n % m == n / m) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    printf("Enter a natural number n: ");
    scanf("%d", &n);

    int count = countEqualDivisors(n);
    printf("The number of equal divisors of %d: %d\n", n, count);

    return 0;
}
