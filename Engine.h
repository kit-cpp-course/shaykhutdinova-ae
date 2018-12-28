#pragma once
#include <SFML/Graphics.hpp>
#include "Planet.h"
#include "Mars.h"
#include "Earth.h"
#include "TheSun.h"
#include "Track.h"
#include "Mercury.h"
#include "Venus.h"
#include "Jupiter.h"
#include "Saturn.h"
#include "Uranus.h"
#include "Neptune.h"
using namespace sf;
using namespace SolarSystem;

class Engine
{
private:

	RenderWindow window;

	// Объявляем спрайт и текстуру для фона
	Sprite BackgroundSprite;
	Texture BackgroundTexture;


	
	
	TheSun Sun;
	Earth Earth;
	Mars Mars;
	Mercury Mercury;
	Venus Venus;
	Jupiter Jupiter;
	Saturn Saturn;
	Uranus Uranus;
	Neptune Neptune;
	void input();
	void update(float dtAsSeconds);
	
	void draw();

public:
	// Конструктор движка
	Engine();

	// Функция старт вызовет все приватные функции
	void start();

};