#include <stdint.h>
#include <stdbool.h>
#include "tm4c123gh6pm.h"
#include "sysctl.h"


int main(void)
{

	GPIO_PORTF_DIR_R = 0x08;
	GPIO_PORTF_DEN_R = 0x08;

	while(1)
	{
	    GPIO_PORTF_DATA_R |= 0x08;
	    SysCtlDelay(300000);
	    GPIO_PORTF_DATA_R &= ~(0x08);
	    SysCtlDelay(300000);
	}
}
