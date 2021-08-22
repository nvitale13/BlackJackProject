#include "deck.h"
#include <algorithm>
#include <random>
#include <chrono>

Deck::Deck() {
  cards.push_back(Card(CardSuit::Hearts, CardFace::Ace, 1));
  cards.push_back(Card(CardSuit::Hearts, CardFace::Two, 2));
  cards.push_back(Card(CardSuit::Hearts, CardFace::Three, 3));
  cards.push_back(Card(CardSuit::Hearts, CardFace::Four, 4));
  cards.push_back(Card(CardSuit::Hearts, CardFace::Five, 5));
  cards.push_back(Card(CardSuit::Hearts, CardFace::Six, 6));
  cards.push_back(Card(CardSuit::Hearts, CardFace::Seven, 7));
  cards.push_back(Card(CardSuit::Hearts, CardFace::Eight, 8));
  cards.push_back(Card(CardSuit::Hearts, CardFace::Nine, 9));
  cards.push_back(Card(CardSuit::Hearts, CardFace::Ten, 1));
  cards.push_back(Card(CardSuit::Hearts, CardFace::Jack, 10));
  cards.push_back(Card(CardSuit::Hearts, CardFace::Queen, 10));
  cards.push_back(Card(CardSuit::Hearts, CardFace::King, 10));

  cards.push_back(Card(CardSuit::Diamonds, CardFace::Ace, 1));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::Two, 2));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::Three, 3));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::Four, 4));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::Five, 5));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::Six, 6));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::Seven, 7));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::Eight, 8));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::Nine, 9));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::Ten, 10));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::Jack, 10));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::Queen, 10));
  cards.push_back(Card(CardSuit::Diamonds, CardFace::King, 10));

  cards.push_back(Card(CardSuit::Clubs, CardFace::Ace, 1));
  cards.push_back(Card(CardSuit::Clubs, CardFace::Two, 2));
  cards.push_back(Card(CardSuit::Clubs, CardFace::Three, 3));
  cards.push_back(Card(CardSuit::Clubs, CardFace::Four, 4));
  cards.push_back(Card(CardSuit::Clubs, CardFace::Five, 5));
  cards.push_back(Card(CardSuit::Clubs, CardFace::Six, 6));
  cards.push_back(Card(CardSuit::Clubs, CardFace::Seven, 7));
  cards.push_back(Card(CardSuit::Clubs, CardFace::Eight, 8));
  cards.push_back(Card(CardSuit::Clubs, CardFace::Nine, 9));
  cards.push_back(Card(CardSuit::Clubs, CardFace::Ten, 10));
  cards.push_back(Card(CardSuit::Clubs, CardFace::Jack, 10));
  cards.push_back(Card(CardSuit::Clubs, CardFace::Queen, 10));
  cards.push_back(Card(CardSuit::Clubs, CardFace::King, 10));

  cards.push_back(Card(CardSuit::Spades, CardFace::Ace, 1));
  cards.push_back(Card(CardSuit::Spades, CardFace::Two, 2));
  cards.push_back(Card(CardSuit::Spades, CardFace::Three, 3));
  cards.push_back(Card(CardSuit::Spades, CardFace::Four, 4));
  cards.push_back(Card(CardSuit::Spades, CardFace::Five, 5));
  cards.push_back(Card(CardSuit::Spades, CardFace::Six, 6));
  cards.push_back(Card(CardSuit::Spades, CardFace::Seven, 7));
  cards.push_back(Card(CardSuit::Spades, CardFace::Eight, 8));
  cards.push_back(Card(CardSuit::Spades, CardFace::Nine, 9));
  cards.push_back(Card(CardSuit::Spades, CardFace::Ten, 10));
  cards.push_back(Card(CardSuit::Spades, CardFace::Jack, 10));
  cards.push_back(Card(CardSuit::Spades, CardFace::Queen, 10));
  cards.push_back(Card(CardSuit::Spades, CardFace::King, 10));


}
void Deck::shuffleDeck() { 
 unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
 std::shuffle (cards.begin(), cards.end(), std::default_random_engine(seed));
 };