# Tic-Tac-Toe Game

This is a simple command-line Tic-Tac-Toe game implemented in C++. The game is designed for two players and offers an interactive experience through a text-based interface.

## Features

- **Two-player mode**: Allows two players to compete by choosing `X` or `O` and taking turns.
- **Player Selection**: Player 1 selects either `X` or `O` to start.
- **Automated Board Updates**: The board updates automatically after each move, displaying the current game state.
- **Winner Detection**: Checks for winning conditions after each turn.
- **Tie Condition**: Declares a tie if the board is filled without a winner.
- **Input Validation**: Ensures that players select only available slots and prompts to re-enter if an invalid or occupied slot is chosen.

## Future Enhancements

Some planned future enhancements include:

- **Multiple Rounds**: Allow players to play multiple rounds without restarting the program.
- **Input Validation for Character Selection**: Validate that Player 1 selects either `X` or `O` as input to avoid invalid symbols.
- **Enhanced Board Graphics**: Improve the board display for a better visual experience.

## How to Play

1. **Compile and Run**: Compile the code using a C++ compiler and run the executable.
   ```
   g++ tic_tac_toe.cpp -o tic_tac_toe
   ./tic_tac_toe
   ```
2. **Select Symbol**: Player 1 chooses their symbol (`X` or `O`).
3. **Take Turns**: Players alternate turns by entering the slot number (1-9) where they wish to place their symbol.
4. **Win or Tie**: The game announces the winner once three consecutive symbols are aligned horizontally, vertically, or diagonally. If all slots are filled without a winner, the game ends in a tie.
5. **Restart (Future)**: Additional future updates may allow restarting the game for another round or keeping track of scores.

## License

This project is open-source and available under the MIT License.
