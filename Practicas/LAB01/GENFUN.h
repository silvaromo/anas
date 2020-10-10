/*prototypes*/
void GENFUN_vCapsOff (uint8 *pu8Src,uint8 u8SizeOfList);
void GENFUN_vCapsOn (uint8 *pu8Src, uint8 u8SizeOfList);
uint8 GENFUN_u8GetOccurence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList);
uint8 GENFUN_u8GetAverage (uint8 *pu8Src, uint8 u8SizeOfList);
void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList);
void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);
void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);
void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest);
void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal);



/*definitions*/

#define ASCII_HIGH_THRESHOLD_CAPSON_TO_OFF	90
#define ASCII_LOW_THRESHOLD_CAPSON_TO_OFF	65
#define ASCII_CONVERTION_FACTOR			32
#define u8Char2Set				40				                              
#define ASCII_HIGH_THRESHOLD_CAPSON_TO_ON	122
#define ASCII_LOW_THRESHOLD_CAPSON_TO_ON	97


/*Data Types*/
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
