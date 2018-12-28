#pragma once
#include <SFML/Graphics.hpp>
#include "Planet.h"

using namespace std;
using namespace sf;



namespace SolarSystem {

	class Mars: virtual public Planet {
	private:
		sf::RenderWindow* window; // ��������� �� ����, ����� ��� ���������
		Sprite circle;
		Vector2f position;
		Vector2f center;
		Vector2f newpos;
		/*Color color;*/
		Texture texture;
		//int rad;
		float _angle;
		float speed;
		//int trackrad;
		bool RightButtonPressed;
		bool LeftButtonPressed;
	public:
		Mars();
		Sprite GetCircle();
		void MoveClockwise();
		void StopClockwise();
		void MoveCounterClockwise();
		void StopCounterClockwise();
		// ��� ������� ����� ���������� �� ������ ����
		void update(float elapsedTime);
	};

}