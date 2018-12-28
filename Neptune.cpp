#include "Neptune.h"
#include <cmath>
#include "Engine.h"
//#include "Planet.h"
#include <iostream>

using namespace sf;
using namespace SolarSystem;

Neptune::Neptune() {
	speed = 300;
	Mas = 500;
	rad = 270;
	vx = 2;
	vy = 2;
	ax = 2;
	ay = 2;
	startx = VideoMode::getDesktopMode().width / 2;
	starty = VideoMode::getDesktopMode().height / 2;
	position.x = startx + rad;
	position.y = starty - rad;

	texture.loadFromFile("neptune.jpg");

	circle.setTexture(texture);



}
Sprite Neptune::GetCircle()
{
	return circle;
}
void Neptune::MoveClockwise()
{
	RightButtonPressed = true;
}

void Neptune::MoveCounterClockwise()
{
	LeftButtonPressed = true;
}

void  Neptune::StopClockwise()
{
	RightButtonPressed = false;
}

void  Neptune::StopCounterClockwise()
{
	LeftButtonPressed = false;
}
void  Neptune::update(float ElapsedTime) {
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

