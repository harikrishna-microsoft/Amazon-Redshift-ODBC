#ifndef AWS_SDKUTILS_EXPORTS_H
#define AWS_SDKUTILS_EXPORTS_H

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#if defined(USE_WINDOWS_DLL_SEMANTICS) || defined(WIN32)
#    ifdef AWS_SDKUTILS_USE_IMPORT_EXPORT
#        ifdef AWS_SDKUTILS_EXPORTS
#            define AWS_SDKUTILS_API __declspec(dllexport)
#        else
#            define AWS_SDKUTILS_API __declspec(dllimport)
#        endif /* AWS_SDKUTILS_EXPORTS */
#    else
#        define AWS_SDKUTILS_API
#    endif /*USE_IMPORT_EXPORT */

#else
#    if ((__GNUC__ >= 4) || defined(__clang__)) && defined(AWS_SDKUTILS_USE_IMPORT_EXPORT) &&                          \
        defined(AWS_SDKUTILS_EXPORTS)
#        define AWS_SDKUTILS_API __attribute__((visibility("default")))
#    else
#        define AWS_SDKUTILS_API
#    endif /* __GNUC__ >= 4 || defined(__clang__) */

#endif /* defined(USE_WINDOWS_DLL_SEMANTICS) || defined(WIN32) */

#endif /* AWS_SDKUTILS_EXPORTS_H */
