#include <reg51.h>

sbit sw = P2^0;
sbit LED = P2^1;

void main ()
{
		while(1)
		{
			if(sw == 1)
				LED = 1;
			else
				LED = 0;
		}
}