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

    int start, end;

    printf("Enter start and end number");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}