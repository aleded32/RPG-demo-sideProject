#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "worldController.h"
#include "player.h"

//global variables

sf::RenderWindow app(sf::VideoMode(320,320), "RPG in works");


sf::Texture buildingT;
sf::Texture floorT;
sf::Texture empty;




//game loop main

int main()
{
	//local variables
	sf::Event e;
	

	Player player;
	Player *pPlayer;
	SpriteLoader spriteloader;
	SpriteLoader *spriteLoader;
	spriteLoader = &spriteloader;
	pPlayer = &player;
	
	buildingT.loadFromFile("building1.png");
	floorT.loadFromFile("floor.png");
	empty.loadFromFile("empty.png");
	

	//gameloop
	while(app.isOpen())
	{
		while(app.pollEvent(e))
		{
			if(e.type == sf::Event::Closed)
			{
				app.close();
			}
		}

		

		app.clear();
	    
		
		spriteLoader -> DrawWorld(app, floorT);
		spriteLoader -> DrawBuildings(app, buildingT, empty);
		
		pPlayer -> playerMovement();
		pPlayer -> DrawPlayer(app);
		app.display();


	}
	return 0;
}