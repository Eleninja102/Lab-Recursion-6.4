//
//  Subsequences.hpp
//  Lab: Recursion 6.4
//
//  Created by Coleton Watt on 2/16/22.
//

#ifndef Subsequences_hpp
#define Subsequences_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Subsequences{
private:
    string word;
    
public:
    Subsequences(string word):word(word){}
    bool isSubsequence(string sub);
    friend ostream & operator<< (ostream& os, Subsequences& s);
};

#endif /* Subsequences_hpp */


bool Subsequences::isSubsequence(string sub){
    return false;
}
