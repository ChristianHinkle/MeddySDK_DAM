// Copyright (c) 2023-2025 Christian Hinkle, Brian Hinkle.

#pragma once

#include <MeddySDK_DAM_Export.h>
#include <filesystem>

/**
 *
 */
namespace MeddySDK
{
    MEDDYSDK_DAM_EXPORT std::filesystem::path Thing(
        std::filesystem::path&& sourceFilePath);
}
