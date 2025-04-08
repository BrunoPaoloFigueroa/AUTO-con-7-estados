
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void){

DDRD&=~(0x0E);


DDRD|=0xF0;



while(1){

    char a=PIND&0X0E;
    _delay_ms(100);
        switch (a){

        

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

            //Retro
            PORTD&=~(0x10);   //Motor A
            PORTD|=(0x20);
        
           
            PORTD&=~(0x40);   //Motor B
            PORTD|=(0x80);

            break;

            case 0x08:

            //Derecha Larga
            PORTD&=~(0x10);   //Motor A
            PORTD&=~(0x20);

            PORTD|=0x40;   //Motor B
            PORTD&=~(0x80);

            break;

            case 0x0A:

            //Derecha Corta
            PORTD&=~(0x10);   //Motor A
            PORTD|=(0x20);

            PORTD|=0x40;   //Motor B
            PORTD&=~(0x80);

            break;

            case 0x0C:

            //Izquierda Larga
            PORTD|=(0x10);   //Motor A
            PORTD&=~(0x20);

            PORTD&=~(0x40);   //Motor B
            PORTD&=~(0x80);

            break;

            case 0x0E:

             //Izquierda Corta
             PORTD|=(0x10);   //Motor A
             PORTD&=~(0x20);
 
             PORTD&=~(0x40);   //Motor B
             PORTD|=(0x80);
 
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
