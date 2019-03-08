/*
 Name:		SCpjTestUART_C3.ino
 Created:	08-Mar-19 18:17:34
 Author:	statuscue
*/

#include <SClb_Atmega2560_DMXUART_C3.h>

uint8_t level = 0;

// the setup function runs once when you press reset or power the board
void setup() {
	SCDMXUSART3.startOutput();
	SCDMXUSART3.setMaxSlots(512);
}

// the loop function runs over and over again until power down or reset
void loop() {
	SCDMXUSART3.setSlot(1, level);
	SCDMXUSART3.setSlot(2, level);
	SCDMXUSART3.setSlot(4, level);
	level++;
	delay(200);
}
