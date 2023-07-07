#include <stdio.h>

// Функція для знаходження кількості чисел із розрядами
int countNumbers(int r) {
    if (r <= 0)
        return 0;

    int count = 1; // Початково маємо одне число

    // Генеруємо розряди чисел замінюючи 3 однакові цифри поруч на 5 та 9
    int prevDigit = 0;
    int prevPrevDigit = 0;
    for (int i = 0; i < r; i++) {
        int digit = 0;
        if (prevDigit != 5) // Якщо попередня цифра не 5, можна використовувати 5
            digit += 1;
        if (prevDigit != 9) // Якщо попередня цифра не 9, можна використовувати 9
            digit += 1;
        if (prevPrevDigit != 5 && prevDigit != 5) // Якщо дві попередні цифри не 5, можна використовувати 5
            digit += 1;
        if (prevPrevDigit != 9 && prevDigit != 9) // Якщо дві попередні цифри не 9, можна використовувати 9
            digit += 1;

        count *= digit;

        prevPrevDigit = prevDigit;
        prevDigit = digit;
    }

    return count;
}

int main() {
    int r;
    printf("Enter the number of digits r: ");
    scanf("%d", &r);

    int count = countNumbers(r);
    printf("The number of numbers with %d digits: %d\n", r, count);

    return 0;
}
