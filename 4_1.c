#include <stdio.h>
int main(void) {
    const int sec_IN_min = 60;
    int total_sec;
    printf("Введите объем в секундах (сек) (для выхода введите <= 0):\n");
    while (scanf("%d", &total_sec) == 1 && total_sec > 0) {
        int min = total_sec / sec_IN_min;
        int sec = total_sec % sec_IN_min;
        printf("Результат: %d мин и %d сек\n\n", min, sec);
        printf("Введите следующее значение:\n");
    }
    return 0;
}