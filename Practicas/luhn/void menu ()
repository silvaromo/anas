#include <stdio.h>

int u8LuhnCheck ( int *pu8Data );

void main ( void )
{
	int au8CardNumber[16]={5,2,0,4,1,6,5,5,0,9,4,8,3,6,9,3};
	int au8Check = 0;

	au8Check= u8LuhnCheck (&au8CardNumber[0]);
	if (au8Check == 0)
	{
	    printf("tarjeta valida");
	}
	else
	{
	    printf("tarjeta valida");
	}
}
int u8LuhnCheck ( int *pu8Data )
{
	int au8CardNumber2[16];
	
	int x;
	int cociente;
	int residuo;
	int suma;
//este for se utiliza para mover de posiciones y multiplicar por 2 las posiciones pares
	for(x=0; x<16; x=x+2)
	{
	    au8CardNumber2[x]=pu8Data[x]*2;
	    if(au8CardNumber2[x]>=10)
	    {
	        cociente=au8CardNumber2[x]/10;
	        residuo=au8CardNumber2[x]%10;
	       au8CardNumber2[x+1]=pu8Data[x+1]+cociente+residuo;
	    }
	    else 
	    {
	       au8CardNumber2[x+1]=pu8Data[x+1]+au8CardNumber2[x];
	       
	    }
	}
	/*For utilizado para verificar que las operaciones son correctas 
	for(x=0; x<16; x++)
	{
	    printf("  %i,%i \n",x ,au8CardNumber2[x]);
	    
	}
	*/
	suma=0;
	for(x=0; x<16; x++)
	{
	    suma=suma+au8CardNumber2[x];
	}
	if(suma%2==0)
	{
	   x=0;
	}
	else
	{
	    x=1;
	}
	return x;
}