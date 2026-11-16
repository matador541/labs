#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Функция для вычисления определителя матрицы любого размера NxN
double determinant(double **matrix, int n) {
    if (n == 1) return matrix[0][0];
    if (n == 2) return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

    double det = 0;
    // Выделяем память под субматрицу (минор) размерности (n-1)x(n-1)
    double **submatrix = (double **)malloc((n - 1) * sizeof(double *));
    for (int i = 0; i < n - 1; i++) {
        submatrix[i] = (double *)malloc((n - 1) * sizeof(double *));
    }

    for (int x = 0; x < n; x++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == x) continue;
                submatrix[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }
        det += pow(-1, x) * matrix[0][x] * determinant(submatrix, n - 1);
    }

    // Освобождаем память субматрицы
    for (int i = 0; i < n - 1; i++) free(submatrix[i]);
    free(submatrix);

    return det;
}

int main() {
    int n;
    printf("Введите размерность системы N: ");
    if (scanf("%d", &n) != 1 || n < 1) return 0;

    // Выделяем динамическую память под главную матрицу A и массив свободных членов B
    double **a = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) a[i] = (double *)malloc(n * sizeof(double *));
    double *b = (double *)malloc(n * sizeof(double));
    double *x = (double *)malloc(n * sizeof(double));

    printf("Введите строки матрицы коэффициентов и свободный член (строка за строкой):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%lf", &a[i][j]) != 1) return 0;
        }
        if (scanf("%lf", &b[i]) != 1) return 0;
    }

    // Считаем главный определитель системы
    double main_det = determinant(a, n);
    printf("\nГлавный определитель (Delta) = %.4f\n", main_det);

    if (fabs(main_det) < 1e-7) {
        printf("Система не имеет единственного решения (Delta = 0)\n");
    } else {
        // Выделяем память под временную матрицу для вычисления побочных определителей
        double **temp = (double **)malloc(n * sizeof(double *));
        for (int i = 0; i < n; i++) temp[i] = (double *)malloc(n * sizeof(double *));

        printf("\nОтвет:\n");
        for (int j = 0; j < n; j++) {
            // Копируем исходную матрицу в temp
            for (int r = 0; r < n; r++) {
                for (int c = 0; c < n; c++) {
                    temp[r][c] = a[r][c];
                }
            }
            // Заменяем j-й столбец столбцом свободных членов B
            for (int r = 0; r < n; r++) temp[r][j] = b[r];

            double d_j = determinant(temp, n);
            x[j] = d_j / main_det;
            printf("x%d = %.2f\n", j + 1, x[j]);
        }

        for (int i = 0; i < n; i++) free(temp[i]);
        free(temp);
    }

    // Освобождаем оставшуюся динамическую память
    for (int i = 0; i < n; i++) free(a[i]);
    free(a); free(b); free(x);

    return 0;
}
