#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void imprimir_tablero(int tablero[][15], int perder);
void colocar_bombas(int minas[][15], int bum);
void frases_1(int buscar);
void frases_2(int numero);

#define RENGLON 15
#define COLUMNA 15

int main()
{
  int buscaminas[RENGLON][COLUMNA] = {0}, i, j;
  int nivel, bombas;                                    //bombas aleatorias
  int gameStatus, gameCounter = 0, victoria;            //control del juego
  int tiradas, frases;                                  //estadisticas del juego
  float rating;
  char salida;

  do{
       system("cls");
       printf("hay 3 niveles");
       printf("~Ingresa el nivel del juego:\n%d.-Nivel 1: 10 bombas\n", 1);
       printf("%d.-Nivel 2: 20 bombas\n%d.-Nivel 3: 30 bombas\n", 2, 3);
      
       scanf("%d", &nivel);
      /*niveles*/
       switch(nivel){
      
           case 1: bombas = 10;
                   break;
                  
           case 2: bombas = 20;
                   break;
                  
           case 3: bombas = 30;
                   break;
                  
           default: printf("Seleccion invalida\n\n");
                    break;                 
                    
       }
      
       srand(time(NULL));  
      
       colocar_bombas(buscaminas, bombas);
      
       tiradas = 0; 
      
       do{
           system("cls");
         
          
           imprimir_tablero(buscaminas, gameStatus);
          
           printf("\n"); //nueva linea
          
           printf("*Ingresar coordenada [i, j]: ");
           scanf("%d%d",&i, &j);
          
           if(buscaminas[i][j] == 3){                              
               gameStatus = -1;
               tiradas++;
              
               system("cls");
               imprimir_tablero(buscaminas, gameStatus);
            //   gotoxy(80, 4);
               printf("\t\t\t\t\t  ¡¡¡Perdiste, suerte a la proxima!!");
              
               getch();              
           }
           else
           {
               buscaminas[i][j] = 1;
               gameCounter++;
               tiradas++;
           }
           if(gameCounter == (225 - bombas) )
           {
               victoria = 1;
               system("cls");
               imprimir_tablero(buscaminas, gameStatus);
         //      gotoxy(80, 4);
               printf("\t\t\t\t\t  ¡¡¡Has ganado, eres un crack!!");
      
               getch();
           }       
          
              
       }while(gameStatus != -1 || victoria == 1);
      
       system("cls");
       printf("*Numero de intentos %d.\n\n", tiradas);
      
       printf("\n\n");
      
       printf("¿Desea jugar de nuevo(S/N)?: ");
      
       salida = getch();
       salida = tolower(salida);
      
       for(i = 0; i <= RENGLON - 1; i++)
         for(j = 0; j <= COLUMNA - 1; j++)
           buscaminas[i][j] = 0;
          
       gameCounter = 0;
      
      
  }while(salida == 's');          
   
  system("cls");

 
  getch();
  //system("PAUSE");   
  return 0;
}

/*esta funcion coloca 2 numeros aleatorios*/
void colocar_bombas(int minas[][15], int bum)
{
     int i, renglon, columna;
    
     for(i = 1; i <= bum; i++)
     {
           renglon = 0 + rand() % 14;
           columna = 0 + rand() % 14;
          
           minas[renglon][columna] = 3;

     }

    /*es para checar donde estan las minas y probar todo*/
    /* for(int i=0; i<15;i++)
     {
         for(int j=0; j<15;j++)
         {
          printf("%d",minas[i][j]);
         }
         printf("\n");
     }*/
}

 
void imprimir_tablero(int tablero[][15], int perder)
{
     int i, j;
    
     for(i = 0; i <= RENGLON -1; i++)  //encabezado
       printf("%d ", i);
      
     printf("\n");  //nueva linea
    
     for(i = 0; i <= COLUMNA - 1; i++)
       printf("--");
      
     printf("\n");
    
     for(i = 0; i <= RENGLON -1; i++)
     {
           for(j = 0; j <= COLUMNA - 1; j++){
          
             if(tablero[i][j] == 1)
               printf("%d ", tablero[i][j]);
             else if((tablero[i][j] == 3) && (perder == -1))
               printf("%c ", '*');
             else
               printf("%c ", '#');        
           }
          
           printf("| %d", i);   
           printf("\n"); 
          
     }
    
        
    
}