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
        return isSubsequence(sub);
    }else{
        z++;
        return isSubsequence(sub);
    }
    return true;
}

ostream & operator<< (ostream& os, Subsequences& s){
    os << s.word;
    
    return os;
}
