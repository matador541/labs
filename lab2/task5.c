#include <stdio.h>

int main() {
    int s, n, a;
    printf("Введите число a: ");
    if (scanf("%d", &a) != 1) return 0;

    // Цикл из задания 5
    for (s = 0, n = 2; n < a; n++) {
        if (a % n == 0) s++;
    }

    printf("Результат фрагмента: ");
    if (s == 0) puts("1 (Число простое)");
    else puts("0 (Число составное)");
    return 0;
}
