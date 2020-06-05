#pragma once

int FirstWorld[10][10] = 
			{
				0,0,0,0,0,0,0,0,0,0,
				0,0,0,0,0,0,0,0,0,0,
				0,0,0,0,0,0,0,0,1,0,
				0,0,0,0,0,0,0,0,0,0,
				0,0,0,1,0,0,1,0,0,0,
				0,0,0,0,0,0,0,0,0,0,
				0,0,0,0,0,0,0,0,0,0,
				0,0,0,1,0,0,1,0,0,0,
				0,0,0,0,0,0,0,0,0,0,
				0,1,0,0,0,0,0,0,0,0,
				

			};


class SpriteLoader
{
	
		

	private:

		
		sf::Sprite  m_world;
		
	public:

		void DrawWorld(sf::RenderWindow &app, sf::Texture floor1)
		{
			sf::Texture m_Tlist[1] = {floor1};
			
			for(int i = 0; i < 10; i++)
			{
				for(int j = 0; j < 10; j++)
				{
					m_world.setTexture(m_Tlist[FirstWorld[j][i]]);
					m_world.setPosition(i*32, j*32);
					app.draw(m_world);
				}
			}
		}

		void DrawBuildings(sf::RenderWindow &app, sf::Texture buildingT, sf::Texture empty)
		{
			sf::Texture m_list[2] = {empty,buildingT};

			for(int i = 0; i < 10; i++)
			{
				for(int j = 0; j < 10; j++)
				{
					m_world.setTexture(m_list[FirstWorld[j][i]]);
					m_world.setPosition(i*32, j*32);
					app.draw(m_world);
				}
			}
		}

};