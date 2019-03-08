/*
 Name:		SCpjTestUART_C1.ino
 Created:	08-Mar-19 17:33:20
 Author:	statuscue
*/

#include <SClb_Atmega2560_DMXUART_C1.h>

uint8_t level = 0;

// the setup function runs once when you press reset or power the board
void setup() {
	SCDMXUSART1.startOutput();
	SCDMXUSART1.setMaxSlots(512);
}

// the loop function runs over and over again until power down or reset
void loop() {
	SCDMXUSART1.setSlot(1, level);
	SCDMXUSART1.setSlot(2, level);
	SCDMXUSART1.setSlot(4, level);
	level++;
	delay(200);
}