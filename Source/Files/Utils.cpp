// Copyright (c) 2023-2025 Christian Hinkle, Brian Hinkle.

#include <MeddySDK/DAM/Utils.h>

#include <filesystem>
#include <cstdlib>
#include <cassert>
#include <boost/filesystem/operations.hpp>

std::time_t MeddySDK::GetFileCreationTime(const std::filesystem::path& p)
{
    // [boost] We use Boost.Filesystem to get this for us.
    return boost::filesystem::creation_time(boost::filesystem::path{p});
}
