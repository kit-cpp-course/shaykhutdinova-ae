#pragma once
#include <SFML/Graphics.hpp>
#include "Planet.h"
using namespace std;
using namespace sf;



namespace SolarSystem {

	class Mercury : public Planet {
	//private:
	//	sf::RenderWindow* window; 
	//	Sprite circle;
	//	Vector2f position;
	//	Vector2f center;
	//	Vector2f newpos;
	//	int startx;
	//	int starty;
	//	float ax;
	//	float ay;
	//	float vx;
	//	float vy;
	//	int Mas;
	//	/*Color color;*/
	//	Texture texture;
	//	int rad;
	//	float _angle;
	//	float speed;
	//	
	//	bool RightButtonPressed;
	//	bool LeftButtonPressed;
	public:
		Mercury();
		Sprite GetCircle();
		void MoveClockwise();
		void StopClockwise();
		void MoveCounterClockwise();
		void StopCounterClockwise();
		
		void update(float elapsedTime);
	};

}