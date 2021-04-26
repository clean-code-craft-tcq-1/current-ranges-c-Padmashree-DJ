#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"

//Test Driven Ranges
TEST_CASE("Case for detecting existence of continuous range in the reading array given") {
  int ChargingCurrentReadings[] = {3, 3, 5, 4, 10, 11, 12};
  int numOfCCReadings = sizeof(ChargingCurrentReadings) / sizeof(ChargingCurrentReadings[0]);
  REQUIRE(IsContinuousRangeExists(ChargingCurrentReadings, numOfCCReadings) == 1);
}

TEST_CASE("Case for detecting number of continuous range in the reading array given") {
  int ChargingCurrentReadings[] = {3, 3, 5, 4, 10, 11, 12};
  int numOfCCReadings = sizeof(ChargingCurrentReadings) / sizeof(ChargingCurrentReadings[0]);
  REQUIRE(NumberofContinuousRange(ChargingCurrentReadings, numOfCCReadings) == 2);
}

TEST_CASE("Case for detecting number of continuous range in the reading array given:Failing") {
  int ChargingCurrentReadings[] = {3, 3, 5, 4, 10, 11, 12};
  int numOfCCReadings = sizeof(ChargingCurrentReadings) / sizeof(ChargingCurrentReadings[0]);
  REQUIRE(NumberofContinuousRange(ChargingCurrentReadings, numOfCCReadings) == 3);
}

TEST_CASE("Case for detecting number of continuous range in the reading array given") {
  int ChargingCurrentReadings[] = {3, 3, 5, 4, 10, 11, 12};
  int numOfCCReadings = sizeof(ChargingCurrentReadings) / sizeof(ChargingCurrentReadings[0]);
  int Continuous_range_array[2][3]={{3,4,5},{10,11,12}};
  REQUIRE(DetectContinuousRange(ChargingCurrentReadings, numOfCCReadings) == Continuous_range_array);
}

TEST_CASE("Case for detecting number of readings in the continuous range in the reading array given") {
  int ChargingCurrentReadings[] = {3, 3, 5, 4, 10, 11, 12};
  int numOfCCReadings = sizeof(ChargingCurrentReadings) / sizeof(ChargingCurrentReadings[0]);
  int Continuous_range_array[2][3]={{3,4,5},{10,11,12}};
  REQUIRE(DetectContinuousRange(ChargingCurrentReadings, numOfCCReadings) == Continuous_range_array);
  REQUIRE(DetectNumReadingsInRange(Continuous_range_array[0])==4);
  REQUIRE(DetectNumReadingsInRange(Continuous_range_array[1])==3);
}