#include <stdio.h>
#include <string.h>

int main() {
    char email[] = "marat@sibguti.ru";
    char login[50] = {0};
    char domain[50] = {0};

    // Находим указатель на символ '@'
    char *at_ptr = strchr(email, '@');

    if (at_ptr != NULL) {
        int position = at_ptr - email; // Вычисляем индекс позиции

        // Копируем часть до '@' в логин
        strncpy(login, email, position);

        // Копируем часть после '@' в домен
        strcpy(domain, at_ptr + 1);

        printf("Исходный email: %s\n", email);
        printf("Позиция символа @: %d\n", position);
        printf("Логин: %s\n", login);
        printf("Домен: %s\n", domain);
    } else {
        printf("Некорректный адрес почты\n");
    }

    return 0;
}
