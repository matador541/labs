#include <stdio.h>

int main() {
    int n;
    printf("Введите высоту фигуры N: ");
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        // 1. Печатаем отступы (пробелы) для выравнивания по центру
        for (int j = 0; j < (n - i - 1) * 2; j++) {
            printf(" ");
        }

        // 2. Печатаем буквы в убывающем порядке от 'A'+i до 'A'
        for (int j = i; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }

        // 3. Печатаем буквы в возрастающем порядке от 'B' до 'A'+i
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }
    return 0;
}
