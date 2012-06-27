#include "BaseScreen.h"

BaseScreen::BaseScreen()
{

}

BaseScreen::~BaseScreen()
{

}

void BaseScreen::ActivateScreen(ScreenState lGameScreenState)
{
	mGameScreenState = lGameScreenState;
}