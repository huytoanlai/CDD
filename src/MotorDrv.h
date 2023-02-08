#ifndef MOTORDRV_H
#define MOTORDRV_H
/////////////////////////

enum E_MotorState {
    STOP_STATE, 
    RUN_STATE, 
    ERROR_STATE
};

enum E_StartSequence {
    NO_START_SEQUENCE,
    START_SEQUENCE_ENBACKLIGHT,
    START_SEQUENCE_MS1MS2DIR,
    START_SEQUENCE_ENBL,
    START_SEQUENCE_NSLEEP
};

enum E_StopSequence {
    NO_STOP_SEQUENCE,
    STOP_SEQUENCE_NSLEEP,
    STOP_SEQUENCE_ENBL,
    STOP_SEQUENCE_MS1MS2DIR,
    STOP_SEQUENCE_ENBACKLIGHT
};

enum E_ResetSequence {
    NO_RESET_SEQUENCE,
    RESET_START_SEQUENCE_ENBACKLIGHT,
    RESET_START_SEQUENCE_MS1MS2DIR,
    RESET_START_SEQUENCE_ENBL,
    RESET_START_SEQUENCE_NSLEEP
    RESET_STOP_SEQUENCE_NSLEEP = 101,
    RESET_STOP_SEQUENCE_ENBL = 102,
    RESET_STOP_SEQUENCE_MS1MS2DIR = 103,
    RESET_STOP_SEQUENCE_ENBACKLIGHT = 104
};

int MotorDrv_GetState();
void MotorDrv_SetState(int motorState);
void MotorDrv_StartSequence();
void MotorDrv_StopSequence();
void MotorDrv_ResetSequence();

/////////////////////////
#endif