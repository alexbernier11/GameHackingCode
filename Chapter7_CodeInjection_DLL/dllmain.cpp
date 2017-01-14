#include <windows.h>


DWORD WINAPI runBot(LPVOID lpParam) {
    


	int index1 = GetCurrentProcessId();
	char buf[10];
	char* d = &buf[0];
	itoa(index1, d, 10);
	MessageBoxA(NULL, buf, "l33t", MB_OK);

    return 1;
}


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		MessageBoxA(NULL, "DLL Attached!\n", "Game Hacking", MB_OK | MB_TOPMOST);
		CreateThread(NULL, 0, &runBot, NULL, 0, NULL); 
		break;
	}
	return TRUE;
}
