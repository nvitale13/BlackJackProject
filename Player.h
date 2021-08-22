#include<iostream>
#include<vector>
#include "card.h"

#define MAX_CARDS 4

using namespace std;

class Player{
  public:
    Player(const Card card1, const Card card2);
    void showHand();
    void hit(Card card);
    void checkHit21();
    void checkBust();
    bool gameOver();

  public:
    vector<Card> myCards;
    
    
};