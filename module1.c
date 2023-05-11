
#include <linux/module.h>
#include <linux/printk.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("My Kernel Module");
MODULE_AUTHOR("GBV");

static int mdl_data __initdata = 255;

static int __init mdl_init(void)
{
	pr_info("Loading module %d\n", mdl_data);
	return 0;
}

static void __exit mdl_exit(void)
{
	pr_info("Unloading module\n");
}

module_init(mdl_init);
module_exit(mdl_exit);


