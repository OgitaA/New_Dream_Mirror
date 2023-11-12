#pragma once

#include"Interface.hpp"

class Game_Manager;

class Enemy : public Object {

public:

	Game_Manager* game_manager;

	Enemy(Game_Manager *set_game);

    void update() override;
    void draw()const override;


	RectF get_rect() { return rect; }


private:

	RectF rect;


};
