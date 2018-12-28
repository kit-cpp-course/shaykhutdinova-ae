#include "TheSun.h"
#include <cmath>
#include "Engine.h"
//#include "Planet.h"

using namespace sf;
using namespace SolarSystem;

TheSun::TheSun() {
	
	
	position.x = VideoMode::getDesktopMode().width / 2-15;
	position.y = VideoMode::getDesktopMode().height / 2-15;

	texture.loadFromFile("sun.jpg");
	circle.setTexture(texture);

}
Sprite TheSun::GetCircle()
{
	return circle;
}
	
void TheSun::update(float ElapsedTime) {
	circle.setPosition(position);
}
