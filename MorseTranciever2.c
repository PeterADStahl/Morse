
/**********************************************************************
* Filename    : MorseTranciever2.c
* Description : Transmit, Recieve and Decode Morse Code
* Author      : Peter A.D. Stahl
* modification: 2020/??/??
**********************************************************************/


#include <wiringPi.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define ledPin    0  	//define the ledPin Output
#define buttonPin 1		//define the buttonPin gpi0 18
#define x 30			//speed of transmission


int i;
int Raw=0; 	//used to decode
int sum; 	//used to decode

main(){{ //Opening option for Transmitting or Recieving 
	
	{
	printf("International Morse Code Transciever\n");
	delay (500);}
	
	char program;
	printf("(T)ransmitt or (R)ecieve?: \n");
	scanf ("%c", &program);	

while(1) 
		{
		if (program == 'T' || program == 't'){  
			printf("Transmit\n");
			delay (500);
			goto startTransmitterFull;}
		
		if (program == 'R' || program == 'r'){  
			printf("Recieve\n");
			delay (500);
			goto startRecieverFull;}
		}	

//Reciever in Holding Pattern---------------------------------------------

startRecieverFull: 
while(1){

	
//initialize function


	printf("Listening>>>\n");
	
	wiringPiSetup();	//Initialize wiringPi.	
	
	pinMode(ledPin, OUTPUT); //Set ledPin to output
	pinMode(buttonPin, INPUT);//Set buttonPin to input
	pullUpDnControl(buttonPin, PUD_UP);  //pull up to HIGH level
	
	goto Wait;
}
Wait: 
{
//Waiting for Message

	while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			printf("Recieving>>>\n\n");
			delay(x+x/2); //Set Delay to be in middle of button Press
			goto First;
		}
		else {							//button is released 
			digitalWrite(ledPin, LOW);  //Make GPIO output LOW level
			goto Wait;}}

//Transmitter --------------------------------------------------------------
		
startTransmitterFull:{
		printf("Enter Message\n");
		int i;
		digitalWrite(ledPin, LOW); //sometime the gate gets held if the program ends so this resets it
		char str[1000];
		gets(str); 
		
    if (str[i]=='A'||str[i]=='a')
{  
     printf("A");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	 
 } 
	if (str[i]=='B'||str[i]=='b')
	{
		printf("B");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
	}
	if (str[i]=='C'||str[i]=='c')
	{
	printf("C");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
	}
	if (str[i]=='D'||str[i]=='d')
	{
		printf("D");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='E'||str[i]=='e')
	{
		printf("E");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);
		}
	if (str[i]=='F'||str[i]=='f')
	{
		printf("F");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);		
		}
	if (str[i]=='G'||str[i]=='g')
	{
		printf("G");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);
	}
	if (str[i]=='H'||str[i]=='h')
	{
		printf("H");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='I'||str[i]=='i')
	{
		printf("I");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='J'||str[i]=='j')
	{
		printf("J");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='K'||str[i]=='k')
	{
		printf("K");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);		
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='L'||str[i]=='l')
	{
		printf("L");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='M'||str[i]=='m')
	{
		printf("M");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='N'||str[i]=='n')
	{
		printf("N");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);
		}
	if (str[i]=='O'||str[i]=='o')
	{
		printf("O");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='P'||str[i]=='p')
	{
		printf("P");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);
		}
	if (str[i]=='Q'||str[i]=='q')
	{
		printf("Q");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);
		}
	if (str[i]=='R'||str[i]=='r')
	{
		printf("R");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);
		}
	if (str[i]=='S'||str[i]=='s')
	{
		printf("S");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='T'||str[i]=='t')
	{
		printf("T");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);
		}
	if (str[i]=='U'||str[i]=='u')
	{
		printf("U");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);
		}
	if (str[i]=='V'||str[i]=='v')
	{
		printf("V");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);
		}
	if (str[i]=='W'||str[i]=='w')
	{
		printf("W");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='X'||str[i]=='x')
	{
		printf("X");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='Y'||str[i]=='y')
	{
		printf("Y");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='Z'||str[i]=='z')
	{
		printf("Z");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
	}
	
	
	
	
	
	
    if(str[i]==' ')
    {
     printf("_");
     delay(x*4);
    }
   


	if (str[i]=='1')
	{
		printf("1\n");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
	}
	if (str[i]=='2')
	{
		printf("2");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
			}
	if (str[i]=='3')
	{			
		printf("3");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);
		}
	if (str[i]=='4')
	{
		printf("4");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='5')
	{
			printf("5");
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='6')
	{
			printf("6");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);		
		}
	if (str[i]=='7')
	{
		printf("7");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='8')
	{
		printf("8");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
		}
	if (str[i]=='9')
	{
		printf("9");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x);	
		digitalWrite(ledPin, LOW);
		delay(x*3);		
		}
	if (str[i]=='0')
	{
			printf("0");
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x);	
		digitalWrite(ledPin, HIGH); 
		delay(x*3);	
		digitalWrite(ledPin, LOW);
		delay(x*3);	
	}
 
   

   

  
 { printf("\nTransmission Complete"); //Status LED
			
  printf("\n");
  
  char program;
	
	printf("(T)ransmitt or (R)ecieve?: \n"); //Option to Change
	scanf ("%c", &program);	

while(1) 
		{
		if (program == 'T' || program == 't'){  
			printf("Transmit\n");
			delay (500);
			goto startTransmitterFull;}
		
		if (program == 'R' || program == 'r'){  
			printf("Recieve\n");
			delay (500);
			goto startRecieverFull;}
		}	}
	
		
}
// Back to the Reciever -------------------------------------------------
WaitAlt: //New Letter or New Word?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //On so Next Letter
			
			if (sum==21){ printf("A");} //Decode to AlphaNum
			if (sum==1112){printf("B");}
			if (sum==1212){ printf("C");}
			if (sum==112){printf("D");}
			if (sum==1){ printf("E");}
			if (sum==1211){printf("F");}
			if (sum==122){ printf("G");}
			if (sum==1111){printf("H");}
			if (sum==11){ printf("I");}
			if (sum==2221){printf("J");}
			if (sum==212){ printf("K");}
			if (sum==1121){printf("L");}
			if (sum==22){ printf("M");}
			if (sum==12){printf("N");}
			if (sum==222){ printf("O");}
			if (sum==1221){printf("P");}
			if (sum==2122){ printf("Q");}
			if (sum==121){printf("R");}
			if (sum==111){ printf("S");}
			if (sum==2){printf("T");}
			if (sum==211){ printf("U");}
			if (sum==2111){printf("V");}
			if (sum==221){ printf("W");}
			if (sum==2112){printf("X");}
			if (sum==2212){ printf("Y");}
			if (sum==1122){printf("Z");}
			if (sum==22221){printf("1");}
			if (sum==22211){ printf("2");}
			if (sum==22111){printf("3");}
			if (sum==21111){ printf("4");}
			if (sum==11111){printf("5");}
			if (sum==11112){ printf("6");}
			if (sum==11122){printf("7");}
			if (sum==11222){ printf("8");}
			if (sum==12222){printf("9");}
			if (sum==22222){ printf("0");}
	
			sum=0;
			delay(x);
			goto First;
		}
		else {							//OFF
			digitalWrite(ledPin, LOW);  //End of the Word
			
			if (sum==21){ printf("A");} //Decode to AlphaNum
			if (sum==1112){printf("B");}
			if (sum==1212){ printf("C");}
			if (sum==112){printf("D");}
			if (sum==1){ printf("E");}
			if (sum==1211){printf("F");}
			if (sum==122){ printf("G");}
			if (sum==1111){printf("H");}
			if (sum==11){ printf("I");}
			if (sum==2221){printf("J");}
			if (sum==212){ printf("K");}
			if (sum==1121){printf("L");}
			if (sum==22){ printf("M");}
			if (sum==12){printf("N");}
			if (sum==222){ printf("O");}
			if (sum==1221){printf("P");}
			if (sum==2122){ printf("Q");}
			if (sum==121){printf("R");}
			if (sum==111){ printf("S");}
			if (sum==2){printf("T");}
			if (sum==211){ printf("U");}
			if (sum==2111){printf("V");}
			if (sum==221){ printf("W");}
			if (sum==2112){printf("X");}
			if (sum==2212){ printf("Y");}
			if (sum==1122){printf("Z");}
			if (sum==22221){printf("1");}
			if (sum==22211){ printf("2");}
			if (sum==22111){printf("3");}
			if (sum==21111){ printf("4");}
			if (sum==11111){printf("5");}
			if (sum==11112){ printf("6");}
			if (sum==11122){printf("7");}
			if (sum==11222){ printf("8");}
			if (sum==12222){printf("9");}
			if (sum==22222){ printf("0");}
			sum=0;
			delay(x*4);
			goto Space;
		}
}
}
Space: //New Word or Full Stop?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //Another Blip so New Word
			delay(x);
			printf(" ");
			goto First;
		}
		else {							//Still Nothing Must be a Full Stop
			digitalWrite(ledPin, LOW);  //Make GPIO output LOW level
			goto Finished;
		}
	}}
