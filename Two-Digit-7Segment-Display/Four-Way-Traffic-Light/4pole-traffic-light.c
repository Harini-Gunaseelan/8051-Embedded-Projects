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
void delay_ms(unsigned int ms)
{
	unsigned int i,j;
	for (i = 0; i<ms; i++)
	{
		for(j=0; j<1275;j++);
	}
}
void count(int n)
{
	int i;
	for(i = n; i>=0; i--)
	{
			P1 = num[i];
			delay_ms(200);
	}
}
void main()
{
	P2 = 0X09;
	P3 = 0X24;
	count(5);
	
	P2 = 0X12;
	P3 = 0X22;
	count(5);
	
	P2 = 0X24;
	P3 = 0X09;
	count(5);
	
	P2 = 0X24;
	P3 = 0X12;
	count(5);
}