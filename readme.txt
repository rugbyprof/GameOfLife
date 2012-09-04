The Game of Life was invented by John Conway.  It consists of a collection of cells 
which, based on a few mathematical rules, can live, die or multiply.  The "game" is a zero-player game, meaning 
that its evolution is determined by its initial state, requiring no further input from humans. One interacts 
with the Game of Life by creating an initial configuration and observing how it evolves.

The universe of the Game of Life is an infinite two-dimensional orthogonal grid of square cells, each of which 
is in one of two possible states, live or dead. Every cell interacts with its eight neighbors, which are the 
cells that are directly horizontally, vertically, or diagonally adjacent. At each step in time, the following 
transitions occur:

---------------------------------------------------------------------------------------------------------------
1.  Any live cell with fewer than two live neighbors dies, as if caused by underpopulation.
2.	Any live cell with more than three live neighbors dies, as if by overcrowding.
3.	Any live cell with two or three live neighbors lives on to the next generation.
4.	Any dead cell with exactly three live neighbors becomes a live cell.
---------------------------------------------------------------------------------------------------------------

How you implement a solution is up to you, but since I'm going to solve this problem in class, I will be 
introducing / re-inforcing the creation of Abstract Data Types and Object Oriented Programming.

To solve this problem, we must first decide how we would represent the "universe". A 2-dimensional array is
an obvious representation (but not necessarily the only one). But ... a 2D array of what? How do we represent 
life? A 2D array of int's or boolean? Or do we create some ADT that can help us solve the problem in a logical
and efficient manner?

See the included word document to see a typical solution.

We will be using a slightly different method of solving this problem using ADT's


