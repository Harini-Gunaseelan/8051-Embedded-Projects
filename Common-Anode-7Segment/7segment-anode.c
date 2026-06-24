#include <reg51.h>

unsigned char num[] =
{
	0XC0,
	0XF9,
	0XA4,
	0XB0,
	0X99,
	0X92,
	0X82,
	0XF8,
	0X80,
	0X90
};

void delay()
{
	unsigned int i,j;
	for(i = 0; i< 200;i++)
	{
		for(j = 0; j <1000;j++);
	}
}

void main()
{
	int i;
	while(1)
	{
			for(i = 9; i>=0; i--)
			{
				P2 = num[i];
				delay();
			}
	}
}