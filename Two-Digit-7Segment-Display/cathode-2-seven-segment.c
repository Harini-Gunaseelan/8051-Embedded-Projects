#include <reg51.h>

sbit sw = P1^0;
unsigned char num [] = 
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

void delay_ms(unsigned int ms)
{
	unsigned int i,j;
	
	for (i =0; i<=ms; i++)
	{
			for (j = 0; j<1275; j++);
	}
}

void main()
{
	int i,j;
	
	while(1)
	{
		if(sw == 0)
		{
			for (i = 0; i<=9; i++)
		{
			for(j = 0; j<=9; j++)
			{
				if(sw == 1)
				{
						break;
				}
				else
				{
				P2 = num[i];
				P3 = num[j];
				delay_ms(100);
				}
				
			}
		}
		}
		else
		{
			P2 = 0X00;
			P3 = 0X00;
		}
	}
	}
