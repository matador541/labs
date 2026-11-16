#include <stdio.h>

int main() {
    double temp;
    char scale;

    if (scanf("%lf%c", &temp, &scale) != 2) {
        printf("Ouput error\n");
        return 0;
    }

    if (scale == 'c' || scale == 'C') {
        double fahrenheit = temp * 9.0 / 5.0 + 32.0;
        printf("Ouput temperature: %.1ff\n", fahrenheit);
    } else if (scale == 'f' || scale == 'F') {
        double celsius = (temp - 32.0) * 5.0 / 9.0;
        printf("Ouput temperature: %.1fc\n", celsius);
    } else {
        printf("Ouput error\n");
    }

    return 0;
}
