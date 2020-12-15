#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW
#include <iostream>
#include "ConsoleIterator.h"

int main()
{
	ConsoleIterator ictib;
	ictib.InitVork();
	_CrtDumpMemoryLeaks();
	return 0;
}
