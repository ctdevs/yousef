#include <ctime>
#include <cstdlib>
#include "Deck.h"

Deck::Deck()
{
    // 11 = Jack; 12 = Queen; 13 = King; 14 = Ace
    int ranks[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int value[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
    // 1 = Spades; 2 = Clubs; 3 = Diamonds; 4 = Hearts
    int suits[] = {1, 2, 3, 4};
    currentCard = 0;
    for (int count = 0; count < SIZE; count++)
    {
        deck[count].setRank(ranks[count % 13]);
        deck[count].setValue(ranks[count % 13]);
        deck[count].setSuit(suits[count / 13]);
        // deck[count].setSuit(suits[count % 4]);
    }
}

void Deck::shuffle(void)
{
    for (int first = 0; first < SIZE; first++)
    {
        int second = (rand() + time(0)) % SIZE;
        Card temp = deck[first];
        deck[first] = deck[second];
        deck[second] = temp;
    }
}

Card Deck::dealCard(void)
{
    if (currentCard > SIZE)
    {
        throw std::range_error("There are no cards left");
    }
    return deck[currentCard++];
}