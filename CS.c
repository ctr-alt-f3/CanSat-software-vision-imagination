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
unsigned short HASL; // height above sea level
char recvv(){
char* data;
//recv data
/* magic = (recved & 0xF0000000) << ????(TODO);
   instruction = (recved & 0x0F000000) << ????(TODO);
   arg1 = (recved & 0x00F00000) << ???; 
   arg2 = (recved & 0x000FF000) << ???;
   arg3 = (recved & 0x0000FF0) << ???;
   chksum = (recved & 0x0000000F);
*/
//this will recv data, parse magic number and put that data in other function
return SUCCESS_EXIT;
}	
char senddata() {
  // send struct with parameters/data (temperature etc.)
  return 0;
}
float GPS[1]; // x and y (idk, if float is enough)
char recvInstructions() {
  // this will be very hard
  // firstly i have to get this data, parse it (by magic number), and send rest
  // of this to other function, that will handle it
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
