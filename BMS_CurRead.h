
typedef struct{
	int StartIndex;
	int EndIndex;
	int NumOfReadingsInRange;
}RangeReading;

int NumberofContinuousRange( int *ChargingCurrentReadings, int numOfCCReadings);
RangeReading *DetectContinuousRange( int *ChargingCurrentReadings, int numOfCCReadings)
int DetectNumReadingsInRange( int *ChargingCurrentReadings);


