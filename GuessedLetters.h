//
//  GuessedLetters.h
//  Hang Man
//
//  Created by Michael Maher on 10/23/24.
//
#ifndef GuessedLetters_h
#define GuessedLetters_h
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class GuessedLetters {
private:
    vector<char> m_guessed;

public:
    GuessedLetters();
    string getLetters() const;
    void addLetter(char letter);
};


#endif /* GuessedLetters_h */
