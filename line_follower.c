#include<avr/io.h>
#include<util/delay.h>
void main()
{
	DDRD=0b00000000;
	DDRB=0b11111111;
	PORTB=0b11111111;
	
	while(1)
	{
	
		PORTB=0b00001010;
		_delay_ms(5000);
		PORTB=0b00000110;
		PORTB=0b00001010;
		_delay_ms(5000);
		
		PORTB=0b00001001;
		PORTB=0b00001010;
		_delay_ms(5000);
		
		PORTB=0b00000110;
		PORTB=0b00001010;
		_delay_ms(5000);
		
		PORTB=0b00001001;
		PORTB=0b00001010;
		_delay_ms(5000);
		
		PORTB=0b00000101;
		_delay_ms(500);
		PORTB=0b00000110;
		PORTB=0b00001001;
		_delay_ms(5000);

			
	}
}
		