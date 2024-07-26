#include <iostream>
#include <cmath>
using namespace std;


int main() {

  cout << "This is a guessing game. You will have to guess a number between 1 and 100. You will have 10 tries to guess the number. Good luck. \n\n";

  int secretNum = 42;
  int guess = 0;
  int guessCount = 0;
  int guessLimit = 10;
  bool outOfGuesses = false;

  while (secretNum != guess && !outOfGuesses){
    if(guessCount < guessLimit) {
      cout << "Enter guess: ";
       cin >> guess;
       guessCount++;
      if(guess > secretNum) {
        cout << "Your guess is too high. Try again.\n";
      }
      else if (guess < secretNum) {
        cout << "Your guess is too low. Try again.\n";
      }
      else {
        break;
      }
    }

    else {
      outOfGuesses = true;
    }
  }

  if(outOfGuesses) {
    cout << "You lose! Out of guesses :(";
  }
  else {
    cout << "You win!";
  }
  
  return 0;
}

