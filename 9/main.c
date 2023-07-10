#include <stdio.h>

int minSteps(int x, int y) {
    if (x == y) {
        return 0;  // Вже знаходимося на бажаній позиції, не потрібні кроки.
    } else if (y - x == 1 || y - x == -1) {
        return 1;  // Нам потрібен лише один крок, щоб перейти від x до y.
    } else if (y - x == 2 || y - x == -2) {
        return 2;  // Нам потрібно два кроки, щоб перейти від x до y.
    } else if (y > x) {
        return 1 + minSteps(x, y - x);  // Зменшуємо y на x і рекурсивно викликаємо функцію.
    } else {
        return 1 + minSteps(x - y, y);  // Збільшуємо y на x і рекурсивно викликаємо функцію.
    }
}
int main() {
    int x, y;  
    printf("Print a value of x: ");
    scanf("%d", &x);
    printf("Print a value of y: ");
    scanf("%d", &y);

    int steps = minSteps(x, y);
    printf("Minimal count of steps for transition from %d to %d: %d\n", x, y, steps);
    return 0;
}