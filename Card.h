//
// Created by Aris  Emery on 3/3/17.
//

#ifndef BINGO_CARD_H
#define BINGO_CARD_H
#include <vector>
class Card {

public:
    Card(int size, int maxNumberX,int cardSizeX);
    ~Card();
    //std::vector<int> cardSpaces;
    int **cardSpaces;
    int cardSize;
    int actualSize;
    int maxNumber;
    std::vector<int> randNumbers;
    bool newRandNum=false;
    int randNum;
    //int cardSpaces[50][50];
};
#endif //BINGO_CARD_H
