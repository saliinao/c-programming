#include <stdio.h>
#include <stdlib.h>

void fn(int *array, size_t n, int k) {
    int i;
    for (i = 0; i < n; i++) {
        *(array + i) = *(array + i) + k;
    }
}

void print_array(int *array, size_t n) {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *(array + i));
    }
    printf("\n");
}

int main(){
    int *array = (int*)(malloc(sizeof(int) * 10));
    
    for (int i = 0; i < 10; i++) {
        *(array + i) = i + 1;
    }
    
    print_array(array, 10);
    fn(array, 10, 1);
    print_array(array, 10);
}
