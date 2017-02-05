/********************************************************************************
The MIT License

Copyright (c) 2016 shydyl

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
********************************************************************************/

#include "timer.h"

int Timer0_init()
{	
	/* (CLK_I/O)/256 (From prescaler) */
	TCCR0B = 0x40;

	/* Clear Counter Register */
	TCNT0 = 0x00;

    /* Clear Counter Var */
    Time_Flag_0 = 0;
    Time_Flag_1 = 0;

}

/* On 4MHz Clock, This will happen every 0.000064s */
ISR(TIMER0_OVF_vect)
{
    Time_Flag_0++;
    Time_Flag_1++;
}