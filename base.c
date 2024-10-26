// THIS IS PROTOTYPE CODE OF GROUND STATION - PROBABLY WILL CHANGE 1000 TIMES,
// THIS IS ONLY PROTOTYPE
#define SUCCESS_EXIT 0
#define RADIO_FREQ ?
#define RADIO_POWER ?
#define RADIO_BANDWITH ?
#include <netinet/in.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h> //all those libraries are useless, but first i will write this, than i will comment them out
#include <string.h>
#include <sys/socket.h> //won't be used for radio communication, but before i do this, i will propably simulate this by network
#include <unistd.h>
enum instructions{
//all opcodes for sendInstruction function will be here - TODO
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
//DANGEROUS
OP_CHANGE_RADIO_STATS = 7,// power/freq/bandwith
OP_STOP_ADDIONAL_MISSION = 8, //DANGEROUS, NEVER USE THIS
OP_POWER_BUTTON_LED_CHANGE = 9,
OP_RESEND_LAST_INSTRUCTION = 10 //when data transferring isn't ideal, and CHKSUM is invalid
};



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
