#include <stdio.h>

int main() {
    int n1, n2, i;
    printf("Введите два числа через пробел (n1 и n2): ");
    if (scanf("%d %d", &n1, &n2) != 2) return 0;

    // Цикл из задания 1
    for (i = n1; !(n1 % i == 0 && n2 % i == 0); i--) {
        // Цикл ищет общий делитель
    }

    printf("Результат фрагмента: %d (Это НОД чисел %d и %d)\n", i, n1, n2);
    return 0;
}
