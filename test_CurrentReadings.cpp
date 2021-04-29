#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"

//Test Driven Ranges

TEST_CASE("Case for detecting number of continuous range in the reading array given") {
  int ChargingCurrentReadings[] = {3, 3, 5, 4, 10, 11, 12};
  int numOfCCReadings = sizeof(ChargingCurrentReadings) / sizeof(ChargingCurrentReadings[0]);
  int Result= DetectContinuousRange(ChargingCurrentReadings, numOfCCReadings);
  REQUIRE(NumberofContinuousRange(ChargingCurrentReadings, numOfCCReadings) == 2);
}

TEST_CASE("Case for detecting number of continuous range in the reading array given:Failing") {
  int ChargingCurrentReadings[] = {3, 3, 5, 4, 10, 11, 12};
  int numOfCCReadings = sizeof(ChargingCurrentReadings) / sizeof(ChargingCurrentReadings[0]);
  int Result= DetectContinuousRange(ChargingCurrentReadings, numOfCCReadings);
  REQUIRE(NumberofContinuousRange(ChargingCurrentReadings, numOfCCReadings) == 3);
}

