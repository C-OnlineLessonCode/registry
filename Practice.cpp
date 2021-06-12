#include <iostream>
#include <fstream>
#include <windows.h>

int main() {
    HKEY key;

    LSTATUS status = RegDeleteKeyA(
        HKEY_CLASSES_ROOT,
        "Directory\\Background\\shell\\Notepad"
    );
    /*LSTATUS status = RegCreateKeyA(HKEY_CLASSES_ROOT, "Directory\\Background\\shell\\Notepad\\command", &key);
    if (status != ERROR_SUCCESS) {
        std::cout << "Error" << std::endl;
        return -1;
    }
    const wchar_t executable[] = L"notepad.exe";
    LONG setRes = RegSetValueEx(key, 0, 0, REG_SZ, (LPBYTE)executable, sizeof(executable) + sizeof(L'\0'));*/

   /* if (setRes  != ERROR_SUCCESS) {
        std::cout << "Error" << std::endl;
    }*/
    //RegCloseKey(key);
    return 0;
}
