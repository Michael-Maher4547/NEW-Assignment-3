//
//  GameState.h
//  Hang Man
//
//  Created by Michael Maher on 10/23/24.
//

#ifndef GameState_h
#define GameState_h
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class GameState {
private:
    vector<string> m_state;
    const string m_allStates[7] = {
        "PLATFORM", "HEAD", "BODY",
        "LEFT_ARM", "RIGHT_ARM",
        "LEFT_LEG", "RIGHT_LEG"
    };
    int m_nextState;

public:
    GameState();
    string getState() const;
    void addState();
    bool gameOver() const;
};

#endif /* GameState_h */
