#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    int *a = (int*) malloc(n * sizeof(int));
    if (!a) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }
    
    printf("Введите %d элементов массива:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int sum = 0, count = 0;
    printf("Индексы отрицательных элементов: ");
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            printf("%d ", i);
            sum += a[i];
            count++;
        }
    }
    printf("\n");
    
    if (count > 0)
        printf("Среднее арифметическое отрицательных элементов = %f\n", (float)sum / count);
    else
        printf("Отрицательных элементов не найдено.\n");
    
    free(a);
    return 0;
}