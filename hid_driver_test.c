#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/usb.h>

static hid_init(void) { return 0; }
static hid_exit(void) { return; }

module_init(hid_init);
module_exit(hid_exit);

struct usb_device_id{
}

struct bus_type{
}
