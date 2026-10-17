// Copyright (c) 2023-2025 Christian Hinkle, Brian Hinkle.

#pragma once

#include <MeddySDK_DAM_Export.h>
#include <filesystem>
#include <ctime>
#include <MeddySDK/Meddydata/Meddydata.h>

namespace rapidjson
{
    template <typename Encoding, typename Allocator, typename StackAllocator>
    class GenericDocument;
}

/**
 *
 */
namespace MeddySDK
{
    template <class Encoding, class Allocator, class StackAllocator>
    void AppendDcmiMetadataJson(const MeddySDK::Meddydata& meddydata, rapidjson::GenericDocument<Encoding, Allocator, StackAllocator>& metadataJsonDocument);

    MEDDYSDK_DAM_EXPORT std::time_t GetFileCreationTime(const std::filesystem::path& path);
}
