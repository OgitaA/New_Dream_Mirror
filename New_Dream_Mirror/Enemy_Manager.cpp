#include"Interface.hpp"

Enemy_Manager::Enemy_Manager(Game_Manager* set_game) {

	game_manager = set_game;

	enemys.push_back(std::make_unique<Bake>(set_game));

}

void Enemy_Manager::update() {

	for (auto&& enemy : enemys) {
		enemy->update();
	}
}

void Enemy_Manager::draw()const {

	for (auto&& enemy : enemys) {
		enemy->draw();
	}
}
