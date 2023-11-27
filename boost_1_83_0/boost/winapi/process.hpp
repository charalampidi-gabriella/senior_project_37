/*
 * Copyright 2016 Klemens D. Morgenstern
 * Copyright 2016, 2017 Andrey Semashev
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef BOOST_WINAPI_PROCESS_HPP_INCLUDED_
#define BOOST_WINAPI_PROCESS_HPP_INCLUDED_

#include <boost/winapi/config.hpp>
#include <boost/winapi/basic_types.hpp>
#include <boost/winapi/access_rights.hpp>
#include <boost/winapi/get_current_process.hpp>
#include <boost/winapi/get_current_process_id.hpp>
#include <boost/winapi/detail/header.hpp>

#ifdef BOOST_HAS_PRAGMA_ONCE
#pragma once
#endif

#if !defined( BOOST_USE_WINDOWS_H )
extern "C" {

#if BOOST_WINAPI_PARTITION_APP_SYSTEM
struct _PROCESS_INFORMATION;
#if !defined( BOOST_NO_ANSI_APIS )
struct _STARTUPINFOA;
#endif
struct _STARTUPINFOW;
#endif // BOOST_WINAPI_PARTITION_APP_SYSTEM

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6

#if BOOST_WINAPI_PARTITION_DESKTOP_SYSTEM
struct _PROC_THREAD_ATTRIBUTE_LIST;
#endif // BOOST_WINAPI_PARTITION_DESKTOP_SYSTEM

#if BOOST_WINAPI_PARTITION_DESKTOP
#if !defined( BOOST_NO_ANSI_APIS )
struct _STARTUPINFOEXA;
#endif
struct _STARTUPINFOEXW;
#endif // BOOST_WINAPI_PARTITION_DESKTOP

#endif // BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6

#if BOOST_WINAPI_PARTITION_DESKTOP_SYSTEM

#if !defined(_WIN32_WCE)
// On Windows CE ExitProcess is a macro to call TerminateProcess
BOOST_WINAPI_IMPORT BOOST_NORETURN boost::winapi::VOID_ BOOST_WINAPI_WINAPI_CC
ExitProcess(boost::winapi::UINT_ uExitCode);
#endif

BOOST_WINAPI_IMPORT_EXCEPT_WM boost::winapi::BOOL_ BOOST_WINAPI_WINAPI_CC GetExitCodeProcess(
    boost::winapi::HANDLE_ hProcess,
    boost::winapi::LPDWORD_ lpExitCode);

#if !defined( BOOST_NO_ANSI_APIS )
BOOST_WINAPI_IMPORT boost::winapi::BOOL_ BOOST_WINAPI_WINAPI_CC CreateProcessA(
    boost::winapi::LPCSTR_ lpApplicationName,
    boost::winapi::LPSTR_ lpCommandLine,
    ::_SECURITY_ATTRIBUTES* lpProcessAttributes,
    ::_SECURITY_ATTRIBUTES* lpThreadAttributes,
    boost::winapi::INT_ bInheritHandles,
    boost::winapi::DWORD_ dwCreationFlags,
    boost::winapi::LPVOID_ lpEnvironment,
    boost::winapi::LPCSTR_ lpCurrentDirectory,
    ::_STARTUPINFOA* lpStartupInfo,
    ::_PROCESS_INFORMATION* lpProcessInformation);
#endif

#if defined(_WIN32_WCE)
BOOST_WINAPI_IMPORT_EXCEPT_WM boost::winapi::BOOL_ BOOST_WINAPI_WINAPI_CC CreateProcessW(
    boost::winapi::LPCWSTR_ lpApplicationName,
    boost::winapi::LPCWSTR_ lpCommandLine,
    ::_SECURITY_ATTRIBUTES* lpProcessAttributes,
    ::_SECURITY_ATTRIBUTES* lpThreadAttributes,
    boost::winapi::INT_ bInheritHandles,
    boost::winapi::DWORD_ dwCreationFlags,
    boost::winapi::LPVOID_ lpEnvironment,
    boost::winapi::LPWSTR_ lpCurrentDirectory,
    ::_STARTUPINFOW* lpStartupInfo,
    ::_PROCESS_INFORMATION* lpProcessInformation);
#else
BOOST_WINAPI_IMPORT boost::winapi::BOOL_ BOOST_WINAPI_WINAPI_CC CreateProcessW(
    boost::winapi::LPCWSTR_ lpApplicationName,
    boost::winapi::LPWSTR_ lpCommandLine,
    ::_SECURITY_ATTRIBUTES* lpProcessAttributes,
    ::_SECURITY_ATTRIBUTES* lpThreadAttributes,
    boost::winapi::INT_ bInheritHandles,
    boost::winapi::DWORD_ dwCreationFlags,
    boost::winapi::LPVOID_ lpEnvironment,
    boost::winapi::LPCWSTR_ lpCurrentDirectory,
    ::_STARTUPINFOW* lpStartupInfo,
    ::_PROCESS_INFORMATION* lpProcessInformation);
#endif


#endif // BOOST_WINAPI_PARTITION_DESKTOP_SYSTEM

#if BOOST_WINAPI_PARTITION_APP_SYSTEM

BOOST_WINAPI_IMPORT_EXCEPT_WM boost::winapi::HANDLE_ BOOST_WINAPI_WINAPI_CC OpenProcess(
    boost::winapi::DWORD_ dwDesiredAccess,
    boost::winapi::BOOL_ bInheritHandle,
    boost::winapi::DWORD_ dwProcessId);

#if defined(_WIN32_WCE)
BOOST_WINAPI_IMPORT_EXCEPT_WM boost::winapi::BOOL_ BOOST_WINAPI_WINAPI_CC TerminateProcess(
    boost::winapi::HANDLE_ hProcess,
    boost::winapi::DWORD_ uExitCode);
#else
BOOST_WINAPI_IMPORT_EXCEPT_WM boost::winapi::BOOL_ BOOST_WINAPI_WINAPI_CC TerminateProcess(
    boost::winapi::HANDLE_ hProcess,
    boost::winapi::UINT_ uExitCode);
#endif

#endif // BOOST_WINAPI_PARTITION_APP_SYSTEM

} // extern "C"
#endif // defined BOOST_WINDOWS_H

namespace boost {
namespace winapi {

#if defined( BOOST_USE_WINDOWS_H )

#if BOOST_WINAPI_PARTITION_APP_SYSTEM

BOOST_CONSTEXPR_OR_CONST DWORD_ DEBUG_PROCESS_                    = DEBUG_PROCESS;
BOOST_CONSTEXPR_OR_CONST DWORD_ DEBUG_ONLY_THIS_PROCESS_          = DEBUG_ONLY_THIS_PROCESS;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_SUSPENDED_                 = CREATE_SUSPENDED;
BOOST_CONSTEXPR_OR_CONST DWORD_ DETACHED_PROCESS_                 = DETACHED_PROCESS;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_NEW_CONSOLE_               = CREATE_NEW_CONSOLE;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_NEW_PROCESS_GROUP_         = CREATE_NEW_PROCESS_GROUP;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_UNICODE_ENVIRONMENT_       = CREATE_UNICODE_ENVIRONMENT;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_SEPARATE_WOW_VDM_          = CREATE_SEPARATE_WOW_VDM;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_SHARED_WOW_VDM_            = CREATE_SHARED_WOW_VDM;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_FORCEDOS_                  = CREATE_FORCEDOS;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_BREAKAWAY_FROM_JOB_        = CREATE_BREAKAWAY_FROM_JOB;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_DEFAULT_ERROR_MODE_        = CREATE_DEFAULT_ERROR_MODE;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_NO_WINDOW_                 = CREATE_NO_WINDOW;

// Undocumented
BOOST_CONSTEXPR_OR_CONST DWORD_ PROFILE_USER_                     = PROFILE_USER;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROFILE_KERNEL_                   = PROFILE_KERNEL;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROFILE_SERVER_                   = PROFILE_SERVER;

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_PROTECTED_PROCESS_         = CREATE_PROTECTED_PROCESS;
BOOST_CONSTEXPR_OR_CONST DWORD_ EXTENDED_STARTUPINFO_PRESENT_     = EXTENDED_STARTUPINFO_PRESENT;
#endif

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN7
BOOST_CONSTEXPR_OR_CONST DWORD_ INHERIT_PARENT_AFFINITY_          = INHERIT_PARENT_AFFINITY;
#endif

// Only documented for Windows CE
#if defined(UNDER_CE)
BOOST_CONSTEXPR_OR_CONST DWORD_ INHERIT_CALLER_PRIORITY_          = INHERIT_CALLER_PRIORITY;
#endif

#endif // BOOST_WINAPI_PARTITION_APP_SYSTEM

#if BOOST_WINAPI_PARTITION_DESKTOP

BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USESHOWWINDOW_    = STARTF_USESHOWWINDOW;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USESIZE_          = STARTF_USESIZE;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USEPOSITION_      = STARTF_USEPOSITION;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USECOUNTCHARS_    = STARTF_USECOUNTCHARS;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USEFILLATTRIBUTE_ = STARTF_USEFILLATTRIBUTE;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_RUNFULLSCREEN_    = STARTF_RUNFULLSCREEN;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_FORCEONFEEDBACK_  = STARTF_FORCEONFEEDBACK;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_FORCEOFFFEEDBACK_ = STARTF_FORCEOFFFEEDBACK;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USESTDHANDLES_    = STARTF_USESTDHANDLES;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USEHOTKEY_        = STARTF_USEHOTKEY;

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN7
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_TITLEISLINKNAME_  = STARTF_TITLEISLINKNAME;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_TITLEISAPPID_     = STARTF_TITLEISAPPID;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_PREVENTPINNING_   = STARTF_PREVENTPINNING;
#endif

#endif // BOOST_WINAPI_PARTITION_DESKTOP

BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_TERMINATE_ = PROCESS_TERMINATE;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_CREATE_THREAD_ = PROCESS_CREATE_THREAD;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_SET_SESSIONID_ = PROCESS_SET_SESSIONID;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_VM_OPERATION_ = PROCESS_VM_OPERATION;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_VM_READ_ = PROCESS_VM_READ;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_VM_WRITE_ = PROCESS_VM_WRITE;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_DUP_HANDLE_ = PROCESS_DUP_HANDLE;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_CREATE_PROCESS_ = PROCESS_CREATE_PROCESS;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_SET_QUOTA_ = PROCESS_SET_QUOTA;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_SET_INFORMATION_ = PROCESS_SET_INFORMATION;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_QUERY_INFORMATION_ = PROCESS_QUERY_INFORMATION;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_SUSPEND_RESUME_ = PROCESS_SUSPEND_RESUME;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_ALL_ACCESS_ = PROCESS_ALL_ACCESS;

#else // defined( BOOST_USE_WINDOWS_H )

#if BOOST_WINAPI_PARTITION_APP_SYSTEM

BOOST_CONSTEXPR_OR_CONST DWORD_ DEBUG_PROCESS_                    = 0x1;
BOOST_CONSTEXPR_OR_CONST DWORD_ DEBUG_ONLY_THIS_PROCESS_          = 0x2;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_SUSPENDED_                 = 0x4;
BOOST_CONSTEXPR_OR_CONST DWORD_ DETACHED_PROCESS_                 = 0x8;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_NEW_CONSOLE_               = 0x10;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_NEW_PROCESS_GROUP_         = 0x200;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_UNICODE_ENVIRONMENT_       = 0x400;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_SEPARATE_WOW_VDM_          = 0x800;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_SHARED_WOW_VDM_            = 0x1000;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_FORCEDOS_                  = 0x2000;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_BREAKAWAY_FROM_JOB_        = 0x1000000;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_DEFAULT_ERROR_MODE_        = 0x4000000;
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_NO_WINDOW_                 = 0x8000000;

// Undocumented
BOOST_CONSTEXPR_OR_CONST DWORD_ PROFILE_USER_                     = 0x10000000;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROFILE_KERNEL_                   = 0x20000000;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROFILE_SERVER_                   = 0x40000000;

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_PROTECTED_PROCESS_         = 0x40000;
BOOST_CONSTEXPR_OR_CONST DWORD_ EXTENDED_STARTUPINFO_PRESENT_     = 0x80000;
#endif

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN7
BOOST_CONSTEXPR_OR_CONST DWORD_ INHERIT_PARENT_AFFINITY_          = 0x10000;
#endif

// Only documented for Windows CE
#if defined(UNDER_CE)
BOOST_CONSTEXPR_OR_CONST DWORD_ INHERIT_CALLER_PRIORITY_          = 0x20000;
#endif

#endif // BOOST_WINAPI_PARTITION_APP_SYSTEM

#if BOOST_WINAPI_PARTITION_DESKTOP

BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USESHOWWINDOW_    = 0x00000001;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USESIZE_          = 0x00000002;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USEPOSITION_      = 0x00000004;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USECOUNTCHARS_    = 0x00000008;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USEFILLATTRIBUTE_ = 0x00000010;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_RUNFULLSCREEN_    = 0x00000020;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_FORCEONFEEDBACK_  = 0x00000040;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_FORCEOFFFEEDBACK_ = 0x00000080;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USESTDHANDLES_    = 0x00000100;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_USEHOTKEY_        = 0x00000200;

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN7
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_TITLEISLINKNAME_  = 0x00000800;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_TITLEISAPPID_     = 0x00001000;
BOOST_CONSTEXPR_OR_CONST DWORD_ STARTF_PREVENTPINNING_   = 0x00002000;
#endif

#endif // BOOST_WINAPI_PARTITION_DESKTOP

BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_TERMINATE_ = 0x0001;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_CREATE_THREAD_ = 0x0002;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_SET_SESSIONID_ = 0x0004;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_VM_OPERATION_ = 0x0008;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_VM_READ_ = 0x0010;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_VM_WRITE_ = 0x0020;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_DUP_HANDLE_ = 0x0040;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_CREATE_PROCESS_ = 0x0080;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_SET_QUOTA_ = 0x0100;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_SET_INFORMATION_ = 0x0200;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_QUERY_INFORMATION_ = 0x0400;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_SUSPEND_RESUME_ = 0x0800;
BOOST_CONSTEXPR_OR_CONST DWORD_ PROCESS_ALL_ACCESS_ = (STANDARD_RIGHTS_REQUIRED_ | SYNCHRONIZE_ |
#if BOOST_USE_NTDDI_VERSION >= BOOST_WINAPI_NTDDI_WIN6
    0xFFFF
#else
    0x0FFF
#endif
);

#endif // defined( BOOST_USE_WINDOWS_H )

#if BOOST_WINAPI_PARTITION_APP_SYSTEM

#if defined( BOOST_USE_WINDOWS_H ) && !defined( BOOST_WINAPI_IS_MINGW )

BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_PRESERVE_CODE_AUTHZ_LEVEL_ = CREATE_PRESERVE_CODE_AUTHZ_LEVEL;

// Undocumented
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_IGNORE_SYSTEM_DEFAULT_     = CREATE_IGNORE_SYSTEM_DEFAULT;

#else // defined( BOOST_USE_WINDOWS_H ) && !defined( BOOST_WINAPI_IS_MINGW )

BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_PRESERVE_CODE_AUTHZ_LEVEL_ = 0x2000000;

// Undocumented
BOOST_CONSTEXPR_OR_CONST DWORD_ CREATE_IGNORE_SYSTEM_DEFAULT_     = 0x80000000;

#endif // defined( BOOST_USE_WINDOWS_H ) && !defined( BOOST_WINAPI_IS_MINGW )

#endif // BOOST_WINAPI_PARTITION_APP_SYSTEM

#if BOOST_WINAPI_PARTITION_APP_SYSTEM

typedef struct BOOST_MAY_ALIAS _PROCESS_INFORMATION {
    HANDLE_ hProcess;
    HANDLE_ hThread;
    DWORD_ dwProcessId;
    DWORD_ dwThreadId;
} PROCESS_INFORMATION_, *PPROCESS_INFORMATION_, *LPPROCESS_INFORMATION_;

#if !defined(BOOST_NO_ANSI_APIS)
typedef struct BOOST_MAY_ALIAS _STARTUPINFOA {
    DWORD_ cb;
    LPSTR_ lpReserved;
    LPSTR_ lpDesktop;
    LPSTR_ lpTitle;
    DWORD_ dwX;
    DWORD_ dwY;
    DWORD_ dwXSize;
    DWORD_ dwYSize;
    DWORD_ dwXCountChars;
    DWORD_ dwYCountChars;
    DWORD_ dwFillAttribute;
    DWORD_ dwFlags;
    WORD_ wShowWindow;
    WORD_ cbReserved2;
    LPBYTE_ lpReserved2;
    HANDLE_ hStdInput;
    HANDLE_ hStdOutput;
    HANDLE_ hStdError;
} STARTUPINFOA_, *LPSTARTUPINFOA_;
#endif // !defined(BOOST_NO_ANSI_APIS)

typedef struct BOOST_MAY_ALIAS _STARTUPINFOW {
    DWORD_ cb;
    LPWSTR_ lpReserved;
    LPWSTR_ lpDesktop;
    LPWSTR_ lpTitle;
    DWORD_ dwX;
    DWORD_ dwY;
    DWORD_ dwXSize;
    DWORD_ dwYSize;
    DWORD_ dwXCountChars;
    DWORD_ dwYCountChars;
    DWORD_ dwFillAttribute;
    DWORD_ dwFlags;
    WORD_ wShowWindow;
    WORD_ cbReserved2;
    LPBYTE_ lpReserved2;
    HANDLE_ hStdInput;
    HANDLE_ hStdOutput;
    HANDLE_ hStdError;
} STARTUPINFOW_, *LPSTARTUPINFOW_;

#endif // BOOST_WINAPI_PARTITION_APP_SYSTEM

#if BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6

#if BOOST_WINAPI_PARTITION_DESKTOP_SYSTEM
typedef struct _PROC_THREAD_ATTRIBUTE_LIST PROC_THREAD_ATTRIBUTE_LIST_, *PPROC_THREAD_ATTRIBUTE_LIST_;
#endif // BOOST_WINAPI_PARTITION_DESKTOP_SYSTEM

#if BOOST_WINAPI_PARTITION_DESKTOP

#if !defined(BOOST_NO_ANSI_APIS)
typedef struct BOOST_MAY_ALIAS _STARTUPINFOEXA {
    STARTUPINFOA_ StartupInfo;
    PPROC_THREAD_ATTRIBUTE_LIST_ lpAttributeList;
} STARTUPINFOEXA_, *LPSTARTUPINFOEXA_;
#endif // !defined(BOOST_NO_ANSI_APIS)

typedef struct BOOST_MAY_ALIAS _STARTUPINFOEXW {
    STARTUPINFOW_ StartupInfo;
    PPROC_THREAD_ATTRIBUTE_LIST_ lpAttributeList;
} STARTUPINFOEXW_, *LPSTARTUPINFOEXW_;

#endif // BOOST_WINAPI_PARTITION_DESKTOP

#endif // BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6

#if BOOST_WINAPI_PARTITION_APP_SYSTEM

using ::TerminateProcess;
using ::OpenProcess;

#endif // BOOST_WINAPI_PARTITION_APP_SYSTEM

#if BOOST_WINAPI_PARTITION_DESKTOP_SYSTEM

using ::GetExitCodeProcess;
#if !defined(_WIN32_WCE)
using ::ExitProcess;
#endif

BOOST_FORCEINLINE BOOST_NORETURN boost::winapi::VOID_ exit_process(
    boost::winapi::UINT_ uExitCode)
{
#if !defined(_WIN32_WCE)
    ExitProcess(uExitCode);
#else
    // ExitProcess macro in Windows CE and Windows Mobile SDKs actually does this
    TerminateProcess(GetCurrentProcess(), (uExitCode));
#endif
}

#if !defined( BOOST_NO_ANSI_APIS )
BOOST_FORCEINLINE BOOL_ CreateProcessA(
    LPCSTR_ lpApplicationName,
    LPSTR_ lpCommandLine,
    LPSECURITY_ATTRIBUTES_ lpProcessAttributes,
    LPSECURITY_ATTRIBUTES_ lpThreadAttributes,
    INT_ bInheritHandles,
    DWORD_ dwCreationFlags,
    LPVOID_ lpEnvironment,
    LPCSTR_ lpCurrentDirectory,
    LPSTARTUPINFOA_ lpStartupInfo,
    LPPROCESS_INFORMATION_ lpProcessInformation)
{
    return ::CreateProcessA(
        lpApplicationName,
        lpCommandLine,
        reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpProcessAttributes),
        reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpThreadAttributes),
        bInheritHandles,
        dwCreationFlags,
        lpEnvironment,
        lpCurrentDirectory,
        reinterpret_cast< ::_STARTUPINFOA* >(lpStartupInfo),
        reinterpret_cast< ::_PROCESS_INFORMATION* >(lpProcessInformation));
}

BOOST_FORCEINLINE BOOL_ create_process(
    LPCSTR_ lpApplicationName,
    LPSTR_ lpCommandLine,
    LPSECURITY_ATTRIBUTES_ lpProcessAttributes,
    LPSECURITY_ATTRIBUTES_ lpThreadAttributes,
    INT_ bInheritHandles,
    DWORD_ dwCreationFlags,
    LPVOID_ lpEnvironment,
    LPCSTR_ lpCurrentDirectory,
    LPSTARTUPINFOA_ lpStartupInfo,
    LPPROCESS_INFORMATION_ lpProcessInformation)
{
    return ::CreateProcessA(
        lpApplicationName,
        lpCommandLine,
        reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpProcessAttributes),
        reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpThreadAttributes),
        bInheritHandles,
        dwCreationFlags,
        lpEnvironment,
        lpCurrentDirectory,
        reinterpret_cast< ::_STARTUPINFOA* >(lpStartupInfo),
        reinterpret_cast< ::_PROCESS_INFORMATION* >(lpProcessInformation));
}
#endif

BOOST_FORCEINLINE BOOL_ CreateProcessW(
    LPCWSTR_ lpApplicationName,
    LPWSTR_ lpCommandLine,
    LPSECURITY_ATTRIBUTES_ lpProcessAttributes,
    LPSECURITY_ATTRIBUTES_ lpThreadAttributes,
    INT_ bInheritHandles,
    DWORD_ dwCreationFlags,
    LPVOID_ lpEnvironment,
    LPCWSTR_ lpCurrentDirectory,
    LPSTARTUPINFOW_ lpStartupInfo,
    LPPROCESS_INFORMATION_ lpProcessInformation)
{
    return ::CreateProcessW(
        lpApplicationName,
        lpCommandLine,
        reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpProcessAttributes),
        reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpThreadAttributes),
        bInheritHandles,
        dwCreationFlags,
        lpEnvironment,
#if defined(_WIN32_WCE)
        const_cast<LPWSTR_>(lpCurrentDirectory),
#else
        lpCurrentDirectory,
#endif
        reinterpret_cast< ::_STARTUPINFOW* >(lpStartupInfo),
        reinterpret_cast< ::_PROCESS_INFORMATION* >(lpProcessInformation));
}

BOOST_FORCEINLINE BOOL_ create_process(
    LPCWSTR_ lpApplicationName,
    LPWSTR_ lpCommandLine,
    LPSECURITY_ATTRIBUTES_ lpProcessAttributes,
    LPSECURITY_ATTRIBUTES_ lpThreadAttributes,
    INT_ bInheritHandles,
    DWORD_ dwCreationFlags,
    LPVOID_ lpEnvironment,
    LPCWSTR_ lpCurrentDirectory,
    LPSTARTUPINFOW_ lpStartupInfo,
    LPPROCESS_INFORMATION_ lpProcessInformation)
{
    return ::CreateProcessW(
        lpApplicationName,
        lpCommandLine,
        reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpProcessAttributes),
        reinterpret_cast< ::_SECURITY_ATTRIBUTES* >(lpThreadAttributes),
        bInheritHandles,
        dwCreationFlags,
        lpEnvironment,
#if defined(_WIN32_WCE)
        const_cast<LPWSTR_>(lpCurrentDirectory),
#else
        lpCurrentDirectory,
#endif
        reinterpret_cast< ::_STARTUPINFOW* >(lpStartupInfo),
        reinterpret_cast< ::_PROCESS_INFORMATION* >(lpProcessInformation));
}

#endif // BOOST_WINAPI_PARTITION_DESKTOP_SYSTEM

}
}

#include <boost/winapi/detail/footer.hpp>

#endif // BOOST_WINAPI_PROCESS_HPP_INCLUDED_
