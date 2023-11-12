#include"Interface.hpp"

Game_Manager::Game_Manager()
{
	player = std::make_unique<Player>(this);
	enemy_manager = std::make_unique<Enemy_Manager>(this);
	enemy_bullet_manager = std::make_unique<Enemy_Bullet_Manager>(this);

}

void Game_Manager::update() {

	player->update();
	enemy_manager->update();
	enemy_bullet_manager->update();
}

void Game_Manager::draw()const {

	player->draw();
	enemy_manager->draw();
	enemy_bullet_manager->draw();
}
