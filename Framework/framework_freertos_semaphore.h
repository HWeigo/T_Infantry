#ifndef FRAMEWORK_FREERTOS_SEMAPHORE_H
#define FRAMEWORK_FREERTOS_SEMAPHORE_H

#include "cmsis_os.h"

extern osSemaphoreId motorCanTransmitSemaphoreHandle;
extern osSemaphoreId motorCanReceiveSemaphoreHandle;
extern osSemaphoreId refreshGimbalSemaphoreHandle;
extern osSemaphoreId motorCanHaveTransmitSemaphoreHandle;

extern osSemaphoreId readMPU6050SemaphoreHandle;
extern osSemaphoreId refreshMPU6050SemaphoreHandle;
extern osSemaphoreId refreshIMUSemaphoreHandle;

#endif
