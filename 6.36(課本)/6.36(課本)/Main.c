#include <stdio.h>

void stringReverse(const char* str) {
    if (*str == '\0') {
        return;
    }
    stringReverse(str + 1);
    putchar(*str);
}

int main() {
    char input[100];

    printf("請輸入一個字串: ");
    fgets(input, sizeof(input), stdin);

  
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }

    printf("反向列印結果: ");
    stringReverse(input); 
    printf("\n");

    return 0;
}
