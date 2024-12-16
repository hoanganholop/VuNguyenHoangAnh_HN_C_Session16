#include <stdio.h>

void sum(int *a, int *b, int *result);
int main() {
    int x = 10;
    int y = 8;
    int result;
    sum(&x, &y, &result);

    return 0;
}
void sum(int *a, int *b, int *result) {
    *result = *a + *b;
    printf("Tong cua 2 so la: %d\n", *result);
}

