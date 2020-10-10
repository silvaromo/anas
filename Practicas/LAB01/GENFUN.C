#include "stdion.h"
#include "GENFUN.h"

void main (void)
{
	uint8 au8BufferTest[12]= "hoLA nenA BB";
	printf("before function %s\n", au8BufferTest);
	GENFUN_vCapsOff(&au8BufferTest[0], 12);
	printf("after function %s\n", au8BufferTest);
	
}
Void GENFUN_vCapsOff (uint8 *pu8Src, uint8 u8SizeOfList)
{
	while (u8SizeOfList !=0)
	{
		if( *pu8Src=> ASCII_LOW_THRESHOLD_CAPSON_TO_OFF &&
		    *pu8Src <= ASCII_HIGH_THRESHOLD_CAPSON_TO_OFF)
		{
			*pu8Scr += ASCII_CONVERTION_FACTOR
		}
		else
		{
			/*nothing to do*/
		}
		pu8Src++;
		u8SizeOfList --;
	}
}