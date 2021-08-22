#include "card.h"
#include <vector>
#include <algorithm>
#include <string>

class Deck {
  public:
    Deck();

    void shuffleDeck();
    

  public:
    std::vector<Card> cards;

};