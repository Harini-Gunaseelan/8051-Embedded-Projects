#include <reg51.h>

sbit LED = P2^0;

void delay()
{
	unsigned int i;
	
	for(i =0; i<10000; i++);
	
}

void main()
{
	while(1)
	{
			LED = 1;
			delay ();
			LED = 0;
			delay ();
		
	}
}