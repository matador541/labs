#include <stdio.h>
#include <stdlib.h>

int main() {
    int rssi[12] = {-60, -59, -61, -58, -70, -74, -68, -57, -58, -62, -75, -71};
    int active[12] = {0}; // Массив флагов активности: 1 - движение, 0 - покой

    // Вычисляем разности соседних замеров и размечаем интервалы активности
    for (int i = 1; i < 12; i++) {
        if (abs(rssi[i] - rssi[i-1]) > 5) {
            active[i] = 1;
        }
    }

    printf("Анализ интервалов активности:\n");
    int in_interval = 0, start_idx = 0, intervals_count = 0, total_duration = 0;
    int max_len = 0, max_start = 0, max_end = 0;

    for (int i = 0; i <= 12; i++) {
        // Условие вхождения или продолжения интервала
        if (i < 12 && active[i] == 1) {
            if (!in_interval) {
                start_idx = i - 1; // Скачок начался с предыдущей секунды
                in_interval = 1;
            }
        } else {
            // Если интервал завершился
            if (in_interval) {
                int end_idx = i - 1;
                int duration = end_idx - start_idx;
                printf("- Интервал: с %d по %d сек (Длительность: %d сек)\n", start_idx, end_idx, duration);
                
                intervals_count++;
                total_duration += duration;

                if (duration > max_len) {
                    max_len = duration;
                    max_start = start_idx;
                    max_end = end_idx;
                }
                in_interval = 0;
            }
        }
    }

    int calm_time = 12 - total_duration;
    double calm_percentage = ((double)calm_time / 12.0) * 100.0;

    printf("\nОбщее число интервалов активности: %d\n", intervals_count);
    printf("Суммарная длительность движения: %d сек\n", total_duration);
    printf("Самый длинный интервал: с %d по %d сек (%d сек)\n", max_start, max_end, max_len);
    printf("Время в режиме покоя: %.1f%%\n", calm_percentage);

    return 0;
}
