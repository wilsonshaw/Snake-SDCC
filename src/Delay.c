#include "Delay.h"

void Delay1ms(unsigned int xms)
{
	unsigned char i, j;
	i = xms;
	j = 12;
	do
	{
		while(--j);
	}while(--i);
}
