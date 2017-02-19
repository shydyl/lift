#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main( void )
{
	DDRB=0x00;
	DDRD=0x01;	
	while(1){
		
	}
	

	return 0;
}



ISR(TIMER1_OVF_vect)
{

}

