#include <stdio.h>

// Функция подсчета нулей с 3 по 13 бит включительно
int count_zeros_in_range(unsigned int a) {
    int count = 0;
    // Проходим циклом по битам от 3 до 13 включительно
    for (int i = 3; i <= 13; i++) {
        // Проверяем, равен ли i-й бит нулю
        if (((a >> i) & 1) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    unsigned int a;
    printf("Введите целое число a: ");
    if (scanf("%u", &a) != 1) return 0;

    int zeros = count_zeros_in_range(a);
    printf("Количество нулей в числе с 3 по 13 бит: %d\n", zeros);
    return 0;
}
