
#pragma once

#include <Atomic/Core/Object.h>

using namespace Atomic;

namespace ToolCore
{

EVENT(E_PROJECTLOADED, ProjectLoaded)
{
    PARAM(P_PROJECTPATH, ProjectPath);    // string
}

EVENT(E_PROJECTUNLOADED, ProjectUnloaded)
{
}

EVENT(E_PLATFORMCHANGED, PlatformChanged)
{
    PARAM(P_PLATFORM, Platform);    // Platform Ptr
}


}
