/*
 Name:		SCpjTestAll4UART.ino
 Created:	08-Mar-19 18:41:04
 Author:	statuscue
*/

#include <SClb_Atmega2560_DMXUART_C0.h>
#include <SClb_Atmega2560_DMXUART_C1.h>
#include <SClb_Atmega2560_DMXUART_C2.h>
#include <SClb_Atmega2560_DMXUART_C3.h>

uint8_t level = 0;

// the setup function runs once when you press reset or power the board
void setup() {
	SCDMXUSART0.startOutput();
	SCDMXUSART0.setMaxSlots(512);
	SCDMXUSART1.startOutput();
	SCDMXUSART1.setMaxSlots(512);
	SCDMXUSART2.startOutput();
	SCDMXUSART2.setMaxSlots(512);
	SCDMXUSART3.startOutput();
	SCDMXUSART3.setMaxSlots(512);
}

// the loop function runs over and over again until power down or reset
void loop() {
	SCDMXUSART0.setSlot(1, level);
	SCDMXUSART0.setSlot(2, level);
	SCDMXUSART0.setSlot(4, level);
	SCDMXUSART1.setSlot(1, level);
	SCDMXUSART1.setSlot(2, level);
	SCDMXUSART1.setSlot(4, level);
	SCDMXUSART2.setSlot(1, level);
	SCDMXUSART2.setSlot(2, level);
	SCDMXUSART2.setSlot(4, level);
	SCDMXUSART3.setSlot(1, level);
	SCDMXUSART3.setSlot(2, level);
	SCDMXUSART3.setSlot(4, level);
	level++;
	delay(200);
}
