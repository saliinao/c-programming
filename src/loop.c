#include <stdio.h>

int main() {
    for (int i = 0; i <= 10; i++) {
        printf("%d\t", i);
    }

    printf("\n");

    int sum = 0;

    for (int i = 0; i <= 10; i++) {
        sum = sum + i;
    }

    printf("Sum is: %d\n", sum);
    
    return 0;
}