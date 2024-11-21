#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ��ƫŧi
void shuffle(int wDeck[4][13]);
void deal(const int wDeck[4][13], const char* wFace[], const char* wSuit[]);

int main(void) {
    // �w�q���P�I��
    const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    const char* face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    // ��l�ƵP��
    int deck[4][13] = { 0 };

    srand(time(0)); // �]�w�H���ƺؤl

    // �~�P�õo�P
    shuffle(deck);
    deal(deck, face, suit);

    system("pause");
    return 0;
}

// �~�P���
void shuffle(int wDeck[4][13]) {
    int row, column, card;

    for (card = 1; card <= 52; card++) {
        do {
            row = rand() % 4;      // �H�����
            column = rand() % 13; // �H���I��
        } while (wDeck[row][column] != 0); // �T�O�P���Q�ϥ�

        wDeck[row][column] = card;
    }
}

// �o�P���
void deal(const int wDeck[4][13], const char* wFace[], const char* wSuit[]) {
    int card, row, column;

    for (card = 1; card <= 52; card++) {
        for (row = 0; row < 4; row++) {
            for (column = 0; column < 13; column++) {
                if (wDeck[row][column] == card) {
                    printf("%-5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}
