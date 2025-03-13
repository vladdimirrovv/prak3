#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void selectionSort(float arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            float temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);

    float *b = (float *)malloc(n * sizeof(float));
    float *c = (float *)malloc(n * sizeof(float));

    printf("Введите элементы массива b:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &b[i]);
    }

    int cSize = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] > 0) {
            c[cSize] = sqrt(b[i]) / 5;
            cSize++;
        }
    }

    printf("Массив c до сортировки:\n");
    for (int i = 0; i < cSize; i++) {
        printf("%.2f ", c[i]);
    }
    printf("\n");

    selectionSort(c, cSize);

    printf("Массив c после сортировки:\n");
    for (int i = 0; i < cSize; i++) {
        printf("%.2f ", c[i]);
    }
    printf("\n");

    free(b);
    free(c);

    return 0;
}