#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Nhập số thứ nhất: ");
    scanf("%d", &a);

    printf("Nhập số thứ hai: ");
    scanf("%d", &b);

    sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}