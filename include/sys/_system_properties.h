#define PROP_NAME_MAX   32
#define PROP_VALUE_MAX  92

pid_t gettid(void);
char *strcasestr(const char *haystack, const char *needle);

struct prop_info
{
    char name[PROP_NAME_MAX];
    unsigned volatile serial;
    char value[PROP_VALUE_MAX];
};

typedef struct prop_info prop_info;

unsigned int __system_property_area_serial()
{
    return 0;
}

unsigned int __system_property_serial(const prop_info *__pi)
{
    return 0;
}

const prop_info *__system_property_find(const char *name)
{
    return NULL;
}

int __system_property_read(const prop_info *pi, char *name, char *value)
{
    return 0;
}


