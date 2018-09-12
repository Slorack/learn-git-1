#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main() {
    printf("4 + 2 = %d\n", sum(4, 2));
    printf("4 - 2 = %d\n", sub(4, 2));
    printf("4 * 2 = %d\n", mul(4, 2));
    printf("4 / 2 = %d\n", div(4, 2));
    return 0;
}
