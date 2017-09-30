#ifndef Card_H
#define Card_H

#include <string>

using namespace std;

class Card
{
  private:
    int rank;
    int suit;

  public:
    Card()
    {
    }

    // Card(int rank, string suit)
    // {
    //     rank = rank;
    //     suit = suit;
    // }

    void setRank(int rank)
    {
        rank = rank;
    }

    void setSuit(int suit)
    {
        suit = suit;
    }

    int getRank()
    {
        return rank;
    }

    int getSuit()
    {
        return suit;
    }
};

#endif
