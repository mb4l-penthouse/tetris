#include "tetromino.hpp"

// Straight tetromino of 4 blocks
class TetrominoI : Tetromino {
public:
	void fall();
	void rotate();
	TetrominoI();
	~TetrominoI();
}

// Square tetromino of 4 blocks in a 2x2 square
class TetrominoO : Tetromino {
public:
	void fall();
	void rotate();
	TetrominoO();
	~TetrominoO();
}

// A row of 3 blocks with one block below the center
class TetrominoT : Tetromino {
public:
	void fall();
	void rotate();
	TetrominoT();
	~TetrominoT();
}