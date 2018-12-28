#pragma once
#include <SFML/Graphics.hpp>
#include "Planet.h"
using namespace std;
using namespace sf;



namespace SolarSystem {

	class Venus : public Planet {
	//private:
	//	sf::RenderWindow* window; 
	//	Sprite circle;
	//	Vector2f position;
	//	Vector2f center;
	//	int startx;
	//	int starty;
	//	float ax;
	//	float ay;
	//	float vx;
	//	float vy;
	//	int Mas;
	//	Vector2f newpos;
	//	/*Color color;*/
	//	Texture texture;
	//	int rad;
	//	float _angle;
	//	float speed;
	//	//int trackrad;
	//	bool RightButtonPressed;
	//	bool LeftButtonPressed;
	public:
		Venus();
		Sprite GetCircle();
		void MoveClockwise();
		void StopClockwise();
		void MoveCounterClockwise();
		void StopCounterClockwise();
		
		void update(float elapsedTime);
	};

}