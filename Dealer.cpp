#include "Dealer.h"

Dealer::Dealer(const Card card1, const Card card2){
  myCards.push_back(card1);
  myCards.push_back(card2);
}

void Dealer::showHand(){
  std::cout << "\n\n------------\n\n";
  std::cout << "Dealer's cards: ";
  for(int i = 0; myCards.size() != i; i++){
    myCards[i].draw();
    std::cout << " | ";
  }
  std::cout << "\n\n------------\n\n";
}

bool Dealer::hit(){
  int cardsSum = 0;
  for(int i = 0; myCards.size() != i; i++){
    cardsSum += myCards[i].value;
  }
  return cardsSum < 17 ? true : false;
}

void Dealer::hit(Card card){
  
  myCards.push_back(card);
}

void Dealer::checkHit21(){
  int cardsSum = 0;
  for(int i = 0; myCards.size() != i; i++){
    cardsSum += myCards[i].value;
  }
  if(cardsSum == 21){
    std::cout << "Dealer hit 21!" << std::endl;
  }
}

void Dealer::checkBust(){
  int cardsSum = 0;
  for(int i = 0; myCards.size() != i; i++){
    cardsSum += myCards[i].value;
  }
  if(cardsSum > 21){
    std::cout << "Dealer busted" << std::endl;
  } 
}

bool Dealer::gameOver(){
  int cardsSum = 0;
  for(int i = 0; myCards.size() != i; i++){
    cardsSum += myCards[i].value;
  }
  return cardsSum >= 21 ? true : false;
}