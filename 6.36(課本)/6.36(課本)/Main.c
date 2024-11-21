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

    printf("�п�J�@�Ӧr��: ");
    fgets(input, sizeof(input), stdin);

  
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }

    printf("�ϦV�C�L���G: ");
    stringReverse(input); 
    printf("\n");

    return 0;
}
