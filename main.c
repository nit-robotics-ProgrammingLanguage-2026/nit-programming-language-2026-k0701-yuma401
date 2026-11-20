#include <stdio.h>

int func2(int a, int b);

int func2(int a, int b) {
    return a - b;
}

int main(void) {
    int n;
    int result;

    scanf("%d", &n);

    result = func2(10, n);

    printf("%d\n", result);

    return 0;
}