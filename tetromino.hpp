#pragma once
#define PIECE_WIDTH 4
#define PIECE_HEIGHT 4

// Tetromino base class
class Tetromino {
	int [PIECE_WIDTH][PIECE_HEIGHT] occupiedspace = {};
  
public:
	virtual void fall();
	virtual void rotate();
	Tetromino();
	~Tetromino();
}