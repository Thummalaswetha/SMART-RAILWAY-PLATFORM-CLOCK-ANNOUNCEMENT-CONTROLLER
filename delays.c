#include<lpc21xx.h>
#include"delay.h"
void delay_us(unsigned int tdly)
{
tdly*=12;
while(tdly--);
}
void delay_ms(unsigned int tdly)
{
tdly*=12000;
while(tdly--);
}
void delay_s(unsigned int tdly)
{
tdly*=12000000;
while(tdly--);
}




/*int main()
{
delay_us(1);
delay_ms(2);
delay_s(1);
while(1);
} */
