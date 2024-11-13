//
//  GuessedState.cpp
//  Hang Man
//
//  Created by Michael Maher on 10/23/24.
//


#include "GameState.h"

using namespace std;

GameState::GameState() : m_nextState(0) {}

string GameState::getState() const {
    return m_allStates[m_nextState];
}

void GameState::addState() {
    if (m_nextState < 6) { // There are 7 states (0 to 6)
        ++m_nextState;
        m_state.push_back(getState());
    }
}

bool GameState::gameOver() const {
    return m_nextState >= 6; // Game over if at last state
}
