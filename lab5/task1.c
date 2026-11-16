#include <stdio.h>

int main() {
    // 1-2. Объявляем и заполняем массив из 12 чисел
    int a[12] = {-5, 4, 12, 18, 22, 25, 23, 20, 15, 9, 2, -4};
    int sum = 0;
    int max_val = a[0], min_val = a[0];
    int max_idx = 0, min_idx = 0;

    // 3. Вывод в столбик и сбор статистики
    for (int i = 0; i < 12; i++) {
        printf("a[%d] = %d\n", i, a[i]);
        sum += a[i];

        if (a[i] > max_val) { max_val = a[i]; max_idx = i; }
        if (a[i] < min_val) { min_val = a[i]; min_idx = i; }
    }

    // 4. Расчет среднего и вывод итогов
    double avg = (double)sum / 12.0;
    printf("\nСумма всех элементов: %d\n", sum);
    printf("Среднее арифметическое: %.2f\n", avg);
    printf("Максимальный элемент: a[%d] = %d\n", max_idx, max_val);
    printf("Минимальный элемент: a[%d] = %d\n", min_idx, min_val);

    return 0;
}
