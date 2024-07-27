/*
 * led blinking with dif patterns.c
 *
 * Created: 09-09-2023 10:44:14
 * Author : Hp
 */ 

#include <avr/io.h>
#define F_CPU 8000000ul
#include <util/delay.h>

int main(void)
{
	DDRC=0xff;
    //PORTC=0xff;
    while (1)        //for(;;)
    {
		/*PORTC=~PORTC;
		_delay_ms(1000);*/
		/*PORTC=0x55;
		_delay_ms(500);
		PORTC=0xaa;
		_delay_ms(500);*/
		
		/*PORTC=0x01;
		_delay_ms(500);
		for(int i=0;i<8;++i)
		{
			PORTC=PORTC<<1;
			_delay_ms(500);
		}*/
		
		PORTC=0x80;
		_delay_ms(500);
		for(int i=0;i<8;++i)
		{
			PORTC=PORTC>>1;
			_delay_ms(500);
		}
		
	}
}

