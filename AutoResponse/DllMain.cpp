#include"AutoResponse.h"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
	if (fdwReason == DLL_PROCESS_ATTACH) {
		DisableThreadLibraryCalls(hinstDLL);
		LoadRegionConfig(hinstDLL);
		AutoResponseHook();
	}
	return TRUE;
}