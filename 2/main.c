#include <stdio.h>

// Функція для обчислення НСД двох чисел за алгоритмом Евкліда
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функція для обчислення НСК двох чисел
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Функція для обчислення НСК для масиву чисел
int lcm_of_array(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int main() {
    int n;
    printf("Print a count of numbers: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Print a numbers separated by a space: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = lcm_of_array(numbers, n);
    printf("least common multiple: %d\n", result);

    return 0;
}
