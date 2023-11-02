#ifndef __COMMON_H__
#define __COMMON_H__

#include <stddef.h>
#include <stdint.h>

#ifndef container_of
#define container_of(ptr, st, member)                                          \
  ({                                                                           \
    typeof(((st *)0->member)) *__mptr = ptr;                                   \
    (st *)((char *)ptr - offsetof(st, member));                                \
  })
#endif

#endif
