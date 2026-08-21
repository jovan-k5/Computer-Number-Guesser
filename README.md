# Computer Number Guesser

A C terminal game that uses binary search to efficiently guess a number chosen by the player. The game includes two difficulty levels, replayability, input validation, and a statistics summary.

## Features

* **Easy Mode:** Number between 1–50
* **Hard Mode:** Number between 1–1000
* **Algorithm:** Computer uses binary search to narrow down the answer
* **Simple Controls:** Player provides feedback using `H`, `L`, or `C`
* **Replayability:** Built-in replay functionality
* **Statistics Tracking:**
  * Games played
  * Average guesses
  * Best game (fewest guesses)
  * Worst game (most guesses)
* **Input Validation:** Handles invalid responses

## How It Works

The player secretly chooses a number within the selected range. The computer guesses the middle of the current range and asks whether the player's number is:

* `H` **— Higher:** The number is higher than the computer's guess.
* `L` **— Lower:** The number is lower than the computer's guess.
* `C` **— Correct:** The computer guessed the number.

Based on the response, the computer adjusts its search boundaries and makes the next guess until it finds the correct number.

### Prerequisites

You need a C compiler installed on your system, such as GCC or Clang.

### Compilation and Running
Download the repository as a ZIP from GitHub and extract it. Open Terminal and navigate into the downloaded project folder. 

From inside the project folder, run these commands to compile and launch the game automatically:

```bash
gcc src/number_guesser.c -o number_guesser
```
Followed by 

``` bash
./number_guesser
```
## Play the Game

The program will start in your terminal.

1. Choose a difficulty and think of a number within the displayed range.
2. When the computer makes a guess:

   * Enter `H` if your number is higher.
   * Enter `L` if your number is lower.
   * Enter `C` if the computer is correct.
3. The computer will continue narrowing the range until it finds your number.

## View Your Statistics

After each game, you can choose whether to play again. If you choose `N`, the program displays your statistics, including:

* Games played
* Average guesses
* Best game
* Worst game

## Demo Video
(My number was 23)

https://github.com/user-attachments/assets/44937848-4527-4112-8bd4-979c4aa9f1d0

## What I Learned

This project helped me practice:

* Variables and data types
* if / else statements
* while and do-while loops
* Character handling with toupper
* Binary search
* Tracking and calculating statistics
* Debugging and testing a terminal-based program

## Problems I Encountered

* Had trouble setting up and compiling the C program in VS Code.
* Initially allowed invalid inputs, which I later fixed with input validation.

## Development Process

I developed the project incrementally, starting with the core number-guessing logic and then adding difficulty levels, replay functionality, statistics, and input validation. I tested the program using different numbers, difficulty levels, and invalid inputs to make sure the game behaved as expected.

## Future Improvements

Possible improvements include:

* Adding a maximum guesses indicator
* Adding additional game modes
* Creating a graphical interface
* Tracking more detailed statistics
* Utilize pointers and more advanced features
