#define NULL 0
typedef unsigned int size_t;
typedef int ssize_t;
#define SSIZE_MAX 0x7FFF
#define INT_MAX 0x7FFF

void *calloc (size_t num, size_t size);
void *realloc(void *ptr, size_t new_size);

void* stderr;
