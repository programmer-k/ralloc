#include "rpmalloc.hpp"

#define PM_start(id) RP_init(id)
#define PM_close() RP_close()
#define PM_malloc(sz) RP_malloc(sz)
#define PM_free(ptr) RP_free(ptr)
#define set_root(ptr, i) RP_set_root(ptr, i)
#define get_root(i) RP_get_root(i)