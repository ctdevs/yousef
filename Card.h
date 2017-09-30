#ifndef Card_H
#define Card_H

#include <string>

using namespace std;

class Card
{
  private:
    int rank;
    string suit;

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

    void setSuit(string suit)
    {
        suit = suit;
    }

    int getRank()
    {
        return rank;
    }

    string getSuit()
    {
        return suit;
    }
};

#endif
