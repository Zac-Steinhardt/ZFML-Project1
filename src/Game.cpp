
#include "Game.h"
#include <iostream>
#include <cmath>

Game::Game(sf::RenderWindow& game_window)
  : window(game_window)
{
  srand(time(NULL)); //seeds random number generator with the current time
}

Game::~Game()
{
	delete[] anima;
	delete[] passports;
	delete character;
	delete passport; 
}

bool Game::init()
{
  in_menu = false;

  anima[0].loadFromFile("../Data/Images/Critter Crossing/freddy.png");
  anima[1].loadFromFile("../Data/Images/Critter Crossing/bonnie.png");
  anima[2].loadFromFile("../Data/Images/Critter Crossing/chica.png");
  anima[3].loadFromFile("../Data/Images/Critter Crossing/foxy.png");
  passports[0].loadFromFile("../Data/Images/Critter Crossing/FreddyP.png");
  passports[1].loadFromFile("../Data/Images/Critter Crossing/BonnieP.png");
  passports[2].loadFromFile("../Data/Images/Critter Crossing/ChicaP.png");
  passports[3].loadFromFile("../Data/Images/Critter Crossing/FoxyP.png");
  backgroun[0].loadFromFile("../Data/Images/Critter Crossing/office1.png");
  character = new sf::Sprite(anima[0]);
  passport = new sf::Sprite(passports[0]);
  background = new sf::Sprite(backgroun[0]);
  background->setTexture(backgroun[0]);
  background->setScale({1.6,1.7});
  newAnima();

  return true;
}

void Game::newAnima()
{
	int anima_index = rand() % 4;
	int passport_index = rand() % 4; 

	if (anima_index == passport_index)
	{
		should_accept = true; 
	}
	else
	{
		should_accept = false;
	}

	character->setTexture(anima[anima_index], true);
	character->setScale({ 2.0,2.0 });
	character->setPosition(sf::Vector2f(window.getSize().x / 3.5, window.getSize().y / 12));

	passport->setTexture(passports[passport_index], true);
	passport->setScale({ 0.2,0.2 });
	passport->setPosition(sf::Vector2f(window.getSize().x / 25, window.getSize().y / 2));
	anima_genetared = true;
}

void Game::update(float dt)
{
	
}

void Game::render()
{
	if (in_menu == true)
	{

	}
	else
	{
		window.draw(*background);
		if (anima_genetared == true)
		{
			window.draw(*character);
			window.draw(*passport);
		}
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


