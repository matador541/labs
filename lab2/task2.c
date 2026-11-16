#include <stdio.h>

int main() {
    int n, a, b;
    printf("Введите числа a и b: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;

    // Цикл из задания 2
    for (n = a; n % a != 0 || n % b != 0; n++) {
        // Ищет число, делящееся и на a, и на b
    }

    printf("Результат фрагмента: %d (Это НОК чисел %d и %d)\n", n, a, b);
    return 0;
}
