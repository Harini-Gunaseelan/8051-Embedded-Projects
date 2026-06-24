#include <reg51.h>

unsigned char num[] =
{
	0X3F,
	0X06,
	0X5B,
	0X4F,
	0X66,
	0X6D,
	0X7D,
	0X07,
	0X7F,
	0X6F
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