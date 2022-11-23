#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"
#include "cmsis_os2.h"

//#include "FreeRTOSConfig.h"

int counter=1;
int Progress;
int ProgressUpdate;
int DSflag=1;
int SDflag;
extern "C"{
     extern osMessageQueueId_t CallMeasurementHandle;
     extern osMessageQueueId_t ProgressBarHandle;
     extern osMessageQueueId_t SaveDataCheckHandle;
     extern osMessageQueueId_t SaveDataEndHandle;
    // extern osMessageQueueId_t SaveDataCheckHandle;

}
 Model::Model() : modelListener(0)
{
   // messageQ = xQueueGenericCreate(1, 1, 0);
}

void Model::tick()
{

}

void Model::Callmeasurement()
{
	osMessageQueuePut(CallMeasurementHandle, &counter,0, 20);

}

void Model::ProgressCheck()
{
	osMessageQueueGet(ProgressBarHandle, &Progress,0, osWaitForever);
	ProgressUpdate=((float)Progress-5)/25*100;
}

void Model::DataSaveStart(){
	osMessageQueuePut(SaveDataCheckHandle, &DSflag, 0, 20);
}
void Model::DataSaveEnd(){
	osMessageQueueGet(SaveDataEndHandle, &SDflag, 0, osWaitForever);
}



