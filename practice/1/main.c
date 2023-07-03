#include <stdio.h>

int main() {
    int t1, t2, t3; // змінні t1, t2 і t3, які зберігають введені значення часу для кожного гостя
    printf("Print three values: "); 
    scanf("%d %d %d", &t1, &t2, &t3);

    float total_time = (t1 + t2 + t3) / 3.0; //  загальний час, який потрібен гостям, щоб з’їсти один пиріг
    printf("Guests can eat the cake in %.2f hours \n", total_time);

    return 0;
}
