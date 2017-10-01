#ifndef Deck_H
#define Deck_H

#include <string>
#include <stdexcept>
#include "Card.h"

#define SIZE 52

using namespace std;

class Deck
{
private:
  Card deck[SIZE];
  int currentCard;

public:
  Deck();
  void shuffle();
  Card dealCard();
};

#endif