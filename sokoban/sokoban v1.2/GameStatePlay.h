#ifndef GAME_STATE_PLAY_H
#define GAME_START_PLAY_H

#include <SFML/Graphics.hpp>
#include <vector>

#include "GameState.h"

class GameStatePlay : public GameState {
private:
	sf::View view;
	std::vector<sf::RectangleShape> tilelist;
	sf::RectangleShape Player;
	sf::Texture walltexture;
	sf::Texture playertexture;
	sf::Texture groundtexture;

	void createPlayer();
	void drawMap();
	bool checkMove(int move);
	void moveBox();
	void nextLevel();


public:

	virtual void draw();
	virtual void update();
	virtual void handleInput();
	virtual void handleMovement(sf::Event event);

	GameStatePlay(Gameengine *game);
};

#endif /* GAME_STATE_PLAY_H */
