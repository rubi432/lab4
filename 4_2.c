#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t a, b;
    printf("Введите a и b: ");
    scanf("%hu %hu", &a, &b);
    float result = (float)a * b / 2.0f;
    printf("Результат: %.6f\n", result);
    printf("sizeof(uint16_t) = %llu байт\n",(unsigned long long)sizeof(uint16_t));
    printf("sizeof(float)    = %llu байт\n",(unsigned long long)sizeof(float));
    return 0;
}