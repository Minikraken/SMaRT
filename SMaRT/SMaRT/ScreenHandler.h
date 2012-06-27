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
	void SwapScreenState(ScreenState lGameScreenState);

private:

private:
	BaseScreen* mScreen;
	GameScreen* mGameScreen;
	MenuScreen* mMenuScreen;

	ScreenState mGameScreenState;
	ScreenState mPrevGameScreenState
};

#endif