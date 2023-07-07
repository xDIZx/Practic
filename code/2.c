#include <stdio.h>

// Функція для знаходження найбільшого спільного дільника (НСД) двох чисел
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функція для знаходження НСК двох чисел
int findLCM(int a, int b) {
    int gcd = findGCD(a, b);
    return (a * b) / gcd;
}

// Функція для знаходження НСК ряду чисел
int findLCMOfArray(int arr[], int n) {
    int lcm = arr[0];
    for (int i = 1; i < n; i++) {
        lcm = findLCM(lcm, arr[i]);
    }
    return lcm;
}

int main() {
    int n;
    printf("input nubers p: ");
    scanf("%d", &n);

    int arr[20];
    printf("isnput %d numbers, separated by a space: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lcm = findLCMOfArray(arr, n);
    printf("Least common multiple: %d\n", lcm);

    return 0;
}
