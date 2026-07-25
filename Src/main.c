#include "led.h"

int main(void)
{
	led_init();

	while(1)
	{
		GPIOA->ODR	^=	ODRPA5;
		for(int i=0; i<100000; i++);
	}
}
