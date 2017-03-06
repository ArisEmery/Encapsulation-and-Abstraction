//
// Created by Aris  Emery on 3/5/17.
//
#include "deckTester.h"
#include <iostream>
#include "../Deck.h"
using namespace std;
void deckTester::testDeck(){
    cout<<"\nTest Suite: deckTester::testDeck\n";
    cout<<"Testing the Deck contructor\n";
    Deck testerDeck(4, 4, 44);
    //int cardSizeX, int cardCountX, int numberMaxX
    if(testerDeck.cardSize!=4){
        cout<<"Card size wrong\n";
    }
    if(testerDeck.cardCount!=4){
        cout<<"Card count wrong\n";
    }
    if(testerDeck.numberMax!=44){
        cout<<"Card max number wrong\n";
    }
}
