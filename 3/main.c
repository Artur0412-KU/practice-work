#include <stdio.h>
#include <math.h>

int main() {
    int p;
    printf("Print count of discharges (p ≤ 30): ");
    scanf("%d", &p);

    // Обчислення кількості чисел
    int total_numbers = pow(2, p) - (p - 2);

    printf("Count of numbers from %d discharges: %d\n", p, total_numbers);

    return 0;
}