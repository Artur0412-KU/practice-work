#include <stdio.h>
#include <math.h>

int main() {
    int x1, x2, y1, y2;  // Змінні для зберігання даних про координати
    double length; // Змінна, яка зберігає довжину вектора

    printf("Print the coordinates (x1, x2) and (x2, y2):\n");
    scanf("%d %d", &x1, &y1, &x2, &y2);

    length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Length of vector: %.6f\n", length);

    return 0;
}