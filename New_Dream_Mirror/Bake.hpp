#pragma once

#include"Interface.hpp"

class Game_Manager;

class Bake final: public Enemy {

public:

	Bake(Game_Manager* set_game);

	void update()override;
	void draw()const override;

private:


};
