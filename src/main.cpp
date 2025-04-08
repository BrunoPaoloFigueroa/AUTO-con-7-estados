#include <avr/io.h>
#define F_CPU 16000000Ul
#include <util/delay.h>

int main(void){

DDRD&=~(0x0E);


DDRD|=0xF0;



while(1){

if(PIND&0X02){

PORTD&=~(0x10);   //Motor A
PORTD&=~(0x20);

PORTD&=~(0x40);   //Motor B
PORTD&=~(0x80);

}


if(PIND&0X04){

PORTD|=0x10;   //Motor A
PORTD&=~(0x20);

PORTD|=0x40;   //Motor B
PORTD&=~(0x80);

}


if(PIND&0X08){

    PORTD|=0x40;
    PORTD&=~(0x80);

    _delay_ms(500);

    PORTD|=0x80;


}


}

return 0;

}
