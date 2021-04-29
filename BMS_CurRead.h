

// boolean IsContinuousRangeExists( int *ChargingCurrentReadings, int numOfCCReadings);
int NumberofContinuousRange( int *ChargingCurrentReadings, int numOfCCReadings);
RangeReading *DetectContinuousRange( int *ChargingCurrentReadings, int numOfCCReadings)
int DetectNumReadingsInRange( int *ChargingCurrentReadings);

typedef struct{
	int StartIndex;
	int EndIndex;
	int NumOfReadingsInRange;
}RangeReading;

