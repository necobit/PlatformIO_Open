#include "lcd/lcd.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    Lcd_Init(); 
    LCD_Clear(BLACK);
    BACK_COLOR=BLACK;

        //setup
        int xmin = 6;
        int ymin = 6;
        int xmax = 154;
        int ymax = 74;
        int xnow = 80;
        int ynow = 40;
        long col = 65535;
        int r = 5;

        int xmov = rand()%5;
        int ymov = rand()%5;
        
        Draw_Circle(xnow,ynow,r,col);
        LCD_DrawRectangle(0, 0, 159, 79,66535);
            while(1)
        {
        Draw_Circle(xnow,ynow,r,0);
        xnow = xnow + xmov - 2;
        ynow = ynow + ymov - 2;
        Draw_Circle(xnow,ynow,r,65535);
        delay_1ms(5);

        if (xnow < xmin) xmov = rand()%3+2;    
        else if (xnow > xmax) xmov = rand()%3-2;  

        if (ynow < ymin) ymov = rand()%3+2;    
        else if (ynow > ymax) ymov = rand()%3-2;  
        }
}