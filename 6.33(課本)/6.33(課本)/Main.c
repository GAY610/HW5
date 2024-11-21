#include <stdio.h>
#define SIZE 15

// ���j�G���j�M�禡
int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1; // �򥻱���G�����ؼЭ�
    }

    int middle = low + (high - low) / 2; // �p�⤤������

    if (array[middle] == key) {
        return middle; // ���ؼЭ�
    }
    else if (array[middle] > key) {
        return binarySearch(array, low, middle - 1, key); // �j�M���b��l�}�C
    }
    else {
        return binarySearch(array, middle + 1, high, key); // �j�M�k�b��l�}�C
    }
}

int main() {
    int a[SIZE]; // ��ư}�C

    // ��l�ư}�C�A�Ȭ� 0, 2, 4, ..., 28
    for (int i = 0; i < SIZE; i++) {
        a[i] = 2 * i;
    }

    printf("�}�C���e: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int key;
    printf("�п�J�n�j�M���Ʀr: ");
    scanf("%d", &key);

    // ����G���j�M
    int result = binarySearch(a, 0, SIZE - 1, key);

    if (result != -1) {
        printf("%d �X�{�b���� %d�C\n", key, result);
    }
    else {
        printf("����� %d�C\n", key);
    }

    return 0;
}
