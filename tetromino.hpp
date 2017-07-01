#pragma once
#include <vector>
#include <string>
#define PIECE_WIDTH 4
#define PIECE_HEIGHT 4

// Tetromino base class
class Tetromino {
  int [PIECE_WIDTH][PIECE_HEIGHT] occupiedspace;
  
public:
  void fall();
  void rotate();
  ~Tetromino();
  
}