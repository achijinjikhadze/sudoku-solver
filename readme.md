# Sudoku Solver (C++)

A console-based Sudoku solver implemented in **C++**, developed using **Embarcadero Dev C++**. This project demonstrates algorithmic problem-solving, recursion, and backtracking.

---

## Input Rules
To define the Sudoku puzzle for the solver:

1. **Enter the number of pre-filled cells `n`.**
2. **For each cell, enter:**  

x y t

Where:  
- `x` = row number (1-indexed)  
- `y` = column number (1-indexed)  
- `t` = digit in that cell  

**Example Input:**  


3
1 1 5
1 2 3
2 1 6


**Explanation:**  
- 3 cells are pre-filled  
- Row 1, Column 1 = 5  
- Row 1, Column 2 = 3  
- Row 2, Column 1 = 6  

The solver will complete the rest of the grid automatically.

---

## Features
- Solve standard 9x9 Sudoku puzzles
- Handles variable numbers of pre-filled cells
- Input validation for rows, columns, and values
- Fast and efficient backtracking algorithm
- Displays the solved Sudoku grid in console

---

## Technologies
- **Programming Language:** C++  
- **IDE:** Embarcadero Dev C++  
- **Algorithm:** Backtracking / Recursion  
- **Platform:** Console-based application  

---

## Setup
1. Clone the repository:  
   ```bash
   git clone https://github.com/yourusername/sudoku-solver.git

Open the project in Embarcadero Dev C++.

Compile all source files.

Run the executable.

Usage

Launch the program.

Enter the number of pre-filled cells n.

Enter each filled cell in the format x y t.

The program will compute and print the solved Sudoku grid in the console.

Example Run:

Enter number of filled cells: 3
1 1 5
1 2 3
2 1 6

Solved Sudoku:
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
...
