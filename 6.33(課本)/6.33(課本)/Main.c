#include <stdio.h>
#define SIZE 15

// 遞迴二分搜尋函式
int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1; // 基本條件：未找到目標值
    }

    int middle = low + (high - low) / 2; // 計算中間索引

    if (array[middle] == key) {
        return middle; // 找到目標值
    }
    else if (array[middle] > key) {
        return binarySearch(array, low, middle - 1, key); // 搜尋左半邊子陣列
    }
    else {
        return binarySearch(array, middle + 1, high, key); // 搜尋右半邊子陣列
    }
}

int main() {
    int a[SIZE]; // 整數陣列

    // 初始化陣列，值為 0, 2, 4, ..., 28
    for (int i = 0; i < SIZE; i++) {
        a[i] = 2 * i;
    }

    printf("陣列內容: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int key;
    printf("請輸入要搜尋的數字: ");
    scanf("%d", &key);

    // 執行二分搜尋
    int result = binarySearch(a, 0, SIZE - 1, key);

    if (result != -1) {
        printf("%d 出現在索引 %d。\n", key, result);
    }
    else {
        printf("未找到 %d。\n", key);
    }

    return 0;
}
