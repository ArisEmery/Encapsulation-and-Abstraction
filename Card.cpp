//
// Created by Aris  Emery on 3/3/17.
//
#include "Card.h"
#include "Deck.h"
#include <cstdlib>
#include <vector>
Card::Card(int size, int maxNumberX,int cardSizeX) {
    cardSize=cardSizeX;
    actualSize=size*size;
    maxNumber=maxNumberX;
    Card::cardSpaces = new int* [actualSize];
    for(int i=0;i<actualSize;i++){
        while(newRandNum==false){
            randNum=(rand() % maxNumber);
            if(!(std::find(randNumbers.begin(), randNumbers.end(), randNum) != randNumbers.end())){
                randNumbers.push_back(randNum);
                newRandNum=true;
            }
        }
        Card::cardSpaces[i]=new int( randNum);
        newRandNum=false;
    }
}

Card::~Card(){
   // for (int i=0; i<50; i++)
   //     delete m_options[i];
   // delete[] cardSpaces;
    //int numberOfCardSpaces=(Deck::cardSize*Deck::cardSize);
    for (int i=0; i<cardSize; i++)
        delete cardSpaces[i];
    delete[] cardSpaces;
}



