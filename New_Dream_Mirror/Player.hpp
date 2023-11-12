#pragma once

#include<Siv3D.hpp>

#include"Interface.hpp"

class Game_Manager;

class Player : public Object {

protected:

	Game_Manager* game_manager;


public:

	Player(){}

	Player(Game_Manager* set_game);

	void update()override;
	void draw()const override;



	void vs_enemy();
	void vs_enemy_bullet();


private:

	RectF m_rect;




};
