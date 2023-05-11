
#include <linux/module.h>
#include <linux/printk.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>
#include <linux/stat.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("My Kernel Module");
MODULE_AUTHOR("GBV");

static int my_int = 999;
static char *my_string = "My First Kernel Module";

module_param(my_int, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
MODULE_PARM_DESC(my_int, "An integer");

module_param(my_string, charp, 0000);
MODULE_PARM_DESC(my_string, "A character string");

static int mdl_data __initdata = 555;

static int __init mdl_init(void)
{
	pr_info("Loading module %d\n", mdl_data);
	pr_info("Integer is %d\n", my_int);
	pr_info("String is %s\n", my_string);
	return 0;
}

static void __exit mdl_exit(void)
{
	pr_info("Unloading module\n");
}

module_init(mdl_init);
module_exit(mdl_exit);


