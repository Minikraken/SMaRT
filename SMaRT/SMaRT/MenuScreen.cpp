#include "MenuScreen.h"



MenuScreen::MenuScreen()
{

}

MenuScreen::~MenuScreen()
{

}

void MenuScreen::ActivateScreen(ScreenState lGameScreenState)
{
	BaseScreen::ActivateScreen(lGameScreenState);
	std::cout << "MenuScreen" << std::endl;
}

void MenuScreen::Update()
{
	if (GetAsyncKeyState('2'))
		mGameScreenState = InGame;
}

void MenuScreen::Render()
{

}