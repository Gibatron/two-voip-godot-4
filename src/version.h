#pragma once

#define TWOVOIP_MAJOR 1
#define TWOVOIP_MINOR 1
#define TWOVOIP_PATCH 0
#define TWOVOIP_VERSION ((TWOVOIP_MAJOR << (8 * 3)) + (TWOVOIP_MINOR << (8 * 2)) + (TWOVOIP_PATCH << (8 * 1)))

#define _TWOVOIP_VERSION_STR_TEXT(text) #text
#define _TWOVOIP_VERSION_STR(major, minor, patch) _TWOVOIP_VERSION_STR_TEXT(major) "." _TWOVOIP_VERSION_STR_TEXT(minor) "." _TWOVOIP_VERSION_STR_TEXT(patch)
#define TWOVOIP_VERSION_STR _TWOVOIP_VERSION_STR(TWOVOIP_MAJOR, TWOVOIP_MINOR, TWOVOIP_PATCH)
