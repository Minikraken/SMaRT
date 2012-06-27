#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include "BaseScreen.h"

class GameScreen : public BaseScreen
{
public:
	GameScreen();
	virtual ~GameScreen();

	void Update();
	void Render();
	void ActivateScreen(ScreenState lGameScreenState);


private:

private:


};

#endif