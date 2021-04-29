#include "BMS_CurRead.h"


#include <stdio.h>

int NumberofContRange=0;

int NumberofContinuousRange(int *ChargingCurrentReadings, int numOfCCReadings)
{
	int l_NumberofContRange=NumberofContRange;
	NumberofContRange=0;
	return l_NumberofContRange;
}
	
void swap(int *xp, int *yp)
{
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}

Successtype printFunction( int StartIndex, int EndIndex, int NumberinRange)
{
	 printf("The number of readings in the range %d - %d is %d",  StartIndex, EndIndex , NumberinRange);
	 return PrintSuccess;
}

void SortArray(int *ChargingCurrentReadings, int numOfCCReadings)
{
	int next_index=0;
	for (int i=0;i<numOfCCReadings-1;i++)
    {
        next_index=i;
        for (int j=i+1;j<numOfCCReadings;j++)
        {
            if (ChargingCurrentReadings[j]<ChargingCurrentReadings[next_index])
            {
                next_index=j;
            }
        }

        swap(&ChargingCurrentReadings[next_index],&ChargingCurrentReadings[i]);
    }
}

void DetectContinuousRange( int *ChargingCurrentReadings, int numOfCCReadings)
{
	int StartIndex=0;
	bool IsStart=1;
	int Iscontinuous=1;
	SortArray(ChargingCurrentReadings, numOfCCReadings);
	for (int i=0; i<numOfCCReadings; i++)
	{
		if (IsStart==1)
		{
			 StartIndex=ChargingCurrentReadings[i];
			 IsStart=0;
		}
		int j=i+1;
		int tempdiff =ChargingCurrentReadings[j]- ChargingCurrentReadings[i];
		if (tempdiff== 0 ||tempdiff== 1)
		{
			Iscontinuous++;
		}
		else
		{
		   NumberofContRange++;
		   printFunction(StartIndex,ChargingCurrentReadings[i], Iscontinuous);
		   StartIndex= ChargingCurrentReadings[j];
		   Iscontinuous=1;
		}
	}
	
}
