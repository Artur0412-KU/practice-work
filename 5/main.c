#include <stdio.h>

int main() {
    int n;
    printf("Print a length of sequence n: ");
    scanf("%d", &n);

    // Ініціалізація початкових значень
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 3;

    // Обчислення dp[i] для кожного i від 3 до n
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % 12345;
    }

    printf("Count of the finding sequences: %d\n", dp[n]);

    return 0;
}
