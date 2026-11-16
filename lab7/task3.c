#include <stdio.h>
#include <string.h>

int main() {
    char post[] = "today #coding in c #strings #arrays";
    char post_copy[100];
    // strtok изменяет исходную строку, поэтому делаем копию
    strcpy(post_copy, post);

    printf("Исходный пост: %s\n\n", post);
    printf("Найденные хэштеги:\n");

    int count = 0;
    // Разбираем строку на слова по пробелам
    char *token = strtok(post_copy, " ");
    while (token != NULL) {
        // Если слово начинается с символа '#', выводим его
        if (token[0] == '#') {
            printf("- %s\n", token);
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("\nОбщее количество хэштегов: %d\n", count);
    return 0;
}
