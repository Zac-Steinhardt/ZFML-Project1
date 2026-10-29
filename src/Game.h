
#ifndef SFML_GAME_H
#define SFML_GAME_H

#include <SFML/Graphics.hpp>

class Game
{
 public:
  Game(sf::RenderWindow& window);
  ~Game();
  bool init();
  void update(float dt);
  void render();
  void newAnima();
  void dragSprite(sf::Sprite* sprite);
  void mouseButtonPressed(const sf::Event::MouseButtonPressed* event);
  void mouseButtonReleased(const sf::Event::MouseButtonReleased* event);
  void keyPressed(const sf::Event::KeyPressed* event);
  void keyReleased(const sf::Event::KeyReleased* event);

 private:
  sf::RenderWindow& window;
  sf::Sprite* character;
  sf::Sprite* passport;
  sf::Sprite* Accept;
  sf::Sprite* Reject;
  sf::Sprite* Astamp;
  sf::Sprite* Rstamp;
  sf::Texture* anima = new sf::Texture[4];
  sf::Texture* passports = new sf::Texture[4];
  sf::Texture* backgroun = new sf::Texture[3];
  sf::Texture* acept = new sf::Texture;
  sf::Texture* deny = new sf::Texture;
  sf::Texture* asap = new sf::Texture;
  sf::Texture* rsap = new sf::Texture;
  sf::Sprite* background;
  sf::Sprite* dragged = nullptr;
  bool in_menu;
  bool should_accept; 
  bool anima_genetared;
  bool side_menu;
  bool passport_accepted;
  bool passport_rejected;
  sf::Vector2f drag_offset;
};

#endif // SFML_GAME_H
