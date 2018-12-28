
#include "Engine.h"

using namespace sf;
using namespace SolarSystem;

void Engine::input()
{
	// Обрабатываем нажатие Escape
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		window.close();
	}

	// Обрабатываем нажатие клавиш движения
	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		Earth.MoveClockwise();
		Mars.MoveClockwise();
		Mercury.MoveClockwise();
		Venus.MoveClockwise();
		Saturn.MoveClockwise();
		Jupiter.MoveClockwise();
		Uranus.MoveClockwise();
		Neptune.MoveClockwise();
	}
	else
	{
		Earth.StopClockwise();
		Mars.StopClockwise();
		Mercury.StopClockwise();
		Venus.StopClockwise();
		Saturn.StopClockwise();
		Jupiter.StopClockwise();
		Uranus.StopClockwise();
		Neptune.StopClockwise();
	}

	if (Keyboard::isKeyPressed(Keyboard::A))
	{
		Earth.MoveCounterClockwise();
		Mars.MoveCounterClockwise();
		Mercury.MoveCounterClockwise();
		Venus.MoveCounterClockwise();
		Saturn.MoveCounterClockwise();
		Jupiter.MoveCounterClockwise();
		Uranus.MoveCounterClockwise();
		Neptune.MoveCounterClockwise();
	}
	else
	{
		Earth.StopCounterClockwise();
		Mars.StopCounterClockwise();

		Mercury.StopCounterClockwise();
		Venus.StopCounterClockwise();
		Saturn.StopCounterClockwise();
		Jupiter.StopCounterClockwise();
		Uranus.StopCounterClockwise();
		Neptune.StopCounterClockwise();
	}

}