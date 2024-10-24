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
struct data {
  int temperature;
  int pressure;    // will be transformed to height above sea level
  int latitude;    // geographical latitude
  int geoaltitude; // geographical altitude
} data;
// data must be in the same order as in base.c
int main() {

  ///
  return 0;
};
