#include <stdio.h>
int main(void) {
    int n;
    printf("Введите N: ");
    scanf("%d", &n);
    int a = 1; 
    int i = 0;   
    while (i < n) {
        printf("%d ", a);  
        a += 2;             
        i++;                
    }
    printf("\n");
    return 0;
}