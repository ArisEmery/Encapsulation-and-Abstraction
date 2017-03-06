//
// Created by Stephen Clyde on 2/16/17.
//

#ifndef BINGO_DECK_H
#define BINGO_DECK_H

#include <ostream>
#include "Card.h"
#include <vector>

// TODO: Extend this definition as you see fit

class Deck {

public:
    Deck(int cardSizeX, int cardCountX, int numberMaxX);
    ~Deck();

    void print(std::ostream& out) const;
    void print(std::ostream& out, int cardIndex) const;
    int cardSize, cardCount;
    int numberMax;
    Card **cards;


};

#endif //BINGO_DECK_H
