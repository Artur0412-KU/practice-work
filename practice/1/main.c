#include <stdio.h>

int main() {
    int t1, t2, t3;  // змінні t1, t2 і t3, які зберігають введені значення часу для кожного гостя
    double total_time;  //  загальний час, який потрібен гостям, щоб з’їсти один пиріг

    // Зчитуємо вхідні дані
    printf("Print the time of first guest: ");
    scanf("%d", &t1);
    printf("Print the time of second guest: ");
    scanf("%d", &t2);
    printf("Print the time of third guest: ");
    scanf("%d", &t3);

    // Обчислюю загальний час
    total_time = t1 + t2 + t3;

    //Обчислюю час в годинах, поділивши загальний час на 3
    double time_in_hours = total_time / 3.0;

    printf("Guests can eat the cake in %.2f hours \n", time_in_hours);

    return 0;


}