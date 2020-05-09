#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/usb.h>

static hid_init(void) { return 0; }
static hid_exit(void) { return; }
