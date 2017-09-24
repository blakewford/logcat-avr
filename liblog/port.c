#include <stdint.h>

char *getenv(const char *name)
{
    return NULL;
}

int setenv(const char *name, const char *value, int overwrite)
{
}

void tzset (void)
{
}

char *tzname[2];

int unsetenv(const char *name)
{
    return 0;
}

int fileno = 0;

pid_t getpid(void)
{
    return 0;
}

uid_t getuid(void)
{
}

long sysconf(int name)
{
    return 0;
}

int* __atomic_load_2(int* ptr, int memorder)
{
    return ptr;
}

int clock_gettime(clockid_t clk_id, struct timespec *tp)
{
    return 0;
}

int __atomic_exchange_2(int *mem, int val, int memorder)
{
}

ssize_t writev(int fd, const struct iovec *iov, int iovcnt)
{
}

int access(const char *pathname, int mode)
{
    return 0;
}

int open(const char *pathname, int flags)
{
    return 0;
}

int close(int fd)
{
    return 0;
}

int __atomic_fetch_add_4(int *mem, int val, int memorder)
{
    return 0;
}

int __atomic_exchange_4(int *mem, int val, int memorder)
{
}

uint32_t htole32(uint32_t host_32bits)
{
    return host_32bits;
}

unsigned long long int strtoull (const char* str, char** endptr, int base)
{
    return 0;
}

off_t lseek(int fd, off_t offset, int whence)
{
    return 0;
}

ssize_t read(int fd, void *buf, size_t count)
{
    return 0;
}

int unlink(const char *pathname)
{
    return 0;
}

int getgroups(int size, gid_t list[])
{
    return 0;
}

gid_t getgid(void)
{
    return 0;
}

gid_t getegid(void)
{
    return 0;
}

uid_t geteuid(void)
{
    return 0;
}

int gettimeofday(struct timeval *tv, struct timezone *tz)
{
    return 0;
}

unsigned int alarm(unsigned int seconds)
{
    return 0;
}

struct passwd *getpwuid(uid_t uid)
{
    return NULL;
}

int sched_yield(void)
{
    return 0;
}

time_t time(time_t *t)
{
    return 0;
}

void usleep(int usec)
{
}

size_t strftime(char *s, size_t max, const char *format, const struct tm *tm)
{
    return 0;
}

struct tm *localtime_r(const time_t *timep, struct tm *result)
{
    return NULL;
}
