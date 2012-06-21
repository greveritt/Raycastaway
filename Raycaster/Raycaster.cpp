//Raycaster.cpp
  // compile with: /EHsc /LD

#include "Raycaster.h"
#include <SFML\Graphics.hpp>
using namespace sf;

//definitions for height and width; will change these to passable parameters later
#define WIDTH 800
#define HEIGHT 600

namespace RaycasterDll
{
	//////////////////////////////////////////////////////////////////////
	// Renders vertical lines of increasing redness and decreasing height
	//////////////////////////////////////////////////////////////////////
	
	// just calls testRender function for now.
	void Raycaster::render()
	{
		Raycaster::testRender();
	}

	void Raycaster::testRender()
	{
		RenderWindow App(VideoMode(WIDTH, HEIGHT, 32), "SFML Window Graphics yo"); // create window with desktop settings
		// main loop
		//bool isRunning = true;
		while (App.IsOpened())
		{
			Event Event;
			while (App.GetEvent(Event))
			{
				// Window closed
				if (Event.Type == Event::Closed)
					App.Close();

				// Escape key pressed
				if ((Event.Type == Event::KeyPressed) && (Event.Key.Code == Key::Escape))
					App.Close();
			}
		
			App.Clear();
			for (int i = 0; i < WIDTH; i++)
			{
				App.Draw(Shape::Line(i,0,i,HEIGHT-i,1,Color(std::min(255, i), 0, 0))); 
			}
			//App.Draw(sf::Shape::Line(50,0,50,HEIGHT,1,sf::Color(100, 0, 0))); 
			App.Display();
		}
	}
	int* castRays()
	{
		static int rays[WIDTH];
		for (int i = 0; i < WIDTH; i++)
		{
			//rays[i] = findDistance(i);
		}
		return rays;
	}
}