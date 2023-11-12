#include"Interface.hpp"

Player::Player(Game_Manager* set_game)
{
	game_manager = set_game;

}

void Player::update() {

}

void Player::draw()const {

}

void Player::vs_enemy() {

	for (auto&& it_enemy : game_manager->enemy_manager->enemys) {

		if (m_rect.intersects(it_enemy->get_rect())) {

		}
	}

}

void Player::vs_enemy_bullet() {

	/*
	game_manager->enemy_bullet_manager->enemy_bullets;
*/


}
