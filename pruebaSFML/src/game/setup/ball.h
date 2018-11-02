#ifndef BALL_H
#define BALL_H

#include "SFML/Graphics.hpp"

namespace Juego
{
	class Ball
	{
	private:
		int _x;
		int _y;
		int _speedX;
		int _speedY;
		int _radio;
		bool _active;
		float _defaultMultiplier;
		float _defaultMultiplierHorizontalVertical;
		float _defaultMultiplierDown;
		float _defaultMultiplierUp;
	public:
		Ball();
		Ball(int x, int y, int radio);
		~Ball();
		void setSpeed(int speedX, int speedY);
		int getSpeedX();
		int getSpeedY();
		void setX(int x);
		int getX();
		void setY(int y);
		int getY();
		void setRadio(int radio);
		int getRadio();
		void setActive(bool active);
		bool getActive();
		void setDefaultMultiplier(float setDefaultMultiplier);
		float getDefaultMultiplier();
		void setDefaultMultiplierHorizontalVertical(float defaultMultiplierHorizontalVertical);
		float getDefaultMultiplierHorizontalVertical();
		void setdefaultMultiplierDown(float defaultMultiplierDown);
		float getdefaultMultiplierDown();
		void setdefaultMultiplierUp(float defaultMultiplierUp);
		float getdefaultMultiplierUp();
	};

	/*struct Ball {
		sf::Vector2i position();
		Vector2 speed;
		int radio;
		bool active;
		float defaultMultiplier;
		float defaultMultiplierHorizontalVertical;
		float defaultMultiplierDown;
		float defaultMultiplierUp;
	};*/

	extern Ball ball;

	namespace Gameplay_Section
	{
		void createBall();
		void ballUpdate();
		void ballDraw();
		void ballResetSpeed();
	}
}
#endif // BALL_H
