/*
 Name:		SCpjTestUART_C0.ino
 Created:	08-Mar-19 17:23:04
 Author:	statuscue
*/

#include <SClb_Atmega2560_DMXUART_C0.h>

uint8_t level = 0;

// the setup function runs once when you press reset or power the board
void setup() {
	SCDMXUSART0.startOutput();
	SCDMXUSART0.setMaxSlots(512);
}

// the loop function runs over and over again until power down or reset
void loop() {
	SCDMXUSART0.setSlot(1, level);
	SCDMXUSART0.setSlot(2, level);
	SCDMXUSART0.setSlot(4, level);
	level++;
	delay(200);
}
