#include <stdio.h>

void capnhatMang(int *arr, int size, int newValue, int position);
void printArray(int *arr, int size);
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Mang cu:\n");
    printArray(array, size);
    capnhatMang(array, size, 10, 2);
    printf("Mang moi sau cap nhat:\n");
    printArray(array, size);

    return 0;
}
void capnhatMang(int *arr, int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        arr[position] = newValue;
    } else {
        printf("Vi tri khong hop le\n");
    }
}
void printArray(int *arr, int size) {
	int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
