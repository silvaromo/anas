state_machine.c

#include "stdio.h"
#include "stdlib.h"
#include "machine.h"

int main(void)
{
	unint8 menu[]= "1.-cosmopolitan\n2.-sexonthebeach\nbluelagoon";
	ingrediente enpeso;
	ingrediente ensiguiente;
	unsigned int u8Delay=0;
	uint8 u8eleccion=0;

	while(1)
	{
		 printf("selecciona la bebida que deseas%s",menu);
	      scanf("%d",&u8eleccion);
	      switch(u8eleccion)
	        {
	         	case 1:
	         	{
                    switch  (enpeso)
	         	        {
	         	        	case enhielo:
	         	        	{
                               printf("se coloco el hielo\n");
                               u8Delay = COSMOPOLITAN_TIEMPO;
                               while(u8Delay--);
                               enpeso=Delay;
                               ensiguiente=encointreau;
	         	        	}

	         	        	case encointreau:
	         	        	{
                               printf("se coloco el cointreau\n");
                               u8Delay = COSMOPOLITAN_TIEMPO;
                               while(u8Delay--);
                               enpeso=Delay;
                               ensiguiente=enjugolimon;
	         	        	}
                            
                            case enjugolimon:
	         	        	{
                               printf("se coloco el jugo de limon\n");
                               u8Delay = COSMOPOLITAN_TIEMPO;
                               while(u8Delay--);
                               enpeso=Delay;
                               ensiguiente=enjugoarandano;
	         	        	}

	         	        	case enjugoarandano:
	         	        	{
                               printf("se coloco el jugo de arandano\n");
                               u8Delay = COSMOPOLITAN_TIEMPO;
                               while(u8Delay--);
                               enpeso=Delay;
                               ensiguiente=envodka;
	         	        	}
	         	        	case envodka:
	         	        	{
                               printf("se coloco el vodka\n");
                               u8Delay = COSMOPOLITAN_TIEMPO;
                               while(u8Delay--);
                               enpeso=Delay;
	         	        	}
	         	        	case Delay:
	         	        	{
	         	        		printf("completado\n");
	         	        		enpeso=ensiguiente;
	         	        	}
	         	        }
	         	        printf("bebida preparada\n");
                        break;
	         	}
	         	break;       
	   	        case 2:
	   	        {
                    switch  (enpeso)
	         	        {
	         	        	case envodka:
	         	        	{
                               printf("se coloco el vodka\n");
                               u8Delay = BLUELAGOON_TIEMPO ;
                               while(u8Delay--);
                               enpeso=Delay;
                               ensiguiente=enbluecuracao;
	         	        	}

	         	        	case enbluecuracao:
	         	        	{
                               printf("se coloco el blue curacao\n");
                               u8Delay = BLUELAGOON_TIEMPO;
                               while(u8Delay--);
                               enpeso=Delay;
                               ensiguiente=ensprite;
	         	        	}
                            case ensprite:
	         	        	{
                               printf("se coloco el sprite\n");
                               u8Delay = BLUELAGOON_TIEMPO;
                               while(u8Delay--);
                               enpeso=Delay;
                               ensiguiente=enhielo;
	         	        	}
	         	        	case enhielo:
	         	        	{
                               printf("se coloco el hielo\n");
                               u8Delay = BLUELAGOON_TIEMPO;
                               while(u8Delay--);
                               enpeso=Delay;
	         	        	}
	         	        	case Delay:
	         	        	{
	         	        		printf("completado\n");
	         	        		enpeso=ensiguiente;
	         	        	}
	         	        }
	         	        printf("bebida preparada\n");
                        break;
	   	        }
                break;
	   	        case 3:
	   	        {
	   	        	switch  (enpeso)
	         	        {
	         	        	case enlicordemelocoton:
	         	        	{
                               printf("se coloco el licor de melocoton\n");
                               u8Delay = SEXONTHEBEACH_TIEMPO ;
                               while(u8Delay--);
                               enpeso=Delay;
                               ensiguiente=enjugoarandano;
	         	        	}

	         	        	case enjugoarandano:
	         	        	{
                               printf("se coloco jugo de arandano\n");
                               u8Delay = SEXONTHEBEACH_TIEMPO ;
                               while(u8Delay--);
                               enpeso=Delay;
                               ensiguiente=enjugonaranja;
	         	        	}
                            
                            case enjugonaranja:
	         	        	{
                               printf("se coloco jugo de naranja\n");
                               u8Delay = SEXONTHEBEACH_TIEMPO ;
                               while(u8Delay--);
                               enpeso=Delay;
	         	        	}

	         	        	}
	         	        	case Delay:
	         	        	{
	         	        		printf("completado\n");
	         	        		encheckweight=enchange;
	         	        	}
	         	        }
	         	        printf("bebida preparada\n");
                        break;
	   	        }
	   	        default:
	         	     break;
	        
	         }
     // noting to do 
	}	
}
