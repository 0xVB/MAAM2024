#include <Windows.h>
#include "mods/mods.hpp"

LunaHookThread* lt;
BOOL _DBG = FALSE;
BOOL APIENTRY DllMain
(
    HMODULE modHandle,
    DWORD  callReason,
    LPVOID lpReserved
)
{
    if (callReason != DLL_PROCESS_ATTACH) return TRUE;

    if (_DBG)
    {
        AllocConsole();

        FILE* DIN;
        FILE* DOUT;
        FILE* DERR;
        freopen_s(&DIN, "CONIN", "r", stdin);
        freopen_s(&DOUT, "CONOUT$", "w", stdout);
        freopen_s(&DERR, "CONOUT$", "w", stderr);
    }

    lt = LunaHookThread::New();
    mods::Vinesweeper(lt);

    return TRUE;
}

