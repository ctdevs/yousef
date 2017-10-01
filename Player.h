#ifndef Player_H
#define Player_H

#include <vector>

class Player
{
  private:
    Card hand[5];
    int score;

  public:
    void drawCard();
    void playCard(vector<int> cardIndexes);
};

#endif