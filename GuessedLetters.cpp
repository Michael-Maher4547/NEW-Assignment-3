//
//  GuessedLetters.cpp
//  Hang Man
//
//  Created by Michael Maher on 10/23/24.
//

#include "GuessedLetters.h"

using namespace std;

GuessedLetters::GuessedLetters() {}

string GuessedLetters::getLetters() const {
    string letters;
    for (char letter : m_guessed) {
        letters += letter;
        letters += ", ";
    }
    if (!letters.empty()) {
        letters.pop_back(); // Remove last space
        letters.pop_back(); // Remove last comma
    }
    return letters;
}

void GuessedLetters::addLetter(char letter) {
    if (find(m_guessed.begin(), m_guessed.end(), letter) == m_guessed.end()) {
        m_guessed.push_back(letter);
    }
}
