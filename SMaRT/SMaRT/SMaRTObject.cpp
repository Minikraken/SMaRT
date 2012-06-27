#include "SMaRTObject.h"

SMaRTObject::SMaRTObject()
{
	mScreenHandler = new ScreenHandler();
	mScreenHandler->Initialize();
}

SMaRTObject::~SMaRTObject()
{	
}

void SMaRTObject::Run()
{
	while(mScreenHandler->Update())
	{
		mScreenHandler->Render();
	}
	FreeMemory();
}

void SMaRTObject::FreeMemory()
{
	SAFE_DELETE(mScreenHandler);
}