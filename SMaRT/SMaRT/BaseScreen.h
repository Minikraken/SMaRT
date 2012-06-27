#include <iostream>
#include <Windows.h>

#ifndef BASESCREEN_H
#define BASESCREEN_H
enum ScreenState {Menu, InGame, End, Shutdown};


class BaseScreen
{
public:
	BaseScreen();
	virtual ~BaseScreen();
	
	virtual void Update() = 0;
	virtual void Render() = 0;
	void virtual ActivateScreen(ScreenState lGameScreenState);

	ScreenState GetScreenState() const
	{
		return mGameScreenState;
	}
	
private:

private:

protected:
	ScreenState mGameScreenState;

};

#endif