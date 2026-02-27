#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr_num = (int*)malloc(sizeof(int));
    float* ptr_decimal = (float*)malloc(sizeof(float));

    *ptr_num = 6;
    *ptr_decimal= 6.4f; // not mandatory but good practice to write f

    printf("hello world");

    return 0;
}