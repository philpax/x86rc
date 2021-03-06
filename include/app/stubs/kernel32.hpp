// clang-format off
#pragma once

#include "util.hpp"
#include "x86/memory_view.hpp"
#include "x86/thread_state.hpp"

namespace app {

APP_UNIMPLEMENTED_STUB(VirtualQuery);
APP_UNIMPLEMENTED_STUB(IsBadCodePtr);
APP_UNIMPLEMENTED_STUB(GetCurrentProcessId);
APP_UNIMPLEMENTED_STUB(SetEndOfFile);
APP_UNIMPLEMENTED_STUB(SetStdHandle);
APP_UNIMPLEMENTED_STUB(FlushFileBuffers);
APP_UNIMPLEMENTED_STUB(GetStringTypeW);
APP_UNIMPLEMENTED_STUB(GetStringTypeA);
APP_UNIMPLEMENTED_STUB(IsValidCodePage);
APP_UNIMPLEMENTED_STUB(IsValidLocale);
APP_UNIMPLEMENTED_STUB(EnumSystemLocalesA);
APP_UNIMPLEMENTED_STUB(CompareStringA);
APP_UNIMPLEMENTED_STUB(CompareStringW);
APP_UNIMPLEMENTED_STUB(SetEnvironmentVariableA);
APP_UNIMPLEMENTED_STUB(IsDebuggerPresent);
APP_UNIMPLEMENTED_STUB(DebugBreak);
APP_UNIMPLEMENTED_STUB(GetLocaleInfoW);
APP_UNIMPLEMENTED_STUB(GetExitCodeThread);
APP_UNIMPLEMENTED_STUB(GetLocaleInfoA);
APP_UNIMPLEMENTED_STUB(GetUserDefaultLCID);
APP_UNIMPLEMENTED_STUB(LCMapStringW);
APP_UNIMPLEMENTED_STUB(LCMapStringA);
APP_UNIMPLEMENTED_STUB(SetUnhandledExceptionFilter);
APP_UNIMPLEMENTED_STUB(GetCPInfo);
APP_UNIMPLEMENTED_STUB(GetOEMCP);
APP_UNIMPLEMENTED_STUB(GetACP);
APP_UNIMPLEMENTED_STUB(HeapSize);
APP_UNIMPLEMENTED_STUB(HeapReAlloc);
APP_UNIMPLEMENTED_STUB(HeapCreate);
APP_UNIMPLEMENTED_STUB(HeapDestroy);
APP_UNIMPLEMENTED_STUB(TlsAlloc);
APP_UNIMPLEMENTED_STUB(SetLastError);
APP_UNIMPLEMENTED_STUB(TlsFree);
APP_UNIMPLEMENTED_STUB(GetStartupInfoA);
APP_UNIMPLEMENTED_STUB(SetHandleCount);
APP_UNIMPLEMENTED_STUB(GetEnvironmentStringsW);
APP_UNIMPLEMENTED_STUB(FreeEnvironmentStringsW);
APP_UNIMPLEMENTED_STUB(GetEnvironmentStrings);
APP_UNIMPLEMENTED_STUB(FreeEnvironmentStringsA);
APP_UNIMPLEMENTED_STUB(UnhandledExceptionFilter);
APP_UNIMPLEMENTED_STUB(GetStdHandle);
APP_UNIMPLEMENTED_STUB(IsBadWritePtr);
APP_UNIMPLEMENTED_STUB(IsBadReadPtr);
APP_UNIMPLEMENTED_STUB(GetLastError);
APP_UNIMPLEMENTED_STUB(QueryPerformanceFrequency);
APP_UNIMPLEMENTED_STUB(QueryPerformanceCounter);
APP_UNIMPLEMENTED_STUB(FindClose);
APP_UNIMPLEMENTED_STUB(FindNextFileA);
APP_UNIMPLEMENTED_STUB(FindFirstFileA);
APP_UNIMPLEMENTED_STUB(CreateDirectoryA);
APP_UNIMPLEMENTED_STUB(MultiByteToWideChar);
APP_UNIMPLEMENTED_STUB(GetModuleFileNameA);
APP_UNIMPLEMENTED_STUB(GetModuleHandleA);
APP_UNIMPLEMENTED_STUB(GetLongPathNameA);
APP_UNIMPLEMENTED_STUB(SetErrorMode);
APP_UNIMPLEMENTED_STUB(CloseHandle);
APP_UNIMPLEMENTED_STUB(Process32Next);
APP_UNIMPLEMENTED_STUB(Process32First);
APP_UNIMPLEMENTED_STUB(Sleep);
APP_UNIMPLEMENTED_STUB(CreateToolhelp32Snapshot);
APP_UNIMPLEMENTED_STUB(SuspendThread);
APP_UNIMPLEMENTED_STUB(ResumeThread);
APP_UNIMPLEMENTED_STUB(GetDriveTypeA);
APP_UNIMPLEMENTED_STUB(GetLogicalDrives);
APP_UNIMPLEMENTED_STUB(GetVersionExA);
APP_UNIMPLEMENTED_STUB(OutputDebugStringA);
APP_UNIMPLEMENTED_STUB(SetProcessAffinityMask);
APP_UNIMPLEMENTED_STUB(SetThreadPriority);
APP_UNIMPLEMENTED_STUB(SetPriorityClass);
APP_UNIMPLEMENTED_STUB(GetProcessAffinityMask);
APP_UNIMPLEMENTED_STUB(GetThreadPriority);
APP_UNIMPLEMENTED_STUB(GetPriorityClass);
APP_UNIMPLEMENTED_STUB(GetCurrentThread);
APP_UNIMPLEMENTED_STUB(GetCurrentProcess);
APP_UNIMPLEMENTED_STUB(FreeLibrary);
APP_UNIMPLEMENTED_STUB(GetProcAddress);
APP_UNIMPLEMENTED_STUB(LoadLibraryA);
APP_UNIMPLEMENTED_STUB(WideCharToMultiByte);
APP_UNIMPLEMENTED_STUB(GetSystemInfo);
APP_UNIMPLEMENTED_STUB(IsProcessorFeaturePresent);
APP_UNIMPLEMENTED_STUB(EnterCriticalSection);
APP_UNIMPLEMENTED_STUB(InterlockedExchange);
APP_UNIMPLEMENTED_STUB(InitializeCriticalSection);
APP_UNIMPLEMENTED_STUB(InterlockedCompareExchange);
APP_UNIMPLEMENTED_STUB(DeleteCriticalSection);
APP_UNIMPLEMENTED_STUB(LeaveCriticalSection);
APP_UNIMPLEMENTED_STUB(GetFullPathNameA);
APP_UNIMPLEMENTED_STUB(MapViewOfFile);
APP_UNIMPLEMENTED_STUB(GetFileSize);
APP_UNIMPLEMENTED_STUB(CreateFileMappingA);
APP_UNIMPLEMENTED_STUB(CreateFileA);
APP_UNIMPLEMENTED_STUB(CreateFileW);
APP_UNIMPLEMENTED_STUB(UnmapViewOfFile);
APP_UNIMPLEMENTED_STUB(LockResource);
APP_UNIMPLEMENTED_STUB(LoadResource);
APP_UNIMPLEMENTED_STUB(SizeofResource);
APP_UNIMPLEMENTED_STUB(FindResourceA);
APP_UNIMPLEMENTED_STUB(FindResourceW);
APP_UNIMPLEMENTED_STUB(VirtualFree);
APP_UNIMPLEMENTED_STUB(VirtualAlloc);
APP_UNIMPLEMENTED_STUB(lstrcmpiA);
APP_UNIMPLEMENTED_STUB(DuplicateHandle);
APP_UNIMPLEMENTED_STUB(GetCurrentThreadId);
APP_UNIMPLEMENTED_STUB(TerminateThread);
APP_UNIMPLEMENTED_STUB(SleepEx);
APP_UNIMPLEMENTED_STUB(GetTickCount);
APP_UNIMPLEMENTED_STUB(CreateEventA);
APP_UNIMPLEMENTED_STUB(SetEvent);
APP_UNIMPLEMENTED_STUB(WaitForSingleObject);
APP_UNIMPLEMENTED_STUB(ResetEvent);
APP_UNIMPLEMENTED_STUB(GetCurrentDirectoryA);
APP_UNIMPLEMENTED_STUB(WriteFile);
APP_UNIMPLEMENTED_STUB(SetFilePointer);
APP_UNIMPLEMENTED_STUB(DeleteFileA);
APP_UNIMPLEMENTED_STUB(MoveFileA);
APP_UNIMPLEMENTED_STUB(ReadFile);
APP_UNIMPLEMENTED_STUB(GetDiskFreeSpaceExA);
APP_UNIMPLEMENTED_STUB(GlobalAlloc);
APP_UNIMPLEMENTED_STUB(GlobalFree);
APP_UNIMPLEMENTED_STUB(VirtualProtect);
APP_UNIMPLEMENTED_STUB(CreateThread);
APP_UNIMPLEMENTED_STUB(CreateMutexA);
APP_UNIMPLEMENTED_STUB(ReleaseMutex);
APP_UNIMPLEMENTED_STUB(HeapFree);
APP_UNIMPLEMENTED_STUB(GetProcessHeap);
APP_UNIMPLEMENTED_STUB(HeapAlloc);
APP_UNIMPLEMENTED_STUB(WaitCommEvent);
APP_UNIMPLEMENTED_STUB(GetOverlappedResult);
APP_UNIMPLEMENTED_STUB(SetCommMask);
APP_UNIMPLEMENTED_STUB(WaitForMultipleObjects);
APP_UNIMPLEMENTED_STUB(PurgeComm);
APP_UNIMPLEMENTED_STUB(SetCommState);
APP_UNIMPLEMENTED_STUB(GetCommState);
APP_UNIMPLEMENTED_STUB(SetCommConfig);
APP_UNIMPLEMENTED_STUB(GetCommConfig);
APP_UNIMPLEMENTED_STUB(SetCommTimeouts);
APP_UNIMPLEMENTED_STUB(SetupComm);
APP_UNIMPLEMENTED_STUB(GetCommandLineA);
APP_UNIMPLEMENTED_STUB(RtlUnwind);
APP_UNIMPLEMENTED_STUB(ExitProcess);
APP_UNIMPLEMENTED_STUB(TerminateProcess);
APP_UNIMPLEMENTED_STUB(GetTimeZoneInformation);
APP_UNIMPLEMENTED_STUB(GetSystemTimeAsFileTime);
APP_UNIMPLEMENTED_STUB(RaiseException);
APP_UNIMPLEMENTED_STUB(ExitThread);
APP_UNIMPLEMENTED_STUB(TlsSetValue);
APP_UNIMPLEMENTED_STUB(TlsGetValue);
APP_UNIMPLEMENTED_STUB(FileTimeToSystemTime);
APP_UNIMPLEMENTED_STUB(FileTimeToLocalFileTime);
APP_UNIMPLEMENTED_STUB(GetDiskFreeSpaceA);
APP_UNIMPLEMENTED_STUB(GetFileType);
APP_UNIMPLEMENTED_STUB(RemoveDirectoryA);

} // namespace app
