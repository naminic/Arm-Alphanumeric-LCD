/**************************************

        WWW.NAMINIC.COM

/**************************************/


#include <board.h>
#include <pio/pio.h>
#include <pmc/pmc.h>
#include <ssc/ssc.h>
#include <utility/lcd4bit.h>




void main()
{
 unsigned int x=10;
	  
lcd_init();
lcd_clear();
lcd_gotoxy(1,1);
lcd_putsf("WWW.NAMINIC.COM");
lcd_gotoxy(2,1);
lcd_puts(x);


    while(1){

			
		}

}

