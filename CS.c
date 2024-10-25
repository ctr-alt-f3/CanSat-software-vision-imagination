// THIS IS PROTOTYPE CODE OF CANSAT - PROBABLY WILL CHANGE 1000 TIMES, THIS IS
// ONLY PROTOTYPE
#include <netinet/in.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

/*-------------------------------------------------------------------------------*/
// multiple functions, because i don't need to type magic numbers individually
/*--------------------------------------------------------------------------------*/

unsigned short HASL; // height above sea level
/*char sendInstruction(__int128_t instruction) {
  // this will have an instruction - it will use opcodes, as previous one (this
  // idea saves a lot of data to send)

  return 0;
}*/ //this would be probably useless, but idk
char senddata() {
  // send struct with parameters/data (temperature etc.)
  return 0;
}
float GPS[1]; // x and y
char recvdata() {
  // this will be much harder
  // firstly i have to get this data, parse it (by magic number), and send rest
  // of this to otherfuction function
  return 0;
}
char sendGPS() { return 0; }
/*char readdata(){
}*/ // this would be useless for CS
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
  return 0;
};
/*TODO:
 *everything tbh
 *
 *
 */
