#include <stdio.h>
double k_to_c(double k) {
    const double OFFSET = 273.15;
    return k - OFFSET;
}
int main(void) {
    double value;
    printf("Введите температуру в Кельвинах:\n");
    while (scanf("%lf", &value) == 1) {
        printf("%.2f K = %.2f C\n", value, k_to_c(value));
    }
    return 0;
}

