#include "ScreenHandler.h"

ScreenHandler::ScreenHandler()
{
	mGameScreen = NULL;
	mMenuScreen = NULL;
}

ScreenHandler::~ScreenHandler()
{
	delete mGameScreen;
	delete mMenuScreen;
}

void ScreenHandler::Update()
{

}

void ScreenHandler::SwapState()
{

}