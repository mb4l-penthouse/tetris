#include <iostream>
#include <string>

#define WIDTH 10
#define HEIGHT 20

class Board {
public: 
    void printboard();
    int main();
    Board(); // THIS IS THE CONSTRUCTOR

private:
    int blocks[WIDTH][HEIGHT];
};

Board::Board() {
    for (int j=0; j<HEIGHT; j++) {
        for (int i=0; i<WIDTH; i++){
            blocks[i][j] = 0;
        }
    }
}

void Board::printboard() {
    std::cout << "Printing board...\n";
    for (int j=HEIGHT-1; j>=0; j--) {
        for (int i=0; i<WIDTH; i++) {
            std::cout << "["+std::to_string(blocks[i][j])+"]";
        }
        std::cout << "\n";
    }
}

int Board::main() {
    std::cout << "Hello World\n";
    return 0;
}

int main() {
    Board b;
    b.printboard();
}
