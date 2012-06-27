#ifndef SMARTOBJECT_H
#define SMARTOBJECT_H

#include "ScreenHandler.h"
#include "Utilities.h"

class SMaRTObject
{
public:
	SMaRTObject();
	~SMaRTObject();

	void Run();

private:
	void FreeMemory();

private:
	ScreenHandler* mScreenHandler;


};

#endif