//
//  word.cpp
//  Hang Man
//
//  Created by Michael Maher on 10/23/24.
//
#include "word.h"

using namespace std;

Word::Word(const string& word) : m_word(word) {
    m_currentWord.resize(word.size(), '_'); // Initialize underscores
}

string Word::getWord() const {
    return string(m_currentWord.begin(), m_currentWord.end());
}

void Word::addLetter(char letter) {
    for (size_t i = 0; i < m_word.size(); ++i) {
        if (toupper(m_word[i]) == toupper(letter)) {
            m_currentWord[i] = m_word[i]; // Replace underscore with the actual letter
        }
    }
}

bool Word::findLetter(char letter) const {
    return m_word.find(toupper(letter)) != string::npos;
}

bool Word::solved() const {
    return find(m_currentWord.begin(), m_currentWord.end(), '_') == m_currentWord.end();
}
