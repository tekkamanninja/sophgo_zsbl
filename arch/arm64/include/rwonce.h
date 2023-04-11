#ifndef __ARCH_RWONCE__
#define __ARCH_RWONCE__

#define READ_ONCE(x)							\
({									\
	(*(const volatile typeof(x) *)&(x));				\
})

#define WRITE_ONCE(x, val)						\
do {									\
	*(volatile typeof(x) *)&(x) = (val);				\
} while (0)

#endif
