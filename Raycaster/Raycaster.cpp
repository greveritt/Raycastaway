//Raycaster.cpp
  // compile with: /EHsc /LD

#include <math.h>
#include "Raycaster.h"
#include <SFML\Graphics.hpp>
//#include <stdio.h>

//definitions for height and width; will change these to passable parameters later
#define WIDTH 800
#define HEIGHT 600

namespace RaycasterDll
{
	//////////////////////////////////////////////////////////////////////
	// Renders vertical lines of increasing redness and decreasing height
	//////////////////////////////////////////////////////////////////////
	void Raycaster::render() {
	sf::RenderWindow App(sf::VideoMode(WIDTH, HEIGHT, 32), "SFML Window Graphics yo"); // create window with desktop settings
	// main loop
	//bool isRunning = true;
	while (App.IsOpened())
	{
		sf::Event Event;
		while (App.GetEvent(Event))
		{
			// Window closed
			if (Event.Type == sf::Event::Closed)
				App.Close();

			// Escape key pressed
			if ((Event.Type == sf::Event::KeyPressed) && (Event.Key.Code == sf::Key::Escape))
				App.Close();
		}
		
		App.Clear();
		for (int i = 0; i < WIDTH; i++)
		{
			App.Draw(sf::Shape::Line(i,0,i,HEIGHT-i,1,sf::Color(std::min(255, i), 0, 0))); 
		}
		//App.Draw(sf::Shape::Line(50,0,50,HEIGHT,1,sf::Color(100, 0, 0))); 
		App.Display();
	}
	}
}