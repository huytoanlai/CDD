#ifndef LVDSDRV_H
#define LVDSDRV_H
///////////////// Std_Types.h ///////////////////


#define STD_HIGH		0x01
#define STD_LOW			0x00

typedef uint8 Std_ReturnType;

#define E_OK 					(Std_ReturnType)0
#define E_NOT_OK 				(Std_ReturnType)1


///////// DIO.h ///////////////
#define PIN_ERROR (Dio_ChannelType)1
#define PIN_LOCK (Dio_ChannelType)2
#define PIN_PWD (Dio_ChannelType)4

typedef uint8 Dio_LevelType;
typedef uint8 Dio_ChannelType;

Dio_LevelType Dio_ReadChannel(Dio_ChannelType channelId);

void Dio_WriteChannel(Dio_ChannelType channelId, Dio_LevelType level);


////////////////////////////////////

#define LVDS_ADDRESS 0x02


void LVDSDrv_Init();
int LVDSDrv_GetError();
int LVDSDrv_CheckLock();
int LVDSDrv_CheckError();
void LVDSDrv_Configuration();
void LVDSDrv_PinPWDDNB(int level);
////////////////////////////////////
#endif