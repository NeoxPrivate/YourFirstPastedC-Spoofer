#pragma once
#include <windows.h>
#include <memory>
#include <string>
#include <cstdio>
#include <ctime>
#include <iostream>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#pragma comment (lib, "urlmon.lib")
using namespace std;

// Can be usefull for lazy fuckers
struct S_LogType
{
	int Default = 15;
	int Warning = 6;
	int Success = 2;
	int Error = 4;
	int Info = 11;
};

void Log(std::string Message, int LogType);
std::string GetHWID();