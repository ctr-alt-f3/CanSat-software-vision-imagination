#include <netinet/in.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h> //all those libraries are useless, but first i will write this, than i will comment them out
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
//
struct data {
  int temperature;
  int pressure;    // will be transformed to height above sea level
  int latitude;    // geographical latitude
  int geoaltitude; // geographical altitude
} data;

int main() {

  ///
  return 0;
};
/*TODO
 * data will be sent and parsed as this struct
 *
 */
