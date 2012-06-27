#include "GameScreen.h"


GameScreen::GameScreen()
{

}

GameScreen::~GameScreen()
{

}

void GameScreen::ActivateScreen(ScreenState lGameScreenState)
{
	BaseScreen::ActivateScreen(lGameScreenState);
	std::cout << "GameScreen" << std::endl;
}

void GameScreen::Update()
{
	if (GetAsyncKeyState('1'))
		mGameScreenState = Menu;
}
void GameScreen::Render()
{

}