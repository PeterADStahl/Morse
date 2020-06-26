
/**********************************************************************
* Filename    : MorseReciever2.c
* Description : Recieve and Decode Morse Code
* Author      : Peter A.D. Stahl
* modification: 2020/??/??
**********************************************************************/
#include <wiringPi.h>
#include <stdio.h>

#define ledPin    0  	//define the ledPin Output
#define buttonPin 1		//define the buttonPin gpi0 18

main()
{
Start:
{
	printf("Listening...\n");
	
	wiringPiSetup();	//Initialize wiringPi.	
	
	pinMode(ledPin, OUTPUT); //Set ledPin to output
	pinMode(buttonPin, INPUT);//Set buttonPin to input
	pullUpDnControl(buttonPin, PUD_UP);  //pull up to HIGH level
	goto Wait;
}
Wait: //Waiting for Transmission
{
	
	while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			printf("Recieving\n");
			delay(150); //Set Delay to be in middle of button Press
			goto First;
		}
		else {							//button is released 
			digitalWrite(ledPin, LOW);  //Make GPIO output LOW level
			goto Wait;
		}
}}
WaitAlt: //New Letter or New Word?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			delay(100);
			goto First;
		}
		else {							//button is released 
			digitalWrite(ledPin, LOW);  //Make GPIO output LOW level
			delay(400);
			goto Space;
		}

}}
Space: //New Word or Full Stop?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			delay(100);
			printf("__");
			goto First;
		}
		else {							//button is released 
			digitalWrite(ledPin, LOW);  //Make GPIO output LOW level
			goto Finished;
		}
	}}
First: //First Letter/Number to come in
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			printf("-"); //LED is on so must be a dash
			delay (300);
			goto Second;
		}
		else {							//button is released 
			printf("."); //LED off so must be a dot
			delay(100);
			goto Second;
		}
}}
Second: //anything else?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			delay(100);
			goto Second2;
		}
		else{
			digitalWrite(ledPin, LOW);							//Still nothing so must be a new word or end
			printf("  ");
			delay(200);
			goto WaitAlt; //Next Word or End
		}
}}
Second2:  //is it a dot or dash?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			printf("-"); //LED is on so must be a dash
			delay (300);
			goto Third;
		}
		else {
			digitalWrite(ledPin, LOW);							//button is released 
			printf("."); //LED off so must be a dot
			delay(100);
			goto Third;
		}
}}

Third: //anything else?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			delay(100);
			goto Third2;
		}
		else {
			digitalWrite(ledPin, LOW);							//Still nothing so must be a new word or end
			printf("  ");
				delay(200);
			goto WaitAlt; //Next Word or End
		}
}}
Third2: //is it a dot or dash?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			printf("-"); //LED is on so must be a dash
			delay (300);
			goto Fourth;
		}
		else {
			digitalWrite(ledPin, LOW);							//button is released 
			printf("."); //LED off so must be a dot
			delay(100);
			goto Fourth;
		}
}}
Fourth: //anything else?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			delay(100);
			goto Fourth2;
		}
		else {
			digitalWrite(ledPin, LOW);							//Still nothing so must be a new word or end
			printf("  ");
				delay(200);
			goto WaitAlt; //Next Word or End
		}
}}
Fourth2: //is it a dot or dash?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			printf("-"); //LED is on so must be a dash
			delay (300);
			goto Fifth;
		}
		else {
			digitalWrite(ledPin, LOW);							//button is released 
			printf("."); //LED off so must be a dot
			delay(100);
			goto Fifth;
		}
}}
Fifth: //anything else?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			delay(100);
			goto Fifth2;
		}
		else {
			digitalWrite(ledPin, LOW);							//Still nothing so must be a new word or end
			printf("  ");
				delay(200);
			goto WaitAlt; //Next Word or End
		}
}}
Fifth2: //is it a dot or dash?
{
while(1){
		if(digitalRead(buttonPin) == HIGH){ //button is pressed 
			printf("-"); //LED is on so must be a dash
			delay (300);
			goto WaitAlt;
		}
		else {
			digitalWrite(ledPin, LOW);							//button is released 
			printf("."); //LED off so must be a dot
			delay(100);
			goto WaitAlt;
		}
}}
Finished:

{printf("      [Full Stop]\n");
	delay (500);


   int c;

   printf( "Further Recieve? (Y/N)\n"); //Restart Program or End
   c = getchar( );
   
if (c=='Y'||c=='y')
{goto Start;}

if (c=='N'||c=='n')
{return 0;}

}}


