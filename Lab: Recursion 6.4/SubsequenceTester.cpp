#include <iostream>
#include "Subsequences.hpp"

using namespace std;

void checkCase(string, string, string, bool);

int main()
{
    /**
        Add several more test cases to thoroughly test your data
        checkCase takes the following parameters (name, word, possible subsequence, true/false it would be a subsequence)
    **/
    cout << "hello";

    checkCase("Case 1: First Letter", "pin", "programming", true);
    checkCase("Case 2: Skipping Letters", "ace", "abcde", true);
    checkCase("Case 3: Out of order", "bad", "abcde", false);
    checkCase("Case 4: gibbrish", "bad", "idkbdbkahfbaofhnbijd", true);
    checkCase("Case 5: Code", "sel", "string testCaseName, string sub, string sentence, bool correctResponse", true);
    checkCase("Case 6: multiple", "bad", "bbbbbbbbbbbbddd", false);
    checkCase("Case 7: multiple good", "bad", "bbbbbbbbbbbbdaaaaadd", true);
    checkCase("Case 8: more code", "iflwirrmeaiintargcntodhstt0;", "bool isPalindrome(string word, int first, int last ){if(word[first] != word[last]){return false;}else if(first == last){return true;}else{bool x = isPalindrome(word, ++first, --last);return x;}}//Facilitate Recursive method callbool isPalindrome(string word){return isPalindrome(word, 0, word.length()-1);}int main(int argc, const char * argv[]) {// insert code here...std::cout << ;std::cout << go(4) << endl;rain(4);return 0;}", true);
    checkCase("Case 9: more code+", "iflwirrmeaiintargcmdbdre0ntodhstt0zz;", "bool isPalindrome(string word, int first, int last ){if(word[first] != word[last]){return false;}else if(first == last){return true;}else{bool x = isPalindrome(word, ++first, --last);return x;}}//Facilitate Recursive method callbool isPalindrome(string word){return isPalindrome(word, 0, word.length()-1);}int main(int argc, const char * argv[]) {// insert code here...std::cout << ;std::cout << go(4) << endl;rain(4);return 0;}", false);
    checkCase("Case 10: more code++", "iflwirrmeaiintargcntodhstt0zz;", "bool isPalindrome(string word, int first, int last ){if(word[first] != word[last]){return false;}else if(first == last){return true;}else{bool x = isPalindrome(word, ++first, --last);return x;}}//Facilitate Recursive method callbool isPalindrome(string word){return isPalindrome(word, 0, word.length()-1);}int main(int argc, const char * argv[]) {// insert code here...std::cout << ;std::cout << go(4) << endl;rain(4);return 0;}", false);
    checkCase("Case 11: more+++ code", "isl;", "bool isPalindrome(string word, int first, int last ){if(word[first] != word[last]){return false;}else if(first == last){return true;}else{bool x = isPalindrome(word, ++first, --last);return x;}}//Facilitate Recursive method callbool isPalindrome(string word){return isPalindrome(word, 0, word.length()-1);}int main(int argc, const char * argv[]) {// insert code here...std::cout << ;std::cout << go(4) << endl;rain(4);return 0;}", true);
    checkCase("Case 12: more++++ code", "if[lwirm{eai}intarg,cntodhstt0;", "bool isPalindrome(string word, int first, int last ){if(word[first] != word[last]){return false;}else if(first == last){return true;}else{bool x = isPalindrome(word, ++first, --last);return x;}}//Facilitate Recursive method callbool isPalindrome(string word){return isPalindrome(word, 0, word.length()-1);}int main(int argc, const char * argv[]) {// insert code here...std::cout << ;std::cout << go(4) << endl;rain(4);return 0;}", true);
    checkCase("Case 13: multiple what", "aaaaaaaaaaa", "aaaadaaaaaaaaaaaaaaaaaa", true);
    checkCase("Case 14: multiple what", "aaaadaaaaaaa", "aaaadaaaaaaaaaaaaaaaaaa", true);



    

    

    return 0;
}


void checkCase(string testCaseName, string sub, string sentence, bool correctResponse){
    Subsequences s(sentence);
    if(s.isSubsequence(sub) == correctResponse){
        cout << "Passed " << testCaseName << endl;
    }
    else{
        cout << "Failed " << testCaseName << ": " << sub << " is " << (correctResponse? "": "not ") << "a subsequence of " << sentence << endl;
    }
}

