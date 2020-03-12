/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Dell
 */



/*
 * main.c
 *
 *  Created on: 18/8/2018
 *      Author: nabil
 */

#define F_CPU 12000000

#include  "std_types.h"

#include "utils.h"

#include "AVR_GPIO_REG.h"

#include "avr/delay.h"

void key_bad();

void main()
{
	DDRD  = 0X0F; //0b00001111
	PORTD = 0XFF; //0b11111111
	DDRA = 0XFF;

	while(1)
	{


	}
}


U8 Keybad_u8GetPinNo(void)
{
	u8 u8Coulom ;
	u8 u8Rows;
	u8 carry ;
	u8 PinNo;
	for(u8Coulom = 0 ;u8Coulom<=3 ; u8Coulom++ )
	{
		Set_Bit(PORTD,0);
		Set_Bit(PORTD,1);
		Set_Bit(PORTD,2);
		Set_Bit(PORTD,3);
		Rst_Bit(PORTD,0+i);
		for(u8Rows=0 ; u8Rows<=3 ; u8Rows++)
		{
			carry = Get_Bit(PIND, (u8Rows+4));
			if(carry == 0)
			{
				PinNo = (u8Rows *4) + (4-u8Coulom);
				return PinNo;
			}
			else
			{

			}
		}
	}


}
