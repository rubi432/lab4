#include <stdio.h>
int main(void) {
    int n;
    printf("Введите N: ");
    scanf("%d", &n);
    double s = 0.0;  
    int i = 1;        
    while (i <= n) {
        s += 1.0 / i;  
        i++;           
    }
    printf("S = %.6f\n", s);
    return 0;
}
