#include "stdafx.h"
#include "Game.h"

Game::Game(void)
{
	xShip = 0;
	objectInit();
}

void Game::objectInit(){

	for(int i = 0; i <= 16; i++){
	
		InvBlue[i] = new BlueInvader();
		InvGreen[i] = new GreenInvader();
		InvRed[i] = new RedInvader();
		InvPurple[i] = new PurpleInvader();

		if(i <= 4){
			Shields[i] = new Shield();
		} 
	}

	Ship = new SpaceShip();
}


void Game::moveShip(unsigned char key){

	switch (key){
		//Movimenta para a esquerda
	case 'A': 
		{
			if(xShip > -120){
				xShip -= 4;
				 glutPostRedisplay();
			}
			break;
		}
        //Movimenta para a direita
	case 'D':
		{
			if(xShip < 120){
				xShip += 4;
			    glutPostRedisplay();
			}
			break;
		}
	}
}

void Game::drawObjects(){

	float sitiox = -120.0;
	float sitioy = 90.0;
	
	for(int i = 0; i <= 16; i++){
		
		InvRed[i]->draw(sitiox, sitioy); // fila 1
		InvGreen[i]->draw(sitiox, sitioy - 15); // fila 2
		InvBlue[i]->draw(sitiox, sitioy - 30); // fila 3
		InvPurple[i]->draw(sitiox, sitioy - 45); // fila 4

		sitiox += 15;
	}

	sitiox = -100.0;

	Shields[0]->draw(sitiox, -65);
	Shields[1]->draw(sitiox + 60, -65);
	Shields[2]->draw(sitiox + 140, -65);
	Shields[3]->draw(sitiox + 200, -65);
	

	Ship->draw(xShip, -85); // base do ecr�
}


Game::~Game(void)
{
}