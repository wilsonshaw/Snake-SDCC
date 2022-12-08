#include "stc89c52.h"
#include "Delay.h"

int main()
{
	while(1)
	{	
		P2_0 = 0;
		Delay1ms(1000);
		P2_0 = 1;
		Delay1ms(1000);
	}
	return 0;
}
