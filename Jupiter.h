#pragma once
#include <SFML/Graphics.hpp>
#include "Planet.h"
using namespace std;
using namespace sf;



namespace SolarSystem {

	class Jupiter : public Planet {
	//private:
	//	sf::RenderWindow* window; 
	//	Sprite circle;
	//	Vector2f position;
	//	Vector2f center;
	//	Vector2f newpos;
	//	/*Color color;*/
	//	Texture texture;
	//	int startx;
	//	int starty;
	//	float ax;
	//	float ay;
	//	float vx;
	//	float vy;
	//	int Mas;
	//	int rad;
	//	float _angle;
	//	float speed;
	//	
	//	bool RightButtonPressed;
	//	bool LeftButtonPressed;
	public:
		Jupiter();
		Sprite GetCircle();
		void MoveClockwise();
		void StopClockwise();
		void MoveCounterClockwise();
		void StopCounterClockwise();
	
		void update(float elapsedTime);
	};

}