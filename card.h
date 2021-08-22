#pragma once

enum CardSuit {
  Hearts,
  Spades,
  Clubs,
  Diamonds
};

enum CardFace {
  Ace,
  Two,
  Three,
  Four,
  Five,
  Six,
  Seven,
  Eight,
  Nine,
  Ten,
  Jack,
  Queen,
  King
};

class Card {
public:
 Card(CardSuit suit, CardFace face, int value);
  
void draw();

  
public:
  CardSuit suit;
  CardFace face;
  int value;
};