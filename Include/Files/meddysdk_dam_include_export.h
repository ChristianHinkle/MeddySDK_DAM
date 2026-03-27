// Copyright (c) 2023-2025 Christian Hinkle, Brian Hinkle.

#ifndef MEDDYSDK_DAM_INCLUDE_EXPORT_H
#define MEDDYSDK_DAM_INCLUDE_EXPORT_H

// Since interface libraries cannot generate header files during their cmake configuration, we author our
// own "export header" file here, which defines the export macros as a noop.

#define MEDDYSDK_DAM_EXPORT
#define MEDDYSDK_DAM_NO_EXPORT

#endif // #ifndef MEDDYSDK_DAM_INCLUDE_EXPORT_H
