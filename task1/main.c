#include <stdio.h>

int main() {
    int a, b;
    printf("Введите значение переменной a: ");
    scanf("%d", &a);
    printf("Введите значение переменной b: ");
    scanf("%d", &b);

    int *ptrA = &a;
    int *ptrB = &b;

    *ptrA *= 2;  // Увеличиваем значение a в 2 раза
    *ptrB /= 2;  // Уменьшаем значение b в 2 раза

    printf("Новое значение a: %d\n", a);
    printf("Новое значение b: %d\n", b);

    return 0;
}