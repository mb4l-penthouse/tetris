#include <iostream>

#define WIDTH 10
#define HEIGHT 20

class Board {
private:
  //Block blocks[WIDTH][HEIGHT];
  //Piece activePiece;

  int blocks[WIDTH][HEIGHT];

    void printboard();

    int main();
};

void Board::printboard() {
    std::cout << "haha wtf";
}

int Board::main() {
    std::cout << "Hello World\n";
    return 0;
}

//test