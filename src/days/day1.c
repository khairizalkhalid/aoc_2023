#include "day1.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int day1_part1() {
  printf("Running Day 1 Part 1\n");

  // First digit and Last digit to form 2 digit number ie:
  // 1abc2 - 12
  // pqr3stu8vwx - 38
  // a1b2c3d4e5f - 15
  // treb7uchet - 77
  // then total it up
  // = 142

  // init totalCalibration = 0
  // read file
  // split each line into a listOfString
  // loop thru the listOfString
  // take first and last, concat then cast into int and add into
  // totalCalibration end loop print totalCalibration

  int totCalib = 0;
  FILE *fp = fopen("input/day1part1.txt", "r");
  if (!fp) {
    perror("File open error");
    return 1;
  }

  char line[256];

  while (fgets(line, sizeof(line), fp)) {
    int len = strlen(line);
    char firstDigit = '\0';
    char lastDigit = '\0';

    for (int i = 0; i <= len; i++) {
      if (isdigit(line[i])) {
        firstDigit = line[i];
        break;
      }
    }
    for (int i = len; i >= 0; i--) {
      if (isdigit(line[i])) {
        lastDigit = line[i];
        break;
      }
    }

    char combDigit[] = {firstDigit, lastDigit, '\0'};
    char *combEndptr;
    int intDigit = strtol(combDigit, &combEndptr, 10);

    if (*combEndptr == '\0') {
      totCalib += intDigit;
    } else {
      printf("Invalid input: %s\n", combEndptr);
    }
  }

  fclose(fp);

  printf("Total Calibration: %i\n", totCalib);

  return 0;
}
