#include "Earth.h"
#include <cmath>
#include "Engine.h"
//#include "Planet.h"

using namespace sf;
using namespace SolarSystem;

Earth::Earth()  {
	speed = 300;
	Mas = 500;
	rad = 85;
	vx = 3;
	vy = 0;
	ax = 0;
	ay = 0;
	
	startx= VideoMode::getDesktopMode().width / 2;
	starty= VideoMode::getDesktopMode().height / 2 ;
	position.x = startx;
	position.y = starty-rad;
	
	texture.loadFromFile("lil.jpg");
	circle.setTexture(texture);

}
Sprite Earth::GetCircle() 
{
	return circle;
}
void Earth::MoveClockwise() 
{
	RightButtonPressed = true;
}

void Earth::MoveCounterClockwise()
{
	LeftButtonPressed = true;
}

void Earth::StopClockwise()
{
	RightButtonPressed = false;
}

void Earth::StopCounterClockwise()
{
	LeftButtonPressed = false;
}
void Earth::update(float ElapsedTime) {
	if (RightButtonPressed)
	{
		
		ax = Mas * (startx-position.x ) / pow(rad,3);
		ay = Mas * (starty - position.y) / pow(rad, 3);
		vx += 1* ax;
		vy += 1* ay;
		position.x +=1* vx; 
		position.y +=1* vy;
		

	}

	if (LeftButtonPressed)
	{
		ax = Mas * (startx - position.x) / pow(rad, 3);
		ay = Mas * (starty - position.y) / pow(rad, 3);
		vx -= 1 * ax;
		vy -= 1 * ay;
		position.x -= 1 * vx;
		position.y -= 1 * vy;
		
	}

	
	circle.setPosition(position);

}

