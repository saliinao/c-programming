#include <stdio.h>

int add(int a,int b) {
    return a+b;
}
int main() {
    int sum = add(4,5);
    printf("%d", sum);
    return 0;
}