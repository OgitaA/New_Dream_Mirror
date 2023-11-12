#pragma once

#include"Interface.hpp"

class Object {
protected:

	Vec2 m_pos;

public:

	Object() : m_pos(Vec2(0, 0)) {}
	virtual ~Object() = default;

	virtual void update() = 0;
	virtual void draw()const = 0;

};
