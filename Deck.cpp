//
// Created by Stephen Clyde on 2/16/17.
//

#include "Deck.h"

Deck::Deck(int cardSizeX, int cardCountX, int numberMaxX)
{
    cardSize=cardSizeX;
    cardCount=cardCountX;
    numberMax=numberMaxX;
    cards = new Card* [cardCountX];

    for(int i=0; i<cardCount;i++){
        cards[i]=new Card(cardSize,numberMax,cardSize);
    }

    // TODO: Implement
}

Deck::~Deck()
{
       for (int i=0; i<cardCount; i++)
        delete cards[i];
    delete[] cards;
    // TODO: Implement
}

void Deck::print(std::ostream& out) const
{

    for(int i=0;i<cardCount;i++){
        for(int j=0;j<(cardSize*cardSize);j++){
                out<<*cards[i]->cardSpaces[j]<<"|";
            if((j+1)%cardSize==0){
                out<<std::endl;
            }
        }
        out<<std::endl;
        out<<"New Card"<<std::endl;
    }
    out<<std::endl<<"New card"<<std::endl;
    // TODO: Implement
}

void Deck::print(std::ostream& out, int cardIndex) const
{
    for(int j=0;j<(cardSize*cardSize);j++) {
        out << *cards[cardIndex]->cardSpaces[j] << "|";
        if ((j + 1) % cardSize == 0) {
            out << std::endl;
        }
    }
    // TODO: Implement
}



