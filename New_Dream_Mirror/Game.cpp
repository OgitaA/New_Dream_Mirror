#include"Game.hpp"
#include"Interface.hpp"

Game::Game(const InitData& init)
	:IScene(init)
{
	game_manager = std::make_unique<Game_Manager>();

}

void Game::update()
{
	game_manager->update();

}

void Game::draw()const
{

}
