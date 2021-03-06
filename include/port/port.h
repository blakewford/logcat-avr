typedef unsigned int size_t;
typedef int ssize_t;
#define SSIZE_MAX 0x7FFF

#ifndef INT_MAX
#define INT_MAX 0x7FFF
#endif

#define EPERM 1
#define ENOENT 2
#define EINTR 4
#define EIO 5
#define EBADF 9
#define EAGAIN 11
#define ENOMEM 12
#define EFAULT 14
#define ENODEV 19
#define EINVAL 22
#define EOVERFLOW 75
#define ENOTCONN 107
#define ETIMEDOUT 110
#define ECONNREFUSED 111

#define __printflike(x,y)
int set_sched_policy(int tid, int policy);

