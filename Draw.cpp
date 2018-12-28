
#include "Engine.h"

using namespace sf;
using namespace SolarSystem;

void Engine::draw()
{
	// Стираем предыдущий кадр
	window.clear(Color::White);

	// Отрисовываем фон
	window.draw(BackgroundSprite);
	/*window.draw(Track.GetCircle());*/
	window.draw(Earth.GetCircle());
	window.draw(Mars.GetCircle());
	window.draw(Sun.GetCircle());
	
	window.draw(Mercury.GetCircle());
	window.draw(Venus.GetCircle());
	window.draw(Jupiter.GetCircle());
	window.draw(Saturn.GetCircle());
	window.draw(Uranus.GetCircle());
	window.draw(Neptune.GetCircle());
	// Отображаем все, что нарисовали
	window.display();
}