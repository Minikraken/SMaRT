#include "SMaRTObject.h"

SMaRTObject::SMaRTObject()
{
	mScreenHandler = new ScreenHandler();
	mScreenHandler->Initialize();
}

SMaRTObject::~SMaRTObject()
{
	delete mScreenHandler;
}

void SMaRTObject::Run()
{
	while(mScreenHandler->Update())
	{
		mScreenHandler->Render();
	}
}