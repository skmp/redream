#ifndef FILES_H
#define FILES_H

#include "core/platform.h"

#ifdef PLATFORM_WINDOWS

#include <windows.h>
#include <direct.h>
#include <windows.h>

#define PATH_SEPARATOR "\\"
#define PATH_MAX MAX_PATH

#else

#include <limits.h>

#define PATH_SEPARATOR "/"

#endif

namespace dreavm {
namespace sys {

const char *GetAppDir();
void EnsureAppDirExists();

void DirName(const char *path, char *dir, size_t size);
void BaseName(const char *path, char *base, size_t size);

bool Exists(const char *path);
bool CreateDir(const char *path);
}
}

#endif