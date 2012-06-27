#include "ScreenHandler.h"

ScreenHandler::ScreenHandler()
{
	mGameScreen = 0;
	mMenuScreen = 0;
	mShutDownFlag = false;
}

ScreenHandler::~ScreenHandler()
{
	//delete mGameScreen;
	//delete mMenuScreen;
}

void ScreenHandler::Initialize()
{
	mMenuScreen = new MenuScreen();
	mGameScreen = new GameScreen();
	mScreen = mMenuScreen;
}

bool ScreenHandler::Update() 
{
	mScreen->Update();
	if(mScreen->GetScreenState() != mPrevGameScreenState)
	{
		SwapScreenState(mScreen->GetScreenState());
	}
	return !mShutDownFlag;
}



void ScreenHandler::SwapScreenState(ScreenState lGameScreenState)
{
	if(lGameScreenState == InGame)
		mScreen = mGameScreen;
	//else if(lGameScreenState == EndScreen)
	//	mScreen = mEndScreen;
	else if(lGameScreenState == Menu)
		mScreen = mMenuScreen;
	else if(lGameScreenState == Shutdown)
		mShutDownFlag = true;
	else
		return;
	mScreen->ActivateScreen(lGameScreenState);
	mPrevGameScreenState = mScreen->GetScreenState();
	
}

void ScreenHandler::Render()
{
	mScreen->Render();
}