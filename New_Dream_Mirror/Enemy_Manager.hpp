#pragma once

#include"Interface.hpp"

class Enemy;
class Game_Manager;

class Enemy_Manager {

public:

	Array<std::shared_ptr<Enemy>> enemys;
	Game_Manager* game_manager;


	Enemy_Manager(Game_Manager* set_game);

	void update();
	void draw()const;



};
