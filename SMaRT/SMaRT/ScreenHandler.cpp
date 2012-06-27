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
	mScreen->Update();
	if(mScreen->GetScreenState() != mPrevGameScreenState)
	{
		SwapScreenState(mScreen->GetScreenState());
	}
}

void ScreenHandler::SwapScreenState(ScreenState lGameScreenState)
{
	if(lGameScreenState == GameScreen)
		mScreen = mGameScreen;
	//else if(lGameScreenState == EndScreen)
	//	mScreen = mEndScreen;
	else if(lGameScreenState == MenuScreen)
		mScreen = mMenuScreen;
	else
		return;
	//mScreen->ActivateScreen(lGameScreenState);
	//mPrevGameScreenState = mScreen->GetScreenState();
	
}