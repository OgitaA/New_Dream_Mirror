#include"Interface.hpp"

Enemy_Bullet_Manager::Enemy_Bullet_Manager(Game_Manager* set_game) {

	game_manager = set_game;
}

void Enemy_Bullet_Manager::update() {

	for (auto&& enemy_bullet : enemy_bullets) {
		enemy_bullet->update();
	}
}

void Enemy_Bullet_Manager::draw()const {

	for (auto&& enemy_bullet : enemy_bullets) {
		enemy_bullet->draw();
	}
}
