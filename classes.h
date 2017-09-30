//
//  classes.h
//  YousefTakeTwo
//
//  Created by Sam  Shenoi on 9/30/17.
//  Copyright © 2017 Sam  Shenoi. All rights reserved.
//

#ifndef classes_h
#define classes_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class card{
    private:
        int number;
        string suit;

    public:
    
        card()
        {
        }
        void setNumber(int n)
        {
            number = n;
            
        }
        void setSuit (string g)
        {
            suit = g;
        }
        int getNumber()
        {
        return number;
        }
        string getSuit()
        {
            return suit;
        }
    
    };
class player{
    private:
        vector<card> hand;
        int score;
    public:
    
    
    };
class game
    {
    private:
        
        
    public:
    
    };
class round
    {
    private:
        
    public:
    
    };

#endif /* classes_h */
