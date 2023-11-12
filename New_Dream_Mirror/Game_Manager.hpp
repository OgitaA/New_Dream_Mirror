#pragma once

#include"Interface.hpp"

class Player;
class Enemy_Manager;
class Enemy_Bullet_Manager;

class Game_Manager {

public:

	Game_Manager();

	void update();
	void draw()const;

    std::shared_ptr<Player> player;

	std::shared_ptr<Enemy_Manager> enemy_manager;

	std::shared_ptr<Enemy_Bullet_Manager> enemy_bullet_manager;

private:



};
