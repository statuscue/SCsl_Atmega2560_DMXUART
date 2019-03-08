/*
 Name:		SCpjTestUART_C2.ino
 Created:	08-Mar-19 17:58:31
 Author:	statuscue
*/

#include <SClb_Atmega2560_DMXUART_C2.h>

uint8_t level = 0;

// the setup function runs once when you press reset or power the board
void setup() {
	SCDMXUSART2.startOutput();
	SCDMXUSART2.setMaxSlots(512);
}

// the loop function runs over and over again until power down or reset
void loop() {
	SCDMXUSART2.setSlot(1, level);
	SCDMXUSART2.setSlot(2, level);
	SCDMXUSART2.setSlot(4, level);
	level++;
	delay(200);
}
