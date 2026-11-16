#include <stdio.h>

int main() {
    int n, count = 1;
    printf("Введите размер квадрата N: ");
    if (scanf("%d", &n) != 1) return 0;

    // Вложенные циклы для построения сетки
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%-4d", count++);
        }
        printf("\n"); // Перенос строки после каждого ряда
    }
    return 0;
}
