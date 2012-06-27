#ifndef MENUSCREEN_H
#define MENUSCREEN_H

#include "BaseScreen.h"

class MenuScreen : public BaseScreen
{
public:
	MenuScreen();
	virtual ~MenuScreen();

	void Update();
	void Render();
	void ActivateScreen(ScreenState lGameScreenState);
	
private:

private:


};

#endif