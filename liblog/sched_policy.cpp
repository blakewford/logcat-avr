#define UNUSED __attribute__((__unused__))

extern "C"
{

int set_sched_policy(int tid UNUSED, int policy UNUSED)
{
    return 0;
}

}
