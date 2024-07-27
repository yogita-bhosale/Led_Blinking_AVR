/*
 * led blinking with dif patterns.c
 *
 * Created: 09-09-2023 10:44:14
 * Author : Hp
 */ 

#include <avr/io.h>
#define F_CPU 8000000ul
#include <util/delay.h>

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();

int main(void)
{
	DDRC=0xff;  //make portc as a output port
	
    while (1)        //for(;;)
    {
		pattern1();
	    _delay_ms(50);
		pattern2();
		_delay_ms(50);
		pattern3();
		_delay_ms(50);
		pattern4();
		_delay_ms(50);
		pattern5();
		_delay_ms(50);
		pattern6();
		_delay_ms(50);
		pattern7();
		_delay_ms(50);
		pattern8();
		_delay_ms(50);
	}
}

	void pattern1(void)
	{
	PORTC=~PORTC;
	_delay_ms(10);
	}
	
	void pattern2(void)
	{
		PORTC=0x55;
		_delay_ms(50);
		PORTC=0xaa;
		_delay_ms(50);
	}	
	
	void pattern3(void)
	{
		PORTC=0x01;
		_delay_ms(50);
		for(int i=0;i<8;++i)
		{
			PORTC=PORTC<<1;
			_delay_ms(50);
		}
		
	}	
	
	void pattern4(void)
	{
	  PORTC=0x80;
	  _delay_ms(50);
	  for(int i=0;i<8;++i)
	  {
		  PORTC=PORTC>>1;
		  _delay_ms(50);
		  }
	}	
	
	void pattern5(void)
	{
		PORTC=0xc0;
		_delay_ms(50);
		for(int i=0;i<8;++i)
		{
			PORTC=PORTC>>2;
			_delay_ms(50);
		}
		
	}
	
	void pattern6(void)
	{
		PORTC=0x03;
		_delay_ms(50);
		for(int i=0;i<8;++i)
		{
			PORTC=PORTC<<2;
			_delay_ms(50);
		}
	}	
	void pattern7(void)
	{
		PORTC=0xf0;
		_delay_ms(50);
		PORTC=0xff;
		_delay_ms(50);
	  
	}	
	
	void pattern8(void)
	{
		PORTC=0x0f;
		_delay_ms(50);
		PORTC=0xff;
		_delay_ms(50);
		
	}

	


