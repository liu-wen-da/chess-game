#pragma once
#include <iostream>
#include <string>
#include <cmath>


enum Pieces {King, Queen, Knight, Bishop, Rock, Pawn, Empty};
enum Colors {Black, White, None};

class Board {
	
	bool move_king();
	bool move_queen();

	
};


class each_box {
	
	Pieces piece;
	Colors color;
	// init x and y
	int x,y;
	
public:
	void setEmpty();
	void setBoard(each_box*);
	Pieces getPiece();
	Colors getColor();
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	
};

