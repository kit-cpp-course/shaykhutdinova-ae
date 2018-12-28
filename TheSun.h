#pragma once
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;



namespace SolarSystem {

	class TheSun {

		sf::RenderWindow* window; 
		Sprite circle;
		Vector2f position;
		
		
		Texture texture;
		
		float _angle;
		
		
	public:
		  TheSun();
		  void update(float ElapsedTime);
		  Sprite GetCircle();
		
	
	};

}