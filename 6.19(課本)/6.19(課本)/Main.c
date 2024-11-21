#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main() {
    int dice1, dice2;
    int sum;
    int frequency[13] = { 0 }; // 記錄點數和 (2-12) 出現的次數

    // 初始化隨機數生成器
    srand(time(NULL));

    // 模擬投擲骰子
    for (int i = 0; i < ROLLS; i++) {
        dice1 = rand() % 6 + 1; // 產生 1 到 6 的隨機數
        dice2 = rand() % 6 + 1; // 產生 1 到 6 的隨機數
        sum = dice1 + dice2;
        frequency[sum]++;
    }

    // 輸出結果
    printf("點數和\t次數\t比例\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\t%.2f%%\n", i, frequency[i], (frequency[i] / (double)ROLLS) * 100);
    }

    return 0;
}
