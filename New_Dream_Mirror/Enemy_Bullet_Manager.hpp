#pragma once
#include"Interface.hpp"

class Enemy_Bullet_Manager {

public:

	Array<std::shared_ptr<Enemy_Bullet>> enemy_bullets;
	Game_Manager* game_manager;


	Enemy_Bullet_Manager(Game_Manager* set_game);

	void update();
	void draw()const;


};
