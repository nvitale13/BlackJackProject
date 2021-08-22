#include "card.h"

#include <iostream>

Card::Card (CardSuit suit, CardFace face, int value) {
  this->suit = suit;
  this->face = face;
  this->value = value;

}

void Card::draw() {
  switch(face) {
    case CardFace::Ace: std::cout << "A"; break;
    case CardFace::Two: std::cout << "2"; break;
    case CardFace::Three: std::cout << "3"; break;
    case CardFace::Four: std::cout << "4"; break;
    case CardFace::Five: std::cout << "5"; break;
    case CardFace::Six: std::cout << "6"; break;
    case CardFace::Seven: std::cout << "7"; break;
    case CardFace::Eight: std::cout << "8"; break;
    case CardFace::Nine: std::cout << "9"; break;
    case CardFace::Ten: std::cout << "10"; break;
    case CardFace::Jack: std::cout << "J"; break;
    case CardFace::Queen: std::cout << "Q"; break;
    case CardFace::King: std::cout << "K"; break;
  }
  switch(suit) {
    case CardSuit::Hearts: std::cout << "H"; break;
    case CardSuit::Diamonds: std::cout << "D"; break;
    case CardSuit::Spades: std::cout << "S"; break;
    case CardSuit::Clubs: std::cout << "C"; break;
  }

}

