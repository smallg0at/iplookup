// Ip Lookup
// Copyright (c) 2011-2016 Henry++

#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include "resource.h"

// config
#define APP_NAME L"Ip Lookup"
#define APP_NAME_SHORT L"iplookup"
#define APP_VERSION L"1.6"
#define APP_VERSION_RES 1,6
#define APP_COPYRIGHT L"(c) 2011-2016 " _APP_AUTHOR L". All Rights Reserved."

// libs
#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "ws2_32.lib")

#define EXTERNAL_URL L"https://api.ipify.org/?format=text" 

#endif // __MAIN_H__
