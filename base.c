// THIS IS PROTOTYPE CODE OF GROUND STATION - PROBABLY WILL CHANGE 1000 TIMES,
// THIS IS ONLY PROTOTYPE
#define POLY 0x07 //for this case  - this is the best
#define SUCCESS_EXIT 0
#define RADIO_FREQ ? //TODO - read documentation
#define RADIO_POWER ?
#define RADIO_BANDWITH ?
#include "OPCODES.h"
#include <netinet/in.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h> //all those libraries are useless, but first i will write this, than i will comment them out
#include <string.h>
#include <sys/socket.h> //won't be used for radio communication, but before i do this, i will propably simulate this by network
#include <unistd.h>
uint8_t crc8(uint8_t *data, size_t len, uint8_t poly); //this will be used for chksums







// TODO: CLEANUP OF CODE









/*
data - parameters like temperature pressure, etc
GPS - gps coordinates 
HASL - height above sea level
instruction - based on my "Simple Pseudo Bytecode Interpreter" project - this will contain instructions - read more on OPCODES.h file
*/
char recvv(){
char* data;
//recv data

/*
 *THIS PROPABLY WON'T BE USED
 *
 * magic = (recved & 0xF0000000) << 56;
   instruction = (recved & 0x0F000000) << 48;
   arg1 = (recved & 0x00F00000) << 40;
   arg2 = (recved & 0x000FF000) << 32;
   arg3 = (recved & 0x0000FF0) << 16;
   chksum = (recved & 0x0000000F);
if (chksum != crc8((recved & 0xFFFFFFF0),56,POLY){
perror("chcksum of instruction invalid");
}
while(1){
switch(instruction){
case OP_CUT_THE_POWER_ALL:
//some code
default:
//some code
break;
} // 
}
}
*/
//this will recv data, parse magic number and put that data in other function
return SUCCESS_EXIT;

}	

char sendInstruction(__int64_t instruction) { /*128 or 64???*/
/*
 magic = (recved & 0xF0000000) << 56; 
   instruction = (recved & 0x0F000000) << 48);
   arg1 = (recved & 0x00F00000) << 40;
   arg2 = (recved & 0x000FF000) << 32;
   arg3 = (recved & 0x0000FF0) << 16;
   chksum = (recved & 0x0000000F);
if (chksum != crc8((recved & 0xFFFFFFF0),56,POLY){
perror("chcksum of instruction invalid");}
//while(1){
switch(instruction){
case OP_CUT_THE_POWER_ALL:
//some code
break;
//TODO - end case-switch //
default:
perror("bad OPcode specified");

}//}

*/




	/*
	  instruction will be made like on this table	
/----------------------------------------------------------------------\
|NAME  |  MAGIC NUMBER 	| INSTRUCTION |  ARG1 |  ARG2 |  ARG3 | CHKSUM |
| -----|----------------|-------------|-------|-------|-------|--------|	
|TYPE  |      CHAR	|    CHAR     | UCHAR | SHORT | SHORT |  CHAR  |
|------|----------------|-------------|-------|-------|-------|--------|
|SIZE  |        1	|     1       |   1   |   2   |   2   |   1    |  (1+1+1+2+2+1 = 8) 8 bytes 
\----------------------------------------------------------------------/
         -------------------------------------------
maybe i will just use structs???
MAGIC NUMBER - thanks to this, we know that it's an instruction, not data like GPS, or structure

INSTRUCTION - OP_* - number

ARG 1-3 - specyfic for instructions. ARG2 and ARG3 will sometimes function as imm values (in some cases, 
like OP_CHANGE_RADIO_STATS ARG1 too)

CHKSUM - simple checksum of each opcode, so no accidental changes (thanks to communication) will occur - propably will use CRC-8

*/
	// this will have an instruction - it will use opcodes, as previous one (this
  // idea saves a lot of data to send)
  return SUCCESS_EXIT;
}

struct GPS {
  long long x;
  long long y;
} gps;
char sendHASL /*Height Above Sea Level*/ (/*GPS coordinates*/) {
  // this will get GPS coordinates, and find in database or google earth the
  // height above sea level of ground in that place
  return SUCCESS_EXIT;
}
struct data {
  int temperature;
  int pressure;    // will be transformed to height above sea level
 /* int latitude;    // geographical latitude
  int geoaltitude; // geographical altitude*/
} d1;
// data in the same order as in CS.c

int main() {
  // allocating data
  //
  // main loop
  // loop:
  // loop;
//freeing heap memory and other weird stuff
      	return SUCCESS_EXIT;
};
/*TODO 
 * data will be sent and parsed as this struct
 * all comments are actually todo's
 */
uint8_t crc8(uint8_t *data, size_t len, uint8_t poly) {
  uint8_t crc = 0;
  for (size_t i = 0; i < len; i++) {
    crc ^= data[i];
    for (int j = 0; j < 8; j++) {
      if (crc & 0x80) {
        crc = (crc << 1) ^ poly;
      } else {
        crc <<= 1;
      }
    }
  }
  return crc;
}//does it make any sense??? TODO


