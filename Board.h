#ifndef BOARD_H
#define BOARD_H

class Board {

public:
	Board();
	void move(std::string start, std::string end); 
	bool game_over();
	std::string winner();
private:
	bool occupied_same_color(std::string pos);
	bool is_valid_move(std::string start, std::string end);
};

#endif