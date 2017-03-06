//
// Created by Aris  Emery on 3/5/17.
//
#include "cardTester.h"
#include <iostream>
#include "../Card.h"
using namespace std;
void cardTester::testCard(){
    cout<<"\nTest Suite: cardTester::testCard\n";
    cout<<"Testing the card contructor\n";
    //(int size, int maxNumber,int cardSizeX)
    Card testerCard(4, 44, 4);
    if(testerCard.cardSize!=4){
        cout<<"Card size wrong\n";
    }
    if(testerCard.actualSize!=(testerCard.cardSize*testerCard.cardSize)){
        cout<<"Number of spaces on card wrong\n";
    }
    if(testerCard.maxNumber!=44){
        cout<<"Card max number wrong\n";
    }
}
