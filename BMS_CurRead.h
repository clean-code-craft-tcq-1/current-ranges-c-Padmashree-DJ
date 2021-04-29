

// boolean IsContinuousRangeExists( int *ChargingCurrentReadings, int numOfCCReadings);
int NumberofContinuousRange( int *ChargingCurrentReadings, int numOfCCReadings);
void DetectContinuousRange( int *ChargingCurrentReadings, int numOfCCReadings);
int DetectNumReadingsInRange( int *ChargingCurrentReadings);

typedef enum{
	PrintSuccess
}Successtype;