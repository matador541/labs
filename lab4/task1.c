#include <stdio.h>

// Функция циклического сдвига влево на k позиций
unsigned int cyclic_shift_left(unsigned int a, int k) {
    int bits = sizeof(a) * 8; // Определяем разрядность (обычно 32 бита)
    k = k % bits;             // Защита от сдвигов больше 32
    return (a << k) | (a >> (bits - k));
}

int main() {
    unsigned int a;
    int k;
    printf("Введите неотрицательное число a и сдвиг k: ");
    if (scanf("%u %d", &a, &k) != 2) return 0;

    unsigned int result = cyclic_shift_left(a, k);
    printf("Результат после циклического сдвига влево: %u\n", result);
    return 0;
}
