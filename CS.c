// THIS IS PROTOTYPE CODE OF CANSAT - PROBABLY WILL CHANGE 1000 TIMES, THIS IS
// ONLY PROTOTYPE
#define SUCCESS_EXIT 0
#include <netinet/in.h>
#include <stdbool.h>
#include <stdint.h>
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/
#include <sys/socket.h>
#include <unistd.h>
#include "OPCODES.h"
/*-------------------------------------------------------------------------------*/
/*  multiple functions, because i don't need to type magic numbers individually  */
/*-------------------------------------------------------------------------------*/
#define RADIO_FREQ ?
#define RADIO_POWER ? 
#define RADIO_BANDWITH ?
/*enum instructions{
//all opcodes for sendInstruction function will be here
//TODO:instructions are in bad order, 
OP_SEND_PHOTO = 2,   //will send the photo from camera
OP_SEND_GPS = 3,     //will send GPS coordinates
OP_DEC_FREQ_OF_DATA_SENDING = 4,  //will decrease frequency of sending data (for example when on ground)
OP_CUT_THE_POWER_CAMERA = 6,
OP_CUT_THE_POWER_TEMPERATURE_SENSOR = 7,
OP_CUT_THE_POWER_GPS = 8,
OP_CUT_THE_POWER_ACCELEROMETR = 9, //and compass, etc.
//DANGEROUS ACTIONS
OP_CUT_THE_POWER_ALL = 0, //WILL COMPLETLY POWER OFF THE CANSAT - idk if it's good to make it's opcode "0"
		OP_CUT_THE_POWER_RADIO = 1,  //WILL COMPLETLY CUT OFF THE COMMUNICATION - dangerous
//DANGEROUS ACTIONS		
OP_INC_FREQ_OF_DATA_SENDING = 5, //normally 1 per second
OP_SEND_BATTERY_STATS = 6,
//DANGEROUS ACTION
OP_CHANGE_RADIO_STATS = 7

};*/

unsigned short HASL; // height above sea level

char senddata() {
  // send struct with parameters/data (temperature etc.)
  return 0;
}
float GPS[1]; // x and y (idk, if float is enough)
char recvInstructions() {
  // this will be very hard
  // firstly i have to get this data, parse it (by magic number), and send rest
  // of this to other function, that will handle it
  //
  //
  /*
   
   
   
	    instruction will be made like on this table	
-----------------------------------------------------------------------	
NAME  |  MAGIC NUMBER 	| INSTRUCTION | ARG1 |  ARG2 |  ARG3 | CHKSUM |
 -----|-----------------|-------------|------|-------|-------|--------|	
TYPE  |      CHAR	|    CHAR     | CHAR | SHORT | SHORT |  CHAR  |
------|-----------------|-------------|------|-------|-------|--------|
SIZE  |        1	|     1       |  1   |   2   |   2   |   1    |  (1+1+1+2+2+1 = 8) 8 bytes
-----------------------------------------------------------------------
	    -------------------------------------------

MAGIC NUMBER - thanks to this, we know that it's an instruction, not data like GPS, or structure

INSTRUCTION - OP_* - number

ARG 1-3 - specyfic for instructions. ARG2 and ARG3 will sometimes function as imm values (in some cases,
like OP_CHANGE_RADIO_STATS ARG1 too)

CHKSUM - simple checksum of each opcode, so no accidental changes (because of communication) will occur
   



   */
  return 0;
}
char sendGPS() { return 0; }
char recvHASL() {
  // this would get this, and put this in variable HASL;
  return 0;
}
struct data {
  int temperature;
  int pressure;    // will be transformed to height above sea level
  int latitude;    // geographical latitude
  int geoaltitude; // geographical altitude
} d1;
// data must be in the same order as in base.c
int main() {

  ///
  return SUCCESS_EXIT;
};
/*TODO:
 *everything, tbh
 *
 *
 */
