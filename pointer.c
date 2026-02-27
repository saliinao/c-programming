#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr_num = (int*)malloc(sizeof(int));
    float* ptr_decimal = (float*)malloc(sizeof(float));

    *ptr_num = 6;
    *ptr_decimal= 6.4f; // not mandatory but good practice to write f

    printf("hello world\n");
    printf("address: %p\tvalue: %d\n", ptr_num, *ptr_num); 
    printf("address: %p\tvalue: %.2f\n", ptr_decimal, *ptr_decimal); 

    free(ptr_num);
    free(ptr_decimal);
    

    return 0;
}