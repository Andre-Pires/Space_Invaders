#pragma once
#include "Invader.h"

class BlueInvader: public Invader
{

private:
	void draw_legs();
	void draw_body();
	void draw_head();
	void draw_eyes();

public:
	BlueInvader(void);
	GLfloat * getMaterial();
	void draw(float x, float y, int debug);
};

