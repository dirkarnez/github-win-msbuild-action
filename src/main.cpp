#ifndef UNICODE
#define UNICODE
#endif

#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;
int main()
{
	SYSTEM_INFO systemInfo;
	GetSystemInfo(&systemInfo);
	cout << setw(20) << "dwActiveProcessorMask: " << systemInfo.dwActiveProcessorMask << endl;
	cout << setw(20) << "dwNumberOfProcessors: " << systemInfo.dwNumberOfProcessors << endl;
	cout << setw(20) << "dwPageSize: " << systemInfo.dwPageSize << endl;
	cout << setw(20) << "dwProcessorType: " << systemInfo.dwProcessorType << endl;
	cout << setw(20) << "lpMaximumApplicationAddress: " << systemInfo.lpMaximumApplicationAddress << endl;
	cout << setw(20) << "lpMinimumApplicationAddress: " << systemInfo.lpMinimumApplicationAddress << endl;
	cout << setw(20) << "wProcessorLevel: " << systemInfo.wProcessorLevel << endl;
	cout << setw(20) << "wProcessorRevision: " << systemInfo.wProcessorRevision << endl;
	return 0;
}