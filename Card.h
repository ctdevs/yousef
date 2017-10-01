#ifndef Card_H
#define Card_H

#include <string>

using namespace std;

class Card
{
  private:
    int rank;
    int suit;
    int value;

  public:
    Card()
    {
    }

    // Card(int rank, string suit)
    // {
    //     rank = rank;
    //     suit = suit;
    // }

    void setRank(int r)
    {
        rank = r;
    }

    void setSuit(int s)
    {
        suit = s;
    }

    void setValue(int v)
    {
        value = v;
    }

    int getRank()
    {
        return rank;
    }

    int getSuit()
    {
        return suit;
    }

    int getValue()
    {
        return value;
    }

    string getSuitName(int i)
    {
        string name;
        switch (i)
        {
        case 1:
            name = "Spade";
            break;
        case 2:
            name = "Clubs";
            break;
        case 3:
            name = "Diamonds";
            break;
        case 4:
            name = "Hearts";
            break;
        }
        return name;
    }
};

#endif
