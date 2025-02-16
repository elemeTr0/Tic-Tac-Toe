# Tic Tac Toe (Qt Creator)

A simple Tic Tac Toe game implemented using Qt Creator with C++.

## Overview

This project is a classic Tic Tac Toe game built using the Qt framework. It provides a graphical user interface for two players to play against each other.

## Features

*   Two-player gameplay
*   Win detection

## Technologies Used

*   C++
*   Qt Framework

## Prerequisites

*   Qt Creator (version 6.8.2 or later, based on your build directory)
*   A C++ compiler compatible with Qt (e.g., MinGW)

## Building and Running the Game

1.  Clone the repository:

    ```
    git clone (https://github.com/elemeTr0/Tic-Tac-Toe)
    ```

2.  Open the `tictactoe.pro` file in Qt Creator.
3.  Configure the project build settings (if necessary) to use a compatible compiler.
4.  Build the project (typically by pressing Ctrl+B or Cmd+B).
5.  Run the executable located in the build directory (e.g., `build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/tictactoe.exe` or similar).

## How to Play

1.  Run the game.
2.  Two players take turns clicking on the empty squares to place their marks (X or O).
3.  The first player to get three of their marks in a row (horizontally, vertically, or diagonally) wins the game.
4.  If all squares are filled and no player has won, the game is a draw.
5.  Click the "Reset" button to start a new game.

## Project Structure

*   `main.cpp`: Contains the main function and application entry point.
*   `mainwindow.h`: Header file for the `MainWindow` class, which defines the main window of the application.
*   `mainwindow.cpp`: Implementation file for the `MainWindow` class, handling the game logic and GUI interactions.
*   `mainwindow.ui`:  UI design file created with Qt Designer, defining the layout of the main window.
*   `tictactoe.pro`: Qt project file, containing project settings and dependencies.
*   `tictactoe.pro.user`: User-specific settings for the Qt project (usually ignored by Git).

## Future Enhancements

*   Add a score tracking system.
*   Improve the user interface with better graphics and animations.

## Author

*   Mateo/elemeTr0

## License

No License
