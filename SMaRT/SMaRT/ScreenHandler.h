#ifndef SCREENHANDLER_H
#define SCREENHANDLER_H

#include "BaseScreen.h"
#include "GameScreen.h"
#include "MenuScreen.h"

class ScreenHandler
{
public:
	ScreenHandler();
	virtual ~ScreenHandler();

	void Update();
	void SwapScreenState();

private:

private:
	BaseScreen* mBaseScreen;
	GameScreen* mGameScreen;
	MenuScreen* mMenuScreen;

};

#endif