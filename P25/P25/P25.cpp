#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ㄧ计
void shuffle(int wDeck[4][13]);
void deal(const int wDeck[4][13], const char* wFace[], const char* wSuit[]);

int main(void) {
    // ﹚竡︹籔翴计
    const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    const char* face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    // ﹍て礟舱
    int deck[4][13] = { 0 };

    srand(time(0)); // 砞﹚繦诀计贺

    // 瑍礟祇礟
    shuffle(deck);
    deal(deck, face, suit);

    system("pause");
    return 0;
}

// 瑍礟ㄧ计
void shuffle(int wDeck[4][13]) {
    int row, column, card;

    for (card = 1; card <= 52; card++) {
        do {
            row = rand() % 4;      // 繦诀︹
            column = rand() % 13; // 繦诀翴计
        } while (wDeck[row][column] != 0); // 絋玂礟ゼ砆ㄏノ

        wDeck[row][column] = card;
    }
}

// 祇礟ㄧ计
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
