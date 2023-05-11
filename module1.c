
#include <linux/module.h>
#include <linux/printk.h>
#include <linux/init.h>

static int __init mdl_init(void)
{
	pr_info("Hello!\n");
	return 0;
}

static void __exit mdl_exit(void)
{
	pr_info("Goodbye!\n");
}

module_init(mdl_init);
module_exit(mdl_exit);

MODULE_LICENSE("GPL");


