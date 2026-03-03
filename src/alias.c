#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct matrix {
    int* row;
    int col;
};

typedef struct matrix mat;

int* create_array(size_t n) {
    int* ptr = (int*)malloc(n * sizeof(int));
    return ptr;
}

int main() {
    mat mat1;
    int ma[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++){
            ma[i][j] = 0;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++){
            printf("%d\t", ma[i][j]);
        }
        printf("\n");
    }
    
    int* array = create_array(6);
    array[2] = 10;
    printf("%d", 2[array]);
}