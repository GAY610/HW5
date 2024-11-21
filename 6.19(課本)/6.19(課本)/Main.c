#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main() {
    int dice1, dice2;
    int sum;
    int frequency[13] = { 0 }; // �O���I�ƩM (2-12) �X�{������

    // ��l���H���ƥͦ���
    srand(time(NULL));

    // �������Y��l
    for (int i = 0; i < ROLLS; i++) {
        dice1 = rand() % 6 + 1; // ���� 1 �� 6 ���H����
        dice2 = rand() % 6 + 1; // ���� 1 �� 6 ���H����
        sum = dice1 + dice2;
        frequency[sum]++;
    }

    // ��X���G
    printf("�I�ƩM\t����\t���\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\t%.2f%%\n", i, frequency[i], (frequency[i] / (double)ROLLS) * 100);
    }

    return 0;
}
