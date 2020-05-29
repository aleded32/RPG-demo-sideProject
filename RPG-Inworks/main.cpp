#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "worldController.h"

//global variables

sf::RenderWindow app(sf::VideoMode(320,320), "RPG in works");

sf::Texture playerT;
sf::Texture buildingT;
sf::Texture floorT;




//game loop main

int main()
{
	//local variables
	sf::Event e;
	
	SpriteLoader spriteloader;

	SpriteLoader *spriteLoader;
	spriteLoader = &spriteloader;

	
	buildingT.loadFromFile("building1.png");
	floorT.loadFromFile("floor.png");

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
	    
		spriteLoader -> DrawWorld(app,playerT, buildingT,floorT);


		app.display();


	}
	return 0;
}