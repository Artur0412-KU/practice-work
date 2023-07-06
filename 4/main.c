#include <stdio.h>

int main() {
    int n;
    printf("Print a natural number n: ");
    scanf("%d", &n);

    int count = 0;
    for (int m = 1; m <= n; m++) {
        // Перевірка, чи n % m дорівнює n / m
        if (n % m == n / m) {
            count++; // Якщо умова виконується, збільшуємо лічильник
        }
    }

    printf("Count an equal divisions of number %d: %d\n", n, count);

    return 0;
}
