#pragma once

#include"Interface.hpp"

class Game_Manager;

class Kasa : public Enemy {

public:

	Kasa(Game_Manager* set_game);

	void update()override;
	void draw()const override;


private:




};
