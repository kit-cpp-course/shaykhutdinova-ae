
#include "Engine.h"

using namespace sf;
using namespace SolarSystem;

void Engine::update(float dtAsSeconds)
{
	/*Track.update(dtAsSeconds);*/
	Sun.update(dtAsSeconds);
	sf::Time t1 = sf::seconds(0.005f);
	sleep(t1);

	Earth.update(dtAsSeconds);
	
	Mars.update(dtAsSeconds);
	Mercury.update(dtAsSeconds);
	Venus.update(dtAsSeconds);
	Jupiter.update(dtAsSeconds);
	Saturn.update(dtAsSeconds);
	Uranus.update(dtAsSeconds);
	Neptune.update(dtAsSeconds);

}