#include "LVDSDrv.h"

void LVDSDrv_Init(){
    Dio_WriteChannel(PIN_LOCK, STD_LOW);
    Dio_WriteChannel(PIN_PWD, STD_LOW);
}


int LVDSDrv_CheckLock(){
    return Dio_ReadChannel(PIN_LOCK)
}

int LVDSDrv_CheckError(){
    return Dio_ReadChannel(PIN_ERROR)
}

void LVDSDrv_PinPWDDNB(int level){
    Dio_WriteChannel(PIN_PWD, level);
}

void LVDSDrv_Configuration(){

}

int LVDSDrv_GetError(){
    int result = 0x0000;
    for(int i = 0 ; i < NUMBER_REG_ERROR){
        
    }
}