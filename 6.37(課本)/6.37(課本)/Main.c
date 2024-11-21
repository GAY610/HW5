#include <stdio.h>

int recursiveMaximum(const int array[], int size) {
    if (size == 1) {
        return array[0];
    }

    int maxOfRest = recursiveMaximum(array, size - 1);

    return (array[size - 1] > maxOfRest) ? array[size - 1] : maxOfRest;
}

int main() {
    int array[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
    int size = sizeof(array) / sizeof(array[0]); 

    int maxValue = recursiveMaximum(array, size);

    printf("陣列中的最大值是: %d\n", maxValue);

    return 0;
}
