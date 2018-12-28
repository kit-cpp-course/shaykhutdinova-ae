
#include "Engine.h"

using namespace sf;
using namespace SolarSystem;


Engine::Engine()
{
	// �������� ���������� ������, ������� ���� SFML � View
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	window.create(VideoMode(resolution.x, resolution.y),
		"Simple Game Engine", Style::Fullscreen);

	// ��������� ��� � ��������
	// ����������� ����������� ��� ��� ������ ������ � ���������
	BackgroundTexture.loadFromFile("space1.jpg");

	// ��������� ������ � ��������
	BackgroundSprite.setTexture(BackgroundTexture);

}

void Engine::start()
{
	// ������ �������
	Clock clock;

	while (window.isOpen())
	{
		
		
		
		// ������������� ������ � ���������� ���������� ����� � dt
		Time dt = clock.restart();
		
		float dtAsSeconds = dt.asSeconds();
		
		input();
		update(dtAsSeconds);
		
		draw();
	}
	

}