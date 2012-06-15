// rendering window.cpp : Defines the entry point for the console application.
//
#include <SFML/Graphics.hpp>
//#include "stdafx.h"


int main()
{
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "SFML Window Graphics yo"); // create window with desktop settings
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
		
		App.Clear(sf::Color(78, 32, 148));
		App.Draw(sf::Shape::Line(0.0,0.0,100.0,100.0,0.1,sf::Color(224, 38, 41))); 

		App.Display();
	}
	//std::cin.get();
	return 0;
}

