#include <stdio.h>

int findIndex(int *arr, int size, int value);
int main(){
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int value = 3;
    int position = findIndex(array, size, value);
    if (position != -1) {
        printf("Phan tu %d o vi tri: %d\n", value, position);
    } else {
        printf("Phan tu %d khong ton tai trong mang\n", value);
    }

    return 0;
}
int findIndex(int *arr, int size, int value){
	int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}
