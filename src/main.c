/*
 * Simple hello program.
 * Build and run with west build -b native_posix -t run zephyrblog_example1
 * 
 */

#include <zephyr.h>
#include <sys/printk.h>

void main(void)
{
	printk("Hello from Zellaco (www.zellaco.se)\n");
}
