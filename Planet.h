#pragma once
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;



namespace SolarSystem {

	 class Planet {
	 public:
		sf::RenderWindow* window; 
		Sprite circle;
		Vector2f position;
		Vector2f center;
		Texture texture;
		int startx;
		int starty;
		float ax;
		float ay;
		float vx;
		float vy;
		int Mas;
		int rad;
		
		float speed;
		
		bool RightButtonPressed;
		bool LeftButtonPressed;
		
		
		float _angle;
		Sprite GetCircle();
		 
		virtual  void MoveClockwise() =0;
		 void StopClockwise() ;
		 
		 void MoveCounterClockwise() ;
		  void StopCounterClockwise() ;
		 
		 void update() ;

	};

}