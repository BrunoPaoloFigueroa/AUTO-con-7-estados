#include <avr/io.h>
#define F_CPU 16000000Ul
#include <util/delay.h>

int main(void){

DDRD&=~(0x0E);


DDRD|=0xF0;

char a=(PIND&0X0E);

while(1){

    
        switch (a){

_delay_ms(50);

            case 0x02:

            //PARO
            PORTD&=~(0x10);   //Motor A
            PORTD&=~(0x20);

            PORTD&=~(0x40);   //Motor B
            PORTD&=~(0x80);


            break;

            case 0x04:

                        //Avance
            PORTD|=0x10;   //Motor A
            PORTD&=~(0x20);

            PORTD|=0x40;   //Motor B
            PORTD&=~(0x80);
         

            break;

            case 0x06:
            PORTD|=0x40;
            PORTD&=~(0x80);
        
            _delay_ms(500);
        
            PORTD|=0x80;

            break;

            case 0x08:
            PORTD|=0x40;
            PORTD&=~(0x80);
        
            _delay_ms(500);
        
            PORTD|=0x80;

            break;

            case 0x0A:
            PORTD|=0x40;
            PORTD&=~(0x80);
        
            _delay_ms(500);
        
            PORTD|=0x80;

            break;

            case 0x0C:
            PORTD|=0x40;
            PORTD&=~(0x80);
        
            _delay_ms(500);
        
            PORTD|=0x80;

            break;

            case 0x0E:
            PORTD|=0x40;
            PORTD&=~(0x80);
        
            _delay_ms(500);
        
            PORTD|=0x80;

            break;

        }

    

 /*    
if(PIND&0X02){

//PARO
PORTD&=~(0x10);   //Motor A
PORTD&=~(0x20);

PORTD&=~(0x40);   //Motor B
PORTD&=~(0x80);

}


if(PIND&0X04){

//Avance
PORTD|=0x10;   //Motor A
PORTD&=~(0x20);

PORTD|=0x40;   //Motor B
PORTD&=~(0x80);

}

if((PIND&0X03)==0X03){

//Retro
    PORTD&=~(0x10);   //Motor A
    PORTD|=0x20;
    
    PORTD&=~(0x40);   //Motor B
    PORTD|=0x80;
    
    }


if(PIND&0X08){

    PORTD|=0x40;
    PORTD&=~(0x80);

    _delay_ms(500);

    PORTD|=0x80;


}
*/

}

return 0;

}
