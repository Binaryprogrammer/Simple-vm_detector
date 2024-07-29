#include <Windows.h>


void vmdetect() {

	MessageBox(NULL, L"Defenitly not a Malware", L"Malware", MB_OK);


}

void execute() {

	MessageBox(NULL, L"You have been hacked :)",L"Malware", MB_OK);


}

int main()
{
	HKEY hKey;
	LONG result;

	const char* keyPath = "SYSTEM:\\CurrentControlSet\\Services\\VboxGuest";
	result = RegOpenKeyExA(HKEY_LOCAL_MACHINE, keyPath, 0, KEY_READ, &hKey);


	if (result == ERROR_SUCCESS) {

		vmdetect();
		RegCloseKey(hKey);
	}

	else {

		execute();

	}



	return 0;



}