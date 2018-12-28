#include "Mercury.h"
#include <cmath>
#include "Engine.h"
//#include "Planet.h"

using namespace sf;
using namespace SolarSystem;

Mercury::Mercury() {
	speed = 300;

	Mas = 500;
	rad = 30;
	vx = 4;
	vy = 0;
	ax = 0;
	ay = 0;
	
	startx = VideoMode::getDesktopMode().width / 2;
	starty = VideoMode::getDesktopMode().height / 2;
	position.x = startx;
	position.y = starty - rad;

	texture.loadFromFile("mercury.jpg");
	circle.setTexture(texture);

}
Sprite Mercury::GetCircle()
{
	return circle;
}
void Mercury::MoveClockwise()
{
	RightButtonPressed = true;
}

void Mercury::MoveCounterClockwise()
{
	LeftButtonPressed = true;
}

void Mercury::StopClockwise()
{
	RightButtonPressed = false;
}

void Mercury::StopCounterClockwise()
{
	LeftButtonPressed = false;
}
void Mercury::update(float ElapsedTime) {
	if (RightButtonPressed)
	{

		ax = Mas * (startx - position.x) / pow(rad, 3);
		ay = Mas * (starty - position.y) / pow(rad, 3);
		vx += 1 * ax;
		vy += 1 * ay;
		position.x += 1 * vx;
		position.y += 1 * vy;
		
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

