#include "Track.h"
#include <cmath>
#include "Engine.h"
//#include "Planet.h"

using namespace sf;
using namespace SolarSystem;

Track::Track() {
	rad = 70;
	
	position.x = VideoMode::getDesktopMode().width / 2-rad/2-5;
	position.y = VideoMode::getDesktopMode().height / 2-rad/2-5;

	circle.setFillColor(sf::Color::Transparent);
	circle.setRadius(rad);
	
	circle.setOutlineThickness(1);
	circle.setOutlineColor(sf::Color(193, 0, 32));
	
}
CircleShape Track::GetCircle()
{
	return circle;
}

void Track::update(float ElapsedTime) {
	circle.setPosition(position);
}
