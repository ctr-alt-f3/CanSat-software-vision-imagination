// THIS IS PROTOTYPE CODE OF GROUND STATION - PROBABLY WILL CHANGE 1000 TIMES,
// THIS IS ONLY PROTOTYPE
#define SUCCESS_EXIT 0
#include <netinet/in.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h> //all those libraries are useless, but first i will write this, than i will comment them out
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
char sendInstruction(__int128_t instruction) {
  // this will have an instruction - it will use opcodes, as previous one (this
  // idea saves a lot of data to send)

  return 0;
}
struct GPS {
  float x;
  float y;
} gps;
/*char senddata() {
  return 0;
}*/ //this would be useless so we use
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
  return SUCCESS_EXIT;
};
/*TODO
 * data will be sent and parsed as this struct
 * all comments are actually todo's
 */
