#include "stdion.h"
#include "GENFUN.h"
#include "string.h"

void main (void)
{
	
	uint8 u8Target= 101;
	uint8 au8BufferTest[12]= "hoLA nenA BB";
	uint8 au8BufferTest1[12]= "VAmos A GdL!";
	uint8 au8ArrayMem[8]= {9,2,5,1,9,8,7,3};
	uint8 u8cont=0;
	uint8 u8cont1=0;
	uint8 n= 0;

	printf("before function %s\n", au8BufferTest);
	GENFUN_vCapsOff(&au8BufferTest[0], 12);
	printf("after function %s\n", au8BufferTest);
	
	GENFUN_vCapsOn (&au8BufferTest[0], 12);
	printf("after function %s\n", au8BufferTest); 

	GENFUN_u8GetOccurence (&au8BufferTest[0],101, 12); 
	printf("number of occurrences in string %s", u8cont);

	GENFUN_u8GetAverage (&au8BufferTest[0], 12);
	printf("the average is  %s\n", u8cont);

	GENFUN_u8MemSet (&ArrayMem[0],u8Char2Set,8);
	printf("Buffer after function is %s\n", au8ArrayMem);

	GENFUN_u8MemCopy (&au8BufferTest[0],&au8BufferTest1[0],12);
	printf("BufferTest after function %s\n",au8BufferTest1);
	printf("BufferTest1 after function %s\n",au8BufferTest);

	
	GENFUN_vSortList (&au8ArrayMem[0], &au8ArrayMem[0], 8);
	printf("Array after function ")

	for(n=0; n<8; n++)
	{
		printf("%i", au8ArrayMem[n];
	}

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
void GENFUN_vCapsOn (uint8 *pu8Src, uint8 u8SizeOfList)
{
	while (u8SizeOfList !=0)
	{	
		if( *pu8Src=> ASCII_LOW_THRESHOLD_CAPSON_TO_ON &&
		    *pu8Src <= ASCII_HIGH_THRESHOLD_CAPSON_TO_ON)
			{
				*pu8Scr -= ASCII_CONVERTION_FACTOR
			}
			else
			{
				/*nothing to do*/
			}
			pu8Src++;
			u8SizeOfList --;
	}
}
uint8 GENFUN_u8GetOccurence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList)
{
	uint8 u8cont=0;
	while (u8SizeOfList !=0)
	{
		if( *pu8Src== u8Target)
		{
			cont++;
		}
		else
		{
			/*nothing to do*/
		}
		pu8Src++,
		u8SizeOfList --;
	}
return u8cont;
}

uint8 GENFUN_u8GetAverage (uint8 *pu8Src, uint8 u8SizeOfList)
{
	uint u8cont1; 
	while (u8SizeOfList != 0)
	{
		cont1 += *pu8Src;
		pu8Src++;
		u8SizeOfList--;
	}
	cont = cont1 / u8SizeOfList;
	return cont1; 
}
void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList)
{
	while(u8SizeOfList-- > 0)
	{
		*pu8Src++ = u8Char2Set;
	}
	return *pu8Src;
}
void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList)
{
	for( uint32 j=0; j< uint8 u8SizeOfList; j++)
	{
		pu8Scr[j]=pu8Dest[j];
	}

}
void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList)
{
	for(uint32 i=0; i< uint8 u8SizeOfList; i++)
	{
		for(uint32 j=0; j< uint8 u8SizeOfList; j++)
		{
			uint8 u8SaveSentence= pu8Scr[i];
			pu8Src[i]= pu8Scr[j];
			pu8Scr[j]= u8SaveSentence;
		}
	}

}




