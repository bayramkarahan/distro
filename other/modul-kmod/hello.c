#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
MODULE_DESCRIPTION("Hello World examples");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bayram");
static int __init hello_init(void)
{
printk(KERN_INFO "Hello world!\n");
return 0;
}
static void __exit hello_cleanup(void)
{
printk(KERN_INFO "remove module.\n");
}
module_init(hello_init);
module_exit(hello_cleanup);

