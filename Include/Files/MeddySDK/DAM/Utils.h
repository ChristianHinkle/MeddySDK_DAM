// Copyright (c) 2023-2025 Christian Hinkle, Brian Hinkle.

#pragma once

#include <MeddySDK_DAM_Export.h>
#include <boost/filesystem/path.hpp>

/**
 *
 */
namespace MeddySDK
{
    MEDDYSDK_DAM_EXPORT boost::filesystem::path Thing(
        boost::filesystem::path&& sourceFilePath);
}
