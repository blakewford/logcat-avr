#define _SC_PHYS_PAGES 1
#define _SC_PAGESIZE 256 * 1024
#define PAGE_SIZE _SC_PAGESIZE
#define W_OK 0

#ifndef IOVEC
struct iovec
{
    void *iov_base;
    size_t iov_len;
};
#define IOVEC
#endif
