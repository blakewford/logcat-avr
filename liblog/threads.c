#include <syscall.h>
#include <unistd.h>

// No definition needed for Android because we'll just pick up bionic's copy.
#ifndef __ANDROID__
pid_t gettid() {
#if defined(__APPLE__)
  return syscall(SYS_thread_selfid);
#elif defined(__linux__)
  return syscall(__NR_gettid);
#elif defined(_WIN32)
  return GetCurrentThreadId();
#endif
}
#endif  // __ANDROID__

