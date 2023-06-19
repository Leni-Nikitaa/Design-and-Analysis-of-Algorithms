# N-Queens Problem

This directory contains an implementation of the N-Queens Problem algorithm in C. The N-Queens Problem is a classic puzzle where the goal is to place N queens on an NxN chessboard in such a way that no two queens threaten each other.

## Introduction

The N-Queens Problem is a well-known puzzle that involves placing N queens on an NxN chessboard. The challenge is to find a configuration in which no two queens can attack each other, which means no two queens share the same row, column, or diagonal.

This directory provides a C implementation of the N-Queens Problem algorithm. It utilizes a backtracking approach to find a valid solution.

## Algorithm

The algorithm implemented in this code follows a backtracking approach to solve the N-Queens Problem. It starts by placing a queen in the first column and then recursively tries to place the queens in the subsequent columns. If a conflict is encountered, the algorithm backtracks and explores different positions for the queen in the current column.

The main steps of the algorithm are as follows:

1. Initialize an empty chessboard of size NxN.
2. Start with the first column and iterate through each row.
3. Check if it is safe to place a queen at the current position (i.e., no conflicts with other queens).
4. If safe, place the queen at the current position and move to the next column.
5. Recursively repeat steps 3-4 for the subsequent columns.
6. If a solution is found (all queens are placed), print the chessboard configuration.
7. If no valid solution is found, print an appropriate message.

The algorithm terminates when either a valid solution is found or all possible configurations are exhausted.