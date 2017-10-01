#include <iostream>
#include <string>
// #include "classes.h"
// #include "SDL_Plotter.h"
// #include <stack>
// #include <queue>
#include "Deck.h"

using namespace std;

int main(int argc, char **argv)
{
    // stack<Card> myStack;
    // queue<Card> myQueue;
    cout << "=== Starting game ===" << endl;
    Deck a;
    a.shuffle();
    for (int i = 0; i < 52; i++)
    {
        Card c = a.dealCard();
        cout << c.getRank() << " " << c.getSuitName(c.getSuit()) << endl;
    }
}
