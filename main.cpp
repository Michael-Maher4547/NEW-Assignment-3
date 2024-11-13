/*
* Name: Michael Maher
* Course: CS 250
* Last Update: 10/10/2024
* Program #2: OO Concepts
*/
#include <iostream>
#include "word.h"
#include "GuessedLetters.h"
#include "GameState.h"
using namespace std;

int main()
{

    char PlayAgain;

    do {
        Word word("JUGGLE");
        GuessedLetters guessed = GuessedLetters();
        GameState state = GameState();
        char letter;
        
        do {
            cout << "Game state: " << state.getState() << endl;
            cout << "Guessed letters: " << guessed.getLetters() << endl;
            cout << "Guess this word: " << word.getWord() << endl << endl;
            cout << "Guess a letter: ";
            cin >> letter;
            letter = toupper(letter);
            if (word.findLetter(letter)) {
                word.addLetter(letter);
            }
            else {
                guessed.addLetter(letter);
                state.addState();
            }
        } while ( (!state.gameOver()) && (!word.solved()) );
        
        if (state.gameOver()) {
            cout << endl << "Game state: " << state.getState() << endl;
            cout << "Sorry you lose"  << endl;
            cout << "The word was: JUGGLE" << endl;
        }
        else {
            cout << endl << "Congratulations, you guessed the word: " <<  word.getWord() << endl;
        }
        
        //this is the loop that allows the user to play hangman again
        cout << "Do you want to play again? (Y/N): ";
        cin >> PlayAgain;
        PlayAgain = toupper(PlayAgain);
        
    } while (PlayAgain == 'Y');
    
    cout << "Thanks for playing" << endl;
    

    return 0;
}
