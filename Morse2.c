/**********************************************************************
* Filename    : Morse2.c
* Description : Text to Morse on RBPI with Pin 0 and 1
* auther      : Peter A.D. Stahl
* modification: 2020/06/24
**********************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <wiringPi.h>
#include <stdio.h>

#define  ledPin    0	//define the led pin number
#define	 ledPin2   1	//define the other LED pin number

main()

{
Start:
{
	
 char *alphamorse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
                    "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
     "...-",".--","-..-","-.--","--.."};
 char *nummorse[]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
 
 
wiringPiSetup();	//Initialize wiringPi.
	
pinMode(ledPin2, OUTPUT);//Set the pin mode
	
 int i;
 char str[1000];
 
 printf("Enter Message\n");
 gets(str); 


	 
 printf("Transmitting\n");
 delay(500);
		
 
 i=0;
  while(str[i]!='\0')
  {
	
 if(str[i]!=' '&&(!isdigit(str[i])))  
 {
    printf("%s ",alphamorse[toupper(str[i])-65]);}

    
    if (str[i]=='A'||str[i]=='a')
{  
     printf("A");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);	 
 } 
	if (str[i]=='B'||str[i]=='b')
	{
		printf("B");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);	
	}
	if (str[i]=='C'||str[i]=='c')
	{
	printf("C");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);	
	}
	if (str[i]=='D'||str[i]=='d')
	{
		printf("D");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='E'||str[i]=='e')
	{
		printf("E");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);
		}
	if (str[i]=='F'||str[i]=='f')
	{
		printf("F");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);		
		}
	if (str[i]=='G'||str[i]=='g')
	{
		printf("G");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);
	}
	if (str[i]=='H'||str[i]=='h')
	{
		printf("H");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='I'||str[i]=='i')
	{
		printf("I");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='J'||str[i]=='j')
	{
		printf("J");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='K'||str[i]=='k')
	{
		printf("K");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);		
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='L'||str[i]=='l')
	{
		printf("L");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='M'||str[i]=='m')
	{
		printf("M");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='N'||str[i]=='n')
	{
		printf("N");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);
		}
	if (str[i]=='O'||str[i]=='o')
	{
		printf("O");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='P'||str[i]=='p')
	{
		printf("P");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);
		}
	if (str[i]=='Q'||str[i]=='q')
	{
		printf("Q");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);
		}
	if (str[i]=='R'||str[i]=='r')
	{
		printf("R");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);
		}
	if (str[i]=='S'||str[i]=='s')
	{
		printf("S");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='T'||str[i]=='t')
	{
		printf("T");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);
		}
	if (str[i]=='U'||str[i]=='u')
	{
		printf("U");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);
		}
	if (str[i]=='V'||str[i]=='v')
	{
		printf("V");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);
		}
	if (str[i]=='W'||str[i]=='w')
	{
		printf("W");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='X'||str[i]=='x')
	{
		printf("X");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='Y'||str[i]=='y')
	{
		printf("Y");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='Z'||str[i]=='z')
	{
		printf("Z");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);	
	}
	
	
	
	
	
	
    if(str[i]==' ')
    {
     printf("_");
     delay(400);
    }
    if(isdigit(str[i])&&str[i]!=' ')
    {
      printf("%s ",nummorse[str[i]-48]);    
    }


	if (str[i]=='1')
	{
		printf("1\n");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);	
	}
	if (str[i]=='2')
	{
		printf("2");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);	
			}
	if (str[i]=='3')
	{			
		printf("3");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);
		}
	if (str[i]=='4')
	{
		printf("4");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='5')
	{
			printf("5");
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='6')
	{
			printf("6");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);		
		}
	if (str[i]=='7')
	{
		printf("7");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='8')
	{
		printf("8");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);	
		}
	if (str[i]=='9')
	{
		printf("9");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(100);	
		digitalWrite(ledPin, LOW);
		delay(300);		
		}
	if (str[i]=='0')
	{
			printf("0");
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(100);	
		digitalWrite(ledPin, HIGH); 
		delay(300);	
		digitalWrite(ledPin, LOW);
		delay(300);	
	}
   i++;
   

   

  }
  printf("\nTransmission Complete"); //Status LED
			
  printf("\n");
  

delay (500);


   int c;

   printf( "Further Message? (Y/N)\n"); //Restart Program or End
   c = getchar( );
   
if (c=='Y'||c=='y')
{
int (b);
 char str[1000];
 gets(str); 
 goto Start;}

if (c=='N'||c=='n')
{return 0;

}
}}

