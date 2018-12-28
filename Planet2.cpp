//
//#include <cmath>
//#include "Engine.h"
//#include "Planet2.h"
//
//using namespace sf;
//using namespace SolarSystem;
//
//Mars::Mars() {
//	speed = 300;
//	center.x = 100;
//	center.y = 100;
//	_angle = 1.f;
//	// Устанавливаем начальную позицию Боба в пикселях
//	position.x = 100;
//	position.y = 100;
//	// Связываем текстуру и спрайт
//	texture.loadFromFile("Mars.jpg");
//	circle.setTexture(texture);
//
//}
//Sprite Planet::GetCircle()
//{
//	return circle;
//}
//void Planet::MoveClockwise()
//{
//	RightButtonPressed = true;
//}
//
//void Planet::MoveCounterClockwise()
//{
//	LeftButtonPressed = true;
//}
//
//void Planet::StopClockwise()
//{
//	RightButtonPressed = false;
//}
//
//void Planet::StopCounterClockwise()
//{
//	LeftButtonPressed = false;
//}
//void Planet::update(float ElapsedTime) {
//	if (RightButtonPressed)
//	{
//
//		_angle -= 2 * 3.14 / 180 / 10;
//		float newx = cos(_angle);
//		float newy = sin(_angle);
//		position.x -= newx;
//		position.y -= newy;
//
//	}
//
//	if (LeftButtonPressed)
//	{
//		_angle += 2 * 3.14 / 180 / 10;
//		float newx = cos(_angle);
//		float newy = sin(_angle);
//		position.x += newx;
//		position.y += newy;
//	}
//
//	// Теперь сдвигаем спрайт на новую позицию
//	circle.setPosition(position);
//
//}