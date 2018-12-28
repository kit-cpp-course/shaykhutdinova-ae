#pragma once
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;



namespace SolarSystem {

	class Track {

	/*	sf::RenderWindow* window; 
		CircleShape circle;
		Vector2f position;
		Texture texture;
		int rad;*/

	public:
		Track();
		/*Track(int rad) : rad(rad) {};*/
		void update(float ElapsedTime);
		CircleShape GetCircle() /*const=0*/;

		//void MoveClockwise() /*const = 0*/;
		//void StopClockwise() /*const = 0*/;

		//void MoveCounterClockwise() /*const = 0*/;
		//void StopCounterClockwise() /*const = 0*/;
		////Эта функция будет вызываться на каждый кадр

	};

}