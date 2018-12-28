#pragma once
#include <SFML/Graphics.hpp>
#include "Planet.h"
using namespace std;
using namespace sf;



namespace SolarSystem {

	class Earth : public Planet {
	
	public:
		Earth();
		Sprite GetCircle() ;
		void MoveClockwise();
		void StopClockwise() ;
		void MoveCounterClockwise() ;
		void StopCounterClockwise() ;
		// ��� ������� ����� ���������� �� ������ ����
		void update(float elapsedTime) ;
	};

}