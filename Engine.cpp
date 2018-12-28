
#include "Engine.h"

using namespace sf;
using namespace SolarSystem;


Engine::Engine()
{
	// Получаем разрешение экрана, создаем окно SFML и View
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	window.create(VideoMode(resolution.x, resolution.y),
		"Simple Game Engine", Style::Fullscreen);

	// Загружаем фон в текстуру
	// Подготовьте изображение под ваш размер экрана в редакторе
	BackgroundTexture.loadFromFile("space1.jpg");

	// Связываем спрайт и текстуру
	BackgroundSprite.setTexture(BackgroundTexture);

}

void Engine::start()
{
	// Расчет времени
	Clock clock;

	while (window.isOpen())
	{
		
		
		
		// Перезапускаем таймер и записываем отмеренное время в dt
		Time dt = clock.restart();
		
		float dtAsSeconds = dt.asSeconds();
		
		input();
		update(dtAsSeconds);
		
		draw();
	}
	

}