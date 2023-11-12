#pragma once

#include"Common.hpp"
#include"Interface.hpp"

class Game : public App::Scene {

public:

	Game(const InitData& init);

	void update() override;

	void draw()const override;

private:

	std::shared_ptr<Game_Manager> game_manager;


};
