
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


//////////////// I2C ////////////////////
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

void R_Config_RIIC0_Start(void);
void R_Config_RIIC0_Stop(void);
MD_STATUS R_Config_RIICn0_Master_Send(uint16_t adr, uint8_t * const tx_buf, uint16_t tx_num);
MD_STATUS R_Config_RIICn0_Master_Send_Without_Stop(uint16_t adr, uint8_t * const tx_buf, uint16_t
tx_num);
MD_STATUS R_Config_RIICn0_Master_Receive(uint16_t adr, uint8_t * const rx_buf, uint16_t rx_num);

//////////////// I2C ////////////////////


#ifndef LVDSDRV_H
#define LVDSDRV_H
#include "Dio.h"

#define LVDS_ADDRESS 0x0002
#define NUMBER_REG_ERR 4
#define NUMBER_REG_CONFIG 3

int tableConfig[NUMBER_REG_CONFIG][3] = {
    {0x00, 0x00, 0x01},
    {0x00, 0x01, 0x03},
    {0x00, 0x02, 0x04}
};

int tableRegErr[NUMBER_REG_ERR][2] = {
    {0x00, 0x01}
    {0x00, 0x02}
    {0x00, 0x03}
    {0x00, 0x04}
};

uint8_t LVDS_ReceiveBuffer[NUMBER_REG_ERR];

void LVDSDrv_Init();
int LVDSDrv_GetError();
int LVDSDrv_CheckLock();
int LVDSDrv_CheckError();
void LVDSDrv_Configuration();
void LVDSDrv_PinPWDDNB(int level);
////////////////////////////////////
#endif