#include <avr/io.h>
#define F_CPU 16000000Ul
#include <util/delay.h>

int main(void){

DDRD&=~(0x0E);


DDRD|=0xF0;



while(1){


if((PIND&0X06)==0x06){

PORTD|=0x10;
PORTD&=~(0x20);

_delay_ms(500);

PORTD|=0x20;

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