First: //First Letter/Number to come in
{
while(1){
	
		if(digitalRead(buttonPin) == HIGH){ //Must be a Dash because On 
			
			sum= Raw+2;
			delay (x*3);
			goto Second;}
		else {							//Must be a Dot because Off
			
			sum= Raw+1;
			delay(x);
			goto Second;}}
}
Second:{ //anything else?
while(1){
		if(digitalRead(buttonPin) == HIGH){ //Another Blip
			delay(x);
			goto Second2;}
		else{
			digitalWrite(ledPin, LOW);//Still nothing so must be a new word or end
			
			delay(x*2);
			goto WaitAlt;}} //Next Word or End

}
Second2:{  //is it a dot or dash?
while(1){
		if(digitalRead(buttonPin) == HIGH){ //Must be a Dash because On
			
			sum=sum+20;
			delay (x*3);
			goto Third;}
		else{digitalWrite(ledPin, LOW);//Must be a Dot because OFF
			
			sum=sum+10;
			delay(x);
			goto Third;}}
}

Third:{ //anything else?
while(1){
		if(digitalRead(buttonPin) == HIGH){ ////Another Blip
			delay(x);
			goto Third2;}
		else{digitalWrite(ledPin, LOW);//Still nothing so must be a new word or end
			
				delay(x*2);
			goto WaitAlt;}} //Next Word or End		
}
Third2:{ //is it a dot or dash?
while(1){
		if(digitalRead(buttonPin) == HIGH){ //Must be a Dash because On
			
			sum=sum+200;
			delay (x*3);
			goto Fourth;}
		else {digitalWrite(ledPin, LOW);//Must be a Dot because Off
			
			sum=sum+100;
			delay(x);
			goto Fourth;}}
}
Fourth:{ //anything else?
while(1){
		if(digitalRead(buttonPin) == HIGH){ //Another Blip
			delay(x);
			goto Fourth2;}
		else{digitalWrite(ledPin, LOW);//Still nothing so must be a new word or end
			
				delay(x*2);
			goto WaitAlt;}} //Next Word or End
}
Fourth2:{ //is it a dot or dash?
while(1){
		if(digitalRead(buttonPin) == HIGH){ //Must be a Dash because ON
			
			sum=sum+2000;
			delay (x*3);
			goto Fifth;}
		else {digitalWrite(ledPin, LOW);//Must be a DOT because Off					 
			
			sum=sum+1000;
			delay(x);
			goto Fifth;}}
}
Fifth:{ //anything else?
while(1){
		if(digitalRead(buttonPin) == HIGH){ //Another Blip
			delay(x);
			goto Fifth2;}
		else {digitalWrite(ledPin, LOW);//Still nothing so must be a new word or end
			
				delay(x*2);
			goto WaitAlt;}} //Next Word or End
}
Fifth2:{ //is it a dot or dash?
while(1){
		if(digitalRead(buttonPin) == HIGH){ //Must be a Dash because On
			
			sum=sum+20000;
			delay (x*5);
			goto WaitAlt;}
		else {digitalWrite(ledPin, LOW);// Must be a Dot because Off 
			
			sum=sum+10000;
			delay(x*3);
			goto WaitAlt;}}
}
Finished:
	{printf("    [Full Stop]\n\n");
		  
	char programAlt;
	
	printf("(T)ransmitt or (R)ecieve?: \n");
	scanf ("%c", &program);	

while(1) 
		{
		if (programAlt == 'T' || programAlt == 't'){  
			printf("Transmit\n");
			delay (500);
			goto startTransmitterFull;}
		
		if (programAlt == 'R' || programAlt == 'r'){  
			printf("Recieve\n");
			delay (500);
			goto startRecieverFull;}
		}	
			
}}}}
//End



