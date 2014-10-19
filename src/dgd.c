#include <stdio.h>
#include <sys/io.h>

#define PORT_SWITCH_DISPLAY 0x710
#define PORT_SWITCH_SELECT 0x728
#define PORT_SWITCH_DDC 0x740
#define PORT_DISCRETE_POWER 0x750

static int gmux_switch_to_dgd()
{
	outb(2, PORT_SWITCH_SELECT);
	outb(3, PORT_SWITCH_DISPLAY);
	outb(3, PORT_SWITCH_DDC);
	return 0;
}

static void mbp_gpu_power(int state)
{
    outb(state, PORT_DISCRETE_POWER);
}

int main(int argc, char **argv)
{
	if (iopl(3) < 0)
	{
		perror ("No IO permissions");
		return 1;
	}

	mbp_gpu_power(3);
	gmux_switch_to_dgd();
	return 0;
}