#pragma once

class Player 
{

	private:

		sf::Texture playerT;
		float x;
		float y;
		sf::Sprite mPlayer;
		float pSpeed;

	public:

		Player()
		{
			x = 50;
			y = 5*32;	
			mPlayer.setPosition(x,y);
			pSpeed = 0.25;
			
		}

		Player::~Player(){}

		void DrawPlayer(sf::RenderWindow &app)
		{
			playerT.loadFromFile("player1.png");
			mPlayer.setTexture(playerT);
			app.draw(mPlayer);
		}

		void playerMovement()
		{

			if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			{
				y -= pSpeed;
			}
			else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			{
				y += pSpeed;
			}
			else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			{
				x += pSpeed;
			}
			else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			{
				x -= pSpeed;
			}
				mPlayer.setPosition(x,y);
		}

};