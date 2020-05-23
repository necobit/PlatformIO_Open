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
        int colflg = 0;
        int r = 5;
        int cr = 31;
        int cg = 63;
        int cb = 0;
        int count = 0;

        int xmov = rand()%5;
        int ymov = rand()%5;
        
        int col = (cr*64*32-2080)+(cg*32-32)+cb;
        Draw_Circle(xnow,ynow,r,col);
        LCD_DrawRectangle(0, 0, 159, 79,col);
            while(1)
        {
        Draw_Circle(xnow,ynow,r,0);
        xnow = xnow + xmov - 2;
        ynow = ynow + ymov - 2;

/*        
        {
        if (count > 10)
            {
                if(cr > 0) cr--;
                else if(cg > 0) cg--;
                else if(cb > 0) cb--;
                else colflg = 0;
                count = 0;
            }
            else count ++;
        }

        if (colflg == 0)
        {
        if (count > 10)
            {
            if(cr < 32) cr++;
            else if(cg < 64) cg++;
            else if(cb < 32) cb++;
            else colflg = 1;
            count = 0;
            }
            else count ++;
        }
*/
        col = (cr*64*32-2081)+(cg*32-33)+cb-1;
        Draw_Circle(xnow,ynow,r,col);
//        LCD_Fill(xnow-10,ynow-10,xnow+10,ynow+10,col);
        delay_1ms(5);

        if (xnow < xmin) xmov = rand()%3+2;    
        else if (xnow > xmax) xmov = rand()%3-2;  

        if (ynow < ymin) ymov = rand()%3+2;    
        else if (ynow > ymax) ymov = rand()%3-2;  
        }
}