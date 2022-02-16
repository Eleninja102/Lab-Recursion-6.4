//
//  Subsequences.cpp
//  Lab: Recursion 6.4
//
//  Created by Coleton Watt on 2/16/22.
//

#include "Subsequences.hpp"

bool Subsequences::isSubsequence(string sub){
    if(i == sub.length()){
            return true;
    }else if(z == word.length()){
        return false;
    }else if(sub[i] == word[z]){
        i++;
        z++;
        x = isSubsequence(sub);
        return x;
    }else{
        z++;
        x = isSubsequence(sub);
        return x;
    }
    return true;
}

ostream & operator<< (ostream& os, Subsequences& s){
    os << s.word;
    if(s.x){
        os << " is a substring";
    }
    if(!s.x){
        os << " is a not substring";
    }
    
    return os;
}
