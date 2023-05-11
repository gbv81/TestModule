
#include <linux/module.h>
#include <linux/printk.h>

int init_module(void)
{
    pr_info("Hello!\n");
	return 0;
}

void cleanup_module(void)
{
    pr_info("Goodbye!\n");
}

MODULE_LICENSE("GPL");


