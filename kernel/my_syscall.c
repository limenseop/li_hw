#include <linux/syscalls.h>

SYSCALL_DEFINE0(mycall)
{
	printk("SYSTEM CALL EXAMPLE 20186286 limenseop");
	return 0;
}
