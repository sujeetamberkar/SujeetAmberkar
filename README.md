# Cricket Game
This repository contains a command-line cricket game implemented in C++. It allows you to play a simulated cricket match by batting and bowling against an opponent. The game includes features such as toss, innings, scoring, chasing targets, and determining the winner.

## Getting Started
To play the game, follow these steps:
1)Clone the repository to your local machine using the following command:
      git clone https://github.com/your-username/cricket-game.git
2)Navigate to the project directory:
      cd cricket-game
3)Compile the source code using a C++ compiler. For example, using g++:
      g++ cricket_game.cpp -o cricket_game
4)Run the compiled executable: 
     ./cricket_game

## Rules and Gameplay
1)The game starts with a toss to determine which team will bat or bowl first.
2)Enter 1 for "Heads" or 2 for "Tails" during the toss.
3)If you win the toss, you can choose to bat or bowl first by entering 1 or 2, respectively.
4)If you lose the toss, the decision will be randomly determined.
5)During batting, enter your input (1 to 6) and try to match the randomly generated input to score runs.
6)If your input matches the generated input, your batting will end.
7)During bowling, enter your input (1 to 6) and try to avoid matching the randomly generated input to restrict the opponent's scoring.
8)If your input matches the generated input, the opponent's batting will end.
9)The first inning's score will determine the target for the second inning.
10)After both innings are completed, the winner will be announced based on the scores.

Note: The game relies on random number generation and user input, so it may not provide the same sequence of random numbers each time it is run.

## Code Structure
The code is organized into a class named CricketGame, which encapsulates the game logic. Here is a brief overview of the class methods:

    playGame(): The main method that orchestrates the gameplay.
    random(): Generates a random number.
    batting(): Handles the user's batting input and calculates the batting score.
    balling(): Handles the user's bowling input and calculates the opponent's batting score.
    decideFirstIning(): Determines which team will bat or bowl first based on the toss result.
    toss(): Performs a coin toss to decide the team that will bat or bowl first.
    batting(int firstIningTotal): Handles the user's batting input during the second inning and calculates the score.
    balling(int firstIningTotal): Handles the user's bowling input during the second inning and calculates the opponent's score.

The main() function initializes an instance of the CricketGame class and starts the game by calling the playGame() method.
  
