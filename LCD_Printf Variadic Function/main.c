
#include "main.h"

 u8 Rflag=0;
 u8 Bflag=0;
 


int main(void)
{
 	DIO_InitDirection();
	LCD_init();
	//LED_Init();
	KEYPAD_Init();
	ADC_Init(ADC_VREF_AVCC,ADC_SCALER_64);
   // FILTER_Init();
    SENSORS_Init();
	//EXI_Init();
	
	u8 i=30;

	while(1)
	{
		LCD_SetCursor(LCD1,Line1,Cell_1);
		LCD_SetCursor(LCD2,Line1,Cell_1);
		LCD_SetCursor(LCD3,Line1,Cell_1);
		
		
		LCD_Printf(LCD1,(u8*)"My Printf Function : \\n%d %d %u %s",25,-1,-1,(u8*)"Mo7amed");
		LCD_Printf(LCD1,(u8*)" \\n %c %c \\t %s %f",'k','m',(u8*)"float",32.5);
		LCD_Printf(LCD1,(u8*)" \\n %c  \\t %c \\t %C ",'R','A','M');
		
	
	LCD_Printf(LCD2,"%s: %D \\n %S: %b \\n %s: %X \\n \\t %s: %f",(u8*)"Decimal",-500,(u8*)"Binary",255,(u8*)"Hexa",255,(u8*)"Float",35.5);
	
	LCD_Printf(LCD3,(u8*)" %d \\n %X \\n %B \\t ",i,i,i);
	LCD_Printf(LCD3,(u8*)"\\n \\t %c",i);
	
	i++;
	if (i==200)
	{
		i=0;
	}
	
	}
	
	
}
