#include <stdio.h>

int main() {
    int n;
    printf("Print a natural number n: ");
    scanf("%d", &n);

    int count = 0;
    for (int m = 1; m <= n; m++) {
        if (n % m == n / m) {
            count++;
        }
    }

    printf("Count of equal divi %d: %d\n", n, count);

    return 0;
}