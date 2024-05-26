//LED Matrix Puzzle Program - Jeevan Sanchez and Rababb Pannu
//Function - Control three LED matrices to display a bridge puzzle.

#include <LedControl.h>

//Creates variables for pins on the first matrix and initializes display. 
int DIN = 12;
int CS = 11;
int CLK = 13;
LedControl lc = LedControl(DIN, CLK, CS, 2); 

//Creates variables for pins on the second matrix and initializes display. 
int DIN2 = 12; 
int CS2 = 11;  
int CLK2 = 13; 
LedControl lc2 = LedControl(DIN2, CLK2, CS2, 1); 

//Creates variables for pins on the third matrix and initializes display. 
int DIN3 = 2; 
int CS3 = 3;  
int CLK3 = 4; 
LedControl lc3 = LedControl(DIN3, CLK3, CS3, 1); 

//Turns off the shutdown mode, sets brightness levels of LEDs and clears the display. 
void setup() {
 lc.shutdown(0, false);
 lc.setIntensity(0, 0);
 lc.clearDisplay(0);

 lc2.shutdown(0, false);
 lc2.setIntensity(0, 0);
 lc2.clearDisplay(0);

 lc3.shutdown(0, false);
 lc3.setIntensity(0, 0);
 lc3.clearDisplay(0);
}

void loop() {
 
 for (int i = 0; i < 8; i++) {
   lc.setLed(0, i, 0, true);  
   lc.setLed(0, i, 1, true);  
   lc.setLed(0, i, 2, true);  
   lc.setLed(0, i, 3, false);  
   lc.setLed(0, i, 4, false);  
   lc.setLed(0, i, 5, true);  
   lc.setLed(0, i, 6, true);
   lc.setLed(0, i, 7, true);  
 }

 for (int i = 0; i < 8; i++) {
   lc2.setLed(0, i, 0, true);  
   lc2.setLed(0, i, 1, true);  
   lc2.setLed(0, i, 2, true);  
   lc2.setLed(0, i, 3, false);  
   lc2.setLed(0, i, 4, false);  
   lc2.setLed(0, i, 5, true);  
   lc2.setLed(0, i, 6, true);  
   lc2.setLed(0, i, 7, true);  
 }

 for (int i = 0; i < 8; i++) {
   lc3.setLed(0, i, 0, true);  
   lc3.setLed(0, i, 1, true);  
   lc3.setLed(0, i, 2, true);  
   lc3.setLed(0, i, 3, false);  
   lc3.setLed(0, i, 4, false);  
   lc3.setLed(0, i, 5, true);  
   lc3.setLed(0, i, 6, true);  
   lc3.setLed(0, i, 7, true); 
 }
}
