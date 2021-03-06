#include <Windows.h>
#include <loader.hpp>
#include <string.h>
#include <Shlwapi.h>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);

		return TRUE;
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		return TRUE;
	}

	return FALSE;
}

