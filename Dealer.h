#include<iostream>
#include<vector>
#include "card.h"

#define MAX_CARDS 4

using namespace std;

class Dealer{
  public:
    Dealer(const Card card1, const Card card2);
    void showHand();
    bool hit();
    void hit(Card card);
    void checkHit21();
    void checkBust();
    bool gameOver();

  public:
    vector<Card> myCards;

};