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

// A row of 3 blocks with 1 block below the right block
class TetrominoJ : Tetromino {
public:
	void fall();
	void rotate();
	TetrominoJ();
	~TetrominoJ();
}

// A row of 3 blocks with 1 block below the left block
class TetrominoL : Tetromino {
public:
	void fall();
	void rotate();
	TetrominoL();
	~TetrominoL();
}

// 2 horizontal dominoes with top offset to right
class TetrominoS : Tetromino {
public:
	void fall();
	void rotate();
	TetrominoS();
	~TetrominoS();
}

// 2 horizontal dominoes with top offset to left
class TetrominoZ : Tetromino {
public:
	void fall();
	void rotate();
	TetrominoZ();
	~TetrominoZ();
}