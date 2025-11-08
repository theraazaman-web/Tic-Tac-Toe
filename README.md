🎮 Tic Tac Toe in C

A simple yet fun command-line implementation of the classic Tic Tac Toe game written in C! 🕹️

📖 About

This is a terminal-based Tic Tac Toe game where two players can play against each other. The game features a clean board display, input validation, and checks for wins or draws automatically.

✨ Features

🎯 2-Player Gameplay - Perfect for friends
🖥️ Visual Board - Clear and easy-to-read interface
✅ Input Validation - Prevents invalid moves
🏆 Win Detection - Automatically checks for winners
🤝 Draw Detection - Handles tied games
🔄 Player Switching - Alternates between X and O
🚀 How to Run

Compile the code:

bash
gcc tic_tac_toe.c -o tic_tac_toe
Run the game:

bash
./tic_tac_toe
🎮 How to Play

Players take turns entering row and column numbers (1-3)
Player X starts first ⚡
Player O goes next 🔄
Get 3 in a row (horizontal, vertical, or diagonal) to win! 🏆
If all spaces fill up with no winner, it's a draw! 🤝
📋 Game Rules

Players alternate placing X and O on a 3x3 grid
First to get 3 of their marks in a row wins
Valid moves are numbers between 1-3 for rows and columns
Cannot overwrite existing moves
🛠️ Code Structure

initializeBoard() - Sets up empty board
displayBoard() - Shows current game state
getPlayerMove() - Handles player input
checkWinner() - Checks for winning conditions
checkDraw() - Checks for tied game
💻 Requirements

GCC compiler
Any terminal/command prompt
