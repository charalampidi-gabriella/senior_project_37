/*
 *             Copyright Andrey Semashev 2018.
 * Distributed under the Boost Software License, Version 1.0.
 *    (See accompanying file LICENSE_1_0.txt or copy at
 *          http://www.boost.org/LICENSE_1_0.txt)
 */
/*!
 * \file   file_management_abi.cpp
 * \author Andrey Semashev
 * \date   10.03.2018
 *
 * \brief  This file contains ABI test for file_management.hpp
 */

#include <boost/winapi/file_management.hpp>
#include <windows.h>
#include "abi_test_tools.hpp"

int main()
{
    BOOST_WINAPI_TEST_CONSTANT(INVALID_FILE_SIZE);
    BOOST_WINAPI_TEST_CONSTANT(INVALID_SET_FILE_POINTER);
    BOOST_WINAPI_TEST_CONSTANT(INVALID_FILE_ATTRIBUTES);

    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_READONLY);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_HIDDEN);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_SYSTEM);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_DIRECTORY);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_ARCHIVE);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_DEVICE);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_NORMAL);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_TEMPORARY);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_SPARSE_FILE);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_REPARSE_POINT);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_COMPRESSED);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_OFFLINE);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_NOT_CONTENT_INDEXED);
    BOOST_WINAPI_TEST_CONSTANT(FILE_ATTRIBUTE_ENCRYPTED);

    BOOST_WINAPI_TEST_CONSTANT(CREATE_NEW);
    BOOST_WINAPI_TEST_CONSTANT(CREATE_ALWAYS);
    BOOST_WINAPI_TEST_CONSTANT(OPEN_EXISTING);
    BOOST_WINAPI_TEST_CONSTANT(OPEN_ALWAYS);
    BOOST_WINAPI_TEST_CONSTANT(TRUNCATE_EXISTING);

    BOOST_WINAPI_TEST_CONSTANT(FILE_SHARE_READ);
    BOOST_WINAPI_TEST_CONSTANT(FILE_SHARE_WRITE);
    BOOST_WINAPI_TEST_CONSTANT(FILE_SHARE_DELETE);

    BOOST_WINAPI_TEST_CONSTANT(FILE_BEGIN);
    BOOST_WINAPI_TEST_CONSTANT(FILE_CURRENT);
    BOOST_WINAPI_TEST_CONSTANT(FILE_END);

#if BOOST_WINAPI_PARTITION_DESKTOP || BOOST_WINAPI_PARTITION_SYSTEM
#if !defined(BOOST_NO_ANSI_APIS)
    BOOST_WINAPI_TEST_STRUCT(WIN32_FIND_DATAA, (dwFileAttributes)(ftCreationTime)(ftLastAccessTime)(ftLastWriteTime)(nFileSizeHigh)(nFileSizeLow)(cFileName)(cAlternateFileName));
#endif

    BOOST_WINAPI_TEST_STRUCT(WIN32_FIND_DATAW, (dwFileAttributes)(ftCreationTime)(ftLastAccessTime)(ftLastWriteTime)(nFileSizeHigh)(nFileSizeLow)(cFileName)(cAlternateFileName));
    BOOST_WINAPI_TEST_STRUCT(BY_HANDLE_FILE_INFORMATION, (dwFileAttributes)(ftCreationTime)(ftLastAccessTime)(ftLastWriteTime)(dwVolumeSerialNumber)(nFileSizeHigh)(nFileSizeLow)(nNumberOfLinks)(nFileIndexHigh)(nFileIndexLow));

#if !defined(BOOST_NO_ANSI_APIS)
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(AreFileApisANSI);
#endif

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WINXP
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(SetFileValidData);
#endif
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(LockFile);
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(UnlockFile);
#endif // BOOST_WINAPI_PARTITION_DESKTOP || BOOST_WINAPI_PARTITION_SYSTEM

#if BOOST_WINAPI_PARTITION_APP || BOOST_WINAPI_PARTITION_SYSTEM
#if !defined(BOOST_NO_ANSI_APIS)
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(DeleteFileA);
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(MoveFileExA);
#endif
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(DeleteFileW);
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(MoveFileExW);
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(FindClose);
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(SetEndOfFile);
#endif // BOOST_WINAPI_PARTITION_APP || BOOST_WINAPI_PARTITION_SYSTEM

#if BOOST_WINAPI_PARTITION_APP_SYSTEM
#if !defined(BOOST_NO_ANSI_APIS)
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(GetFileAttributesA);
#endif
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(GetFileAttributesW);
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(SetFilePointer);
#endif // BOOST_WINAPI_PARTITION_APP_SYSTEM

    return boost::report_errors();
}
