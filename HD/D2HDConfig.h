#include <Windows.h>
#include <string>
#include <sstream>
#include "D2HDStructs.h"
#include "../D2Vars.h"

#pragma once

namespace Config {
    void ReadConfig();
    void ReadMainSettings(std::string path);
    void ReadExperimentalSettings(std::string path);
}