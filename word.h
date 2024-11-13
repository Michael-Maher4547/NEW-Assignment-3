//
//  word.h
//  Hang Man
//
//  Created by Michael Maher on 10/23/24.
//
#ifndef word_h
#define word_h
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Word {
private:
    vector<char> m_currentWord; // List of underscores
    string m_word;               // The actual word

public:
    Word(const string& word);
    string getWord() const;
    void addLetter(char letter);
    bool findLetter(char letter) const;
    bool solved() const;
};

#endif /* word_h */
