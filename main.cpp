#include "card.h"
#include "deck.h"
#include "Player.h"
#include "Dealer.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  Deck deck;

  deck.shuffleDeck();

  auto itr = deck.cards.begin();
  while (itr != deck.cards.end ()){
    (*itr).draw();
    //std::cout << std::endl;
    itr++; 
  }

  // begin game here
  int cardCounter = 1;
  Player player(deck.cards.front(), deck.cards[cardCounter++]);
  Dealer dealer(deck.cards[cardCounter + 1], deck.cards[cardCounter + 2]);

  // begin game loop - terminates when one player busts or hits 21
  
  while(!dealer.gameOver() && !player.gameOver()){
  
    // indexing variable to keep track of what cards have been drawn
    cardCounter += 3;

    // show initial cards
    player.showHand();
    dealer.showHand();
  
    // check if initial hand = 21, if not then ask hit or stay
    player.checkHit21();
    dealer.checkHit21();
    player.gameOver();
    dealer.gameOver();

    // read player's choice to hit or stay
    int playerChoice;
    cout << "Player, do you want to hit [1] or stay [0]?: ";
    cin >> playerChoice;

    // hit if player enters "1" key
    if(playerChoice == 1){
      player.hit(deck.cards[cardCounter]);
      cardCounter++;
    }
    
    // dealer automatically hits if less than 17
    if(dealer.hit()){
      dealer.hit(deck.cards[cardCounter]);
      cardCounter++;
    }
    
    // show hands
    player.showHand();
    dealer.showHand();

    // check if either hit 21 or busted ()
    player.checkHit21();
    dealer.checkHit21();
    player.checkBust();
    dealer.checkBust();
  }


    return 0;
  }





