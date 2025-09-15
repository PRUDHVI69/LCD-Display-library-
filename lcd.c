#include <LPC21xx.H>


#define RS 0
#define EN 1
#define DATA_MASK 0x000003FC
#define DATA_START_BIT 2




void EN_Pulse()
{
    IOSET0 =(1<<EN);
    delay(1);
    IOCLR0 =(1<<EN);
}

void lcd_cmd(unsigned char cmd)
{
    IOCLR0=DATA_MASK;
    IOCLR0 =(1<<RS);
    IOSET0 =((cmd<<DATA_START_BIT) & DATA_MASK);
    EN_Pulse();
    delay(1);
    

    
}

void lcd_write(unsigned char msg)
{
    IOCLR0=DATA_MASK;
    IOSET0 =(1<<RS);
    IOSET0 =((msg<<DATA_START_BIT) & DATA_MASK);
    EN_Pulse();
    delay(1);
    

    
}


void lcd_init()
{
    IODIR0 =(1<<RS) | (1<<EN) | DATA_MASK;
    delay(50);
    lcd_cmd(0x38);    //8-Pin mode.
    lcd_cmd(0x0C);    //Turn the display ON 
    
    lcd_cmd(0x01);    //Clear Display.
    delay(100);
    lcd_cmd(0x06);    //Auto-increment curosr after writign charcter.
}
