#include <stdio.h>

int main() {
    double x, y;
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("NO\n");
        return 0;
    }

    if (y <= (1 - x * x) && y >= 0 && (x * x + y * y <= 1.0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
