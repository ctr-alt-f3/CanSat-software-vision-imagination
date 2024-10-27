// THIS IS PROTOTYPE CODE OF GROUND STATION - PROBABLY WILL CHANGE 1000 TIMES,
// THIS IS ONLY PROTOTYPE
#define SUCCESS_EXIT 0
#define RADIO_FREQ ?
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


char sendInstruction(__int64_t instruction) { /*128 or 64???*/
/*
	 instruction will be made like on this table	
/---------------------------------------------------------------------\
|NAME  |  MAGIC NUMBER 	| INSTRUCTION | ARG1 |  ARG2 |  ARG3 | CHKSUM |
| -----|----------------|-------------|------|-------|-------|--------|	
|TYPE  |      CHAR	|    CHAR     | CHAR | SHORT | SHORT |  CHAR  |
|------|----------------|-------------|------|-------|-------|--------|
|SIZE  |        1	|     1       |  1   |   2   |   2   |   1    |  (1+1+1+2+2+1 = 8) 8 bytes 
\----------------------------------------------------------------------/
         -------------------------------------------

MAGIC NUMBER - thanks to this, we know that it's an instruction, not data like GPS, or structure

INSTRUCTION - OP_* - number

ARG 1-3 - specyfic for instructions. ARG2 and ARG3 will sometimes function as imm values (in some cases, 
like OP_CHANGE_RADIO_STATS ARG1 too)

CHKSUM - simple checksum of each opcode, so no accidental changes (thanks to communication) will occur

*/
	// this will have an instruction - it will use opcodes, as previous one (this
  // idea saves a lot of data to send)
  return 0;
}

struct GPS {
  float x;
  float y;
} gps;
char sendHASL /*Height Above Sea Level*/ (/*GPS coordinates*/) {
  // this will get GPS coordinates, and find in database or google earth the
  // height above sea level of ground in that place
  return 0;
}
struct data {
  int temperature;
  int pressure;    // will be transformed to height above sea level
  int latitude;    // geographical latitude
  int geoaltitude; // geographical altitude
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
