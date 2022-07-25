#include "Header.h"



// this sets the board to empty
void each_box::setEmpty() {
    piece = Empty;
    color = None;
}


// this sets the board to the given piece and color
void each_box::setBoard(each_box* board) {
    piece = board->getPiece();
    color = board->getColor();
}

// this get the piece in the box
Pieces each_box::getPiece() {
    return piece;
}

// this get the color of the piece in the box
Colors each_box::getColor() {
    return color;
}