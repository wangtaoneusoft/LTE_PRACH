#ifndef LTE_PHY_PRACH_H
#define LTE_PHY_PRACH_H

#include "lte_common_type.h"

#define D_LTE_DL_UL_CONFIG 7
#define D_LTE_PRACH_CONFIG_SHIFT_INDEX 154


typedef struct
{
	uint8 u8f_RA;
	uint8 u8t_RA0;
	uint8 u8t_RA1;
	uint8 u8t_RA2;
}LTE_PRACH_TDD_TIMING_FREQ_STRU;

 
#endif
