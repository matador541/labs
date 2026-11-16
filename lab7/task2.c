#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[] = "A man a plan a canal Panama";
    char clean[100] = {0};
    int j = 0;

    // Очищаем строку от пробелов и приводим к нижнему регистру
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isspace((unsigned char)s[i])) {
            clean[j++] = tolower((unsigned char)s[i]);
        }
    }

    printf("Очищенная строка: %s\n", clean);

    // Проверяем на палиндром с двух концов
    int len = strlen(clean);
    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (clean[i] != clean[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("Вердикт: Палиндром\n");
    } else {
        printf("Вердикт: Не палиндром\n");
    }

    return 0;
}
