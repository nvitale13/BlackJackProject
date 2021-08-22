#include "Player.h"

Player::Player(const Card card1, const Card card2){
  myCards.push_back(card1);
  myCards.push_back(card2);
}

void Player::showHand(){
  std::cout << "\n\n------------\n\n";
  std::cout << "Player's cards: ";
  for(int i = 0; myCards.size() != i; i++){
    myCards[i].draw();
    std::cout << " | ";
  }
}

void Player::hit(Card card){
  myCards.push_back(card);
}

void Player::checkHit21(){
  int cardsSum = 0;
  for(int i = 0; myCards.size() != i; i++){
    cardsSum += myCards[i].value;
  }
  if(cardsSum == 21){
    std::cout << "You hit 21!" << std::endl;
  }
}

void Player::checkBust(){
  int cardsSum = 0;
  for(int i = 0; myCards.size() != i; i++){
    cardsSum += myCards[i].value;
  }
  if(cardsSum > 21){
    std::cout << "You busted!" << std::endl;
  }
}

bool Player::gameOver(){
  int cardsSum = 0;
  for(int i = 0; myCards.size() != i; i++){
    cardsSum += myCards[i].value;
  }
  return cardsSum >= 21 ? true : false;
}