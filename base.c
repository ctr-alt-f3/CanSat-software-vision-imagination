// THIS IS PROTOTYPE CODE OF GROUND STATION - PROBABLY WILL CHANGE 1000 TIMES,
// THIS IS ONLY PROTOTYPE
#include <netinet/in.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h> //all those libraries are useless, but first i will write this, than i will comment them out
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
//
char sendstruct() {
  // this code will send "data" struct (including temperature etc.)

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

  ///
  return 0;
};
/*TODO
 * data will be sent and parsed as this struct
 *
 */
