#pragma once
#include "Char.h"
#include "Invader.h"
#include "BlueInvader.h"
#include "GreenInvader.h"
#include "RedInvader.h"
#include "PurpleInvader.h"
#include "SpaceShip.h"
#include "Shield.h"


class Game
{
private:

	float xShip;

	Char* InvBlue[17];
	Char* InvGreen[17];
	Char* InvRed[17];
	Char* InvPurple[17];
	Char* Ship;
	Char* Shields[5];
	

public:

	void moveShip(unsigned char key);
	void drawObjects();
	void objectInit();
	Game(void);
	~Game(void);
};
