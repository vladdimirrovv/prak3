#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr1 = (float *)malloc(sizeof(float));
    float *ptr2 = (float *)malloc(sizeof(float));
    float *ptr3 = (float *)malloc(sizeof(float));

    *ptr1 = 3.14;
    *ptr2 = 2.71;
    *ptr3 = 1.62;

    printf("До обмена:\n");
    printf("ptr1 = %.2f, ptr2 = %.2f, ptr3 = %.2f\n", *ptr1, *ptr2, *ptr3);

    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("После обмена:\n");
    printf("ptr1 = %.2f, ptr2 = %.2f, ptr3 = %.2f\n", *ptr1, *ptr2, *ptr3);

    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}