#include <stdio.h>

int main() {
    int n, a;
    printf("Введите число a: ");
    if (scanf("%d", &a) != 1) return 0;

    // Цикл из задания 3
    for (n = 2; n < a; n++) {
        if (a % n == 0) break;
    }
    
    printf("Результат фрагмента: ");
    if (n == a) puts("1 (Число простое)");
    else puts("0 (Число составное)");
    return 0;
}
