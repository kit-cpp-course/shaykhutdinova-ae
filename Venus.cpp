#include "Venus.h"
#include <cmath>
#include "Engine.h"
//#include "Planet.h"

using namespace sf;
using namespace SolarSystem;

Venus::Venus() {
	speed = 300;

	Mas = 500;
	rad = 55;
	vx = 3;
	vy = 0;
	ax = 0;
	ay = 0;
	// ”станавливаем начальную позицию в пиксел€х
	startx = VideoMode::getDesktopMode().width / 2;
	starty = VideoMode::getDesktopMode().height / 2;
	position.x = startx;
	position.y = starty - rad;
	// —в€зываем текстуру и спрайт
	texture.loadFromFile("venus.jpg");
	circle.setTexture(texture);

}
Sprite Venus::GetCircle()
{
	return circle;
}
void Venus::MoveClockwise()
{
	RightButtonPressed = true;
}

void Venus::MoveCounterClockwise()
{
	LeftButtonPressed = true;
}

void Venus::StopClockwise()
{
	RightButtonPressed = false;
}

void Venus::StopCounterClockwise()
{
	LeftButtonPressed = false;
}
void Venus::update(float ElapsedTime) {
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

	// “еперь сдвигаем спрайт на новую позицию
	circle.setPosition(position);

}