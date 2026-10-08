
#include "Game.h"
#include <iostream>

Game::Game(sf::RenderWindow& game_window)
  : window(game_window)
{
  srand(time(NULL)); //seeds random number generator with the current time
}

Game::~Game()
{

}

bool Game::init()
{
  in_menu = true;
  character = new sf::Sprite(anima[0]);
  passport = new sf::Sprite(passports[0]);
  return true;
}

void Game::update(float dt)
{
	
}

void Game::render()
{
	if (in_menu == true)
		{

		}
}


void Game::mouseButtonPressed(const sf::Event::MouseButtonPressed* event)
{
	
	sf::Vector2i position = event->position;

	
	if (event->button == sf::Mouse::Button::Left)
	{
		
	}
}


void Game::mouseButtonReleased(const sf::Event::MouseButtonReleased* event)
{
	
	if (event->button == sf::Mouse::Button::Left)
	{
		
	}
}

// Called by event polling when a KeyPressed event is found
void Game::keyPressed(const sf::Event::KeyPressed* event)
{
	// You can tell which button was pressed by the scancode to SFML's definitions of keyboard keys
	if (event->scancode == sf::Keyboard::Scancode::W)
	{
		// W was pressed
	}

}

// Called by event polling when a KeyReleased event is found
void Game::keyReleased(const sf::Event::KeyReleased* event)
{
	// Works the same way as KeyPressed
	if (event->scancode == sf::Keyboard::Scancode::W)
	{
		// W was released
	}

}


