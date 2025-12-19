//**************************** TIMER APP ***************************************
//  Copyright (c) 2025 Trenser Technology Solutions
//  All Rights Reserved
//******************************************************************************
// 
// File		: dispaly.c
// Summary	: Controls display module
// Note		: Controls display module
// Author	: Francis V D
// Date		: 19-December-2025
// 
//******************************************************************************
 
//******************************* Include Files ********************************
#include <stdio.h>
#include <stdbool.h>
#include "customTypes.h"
//******************************* Local Types **********************************
 
//***************************** Local Constants ********************************
 
//***************************** Local Variables ********************************
 
//****************************** Local Functions *******************************

//******************************.FUNCTION_HEADER.*******************************
//Purpose	: Display the recrived string
//Inputs	: pucMessageStr (const uint8*) - The message to be displayed
//Outputs	: None (prints directly to stdout)
//Return	: blReturn (bool) – true if message displayed successfully
//Return	: blReturn (bool) – false if any issue in display the message
//Notes		: Display the recrived strings
//******************************************************************************
bool displayShow(const uint8* pucMessageStr)
{
	bool blReturn = false;
	
	if(pucMessageStr)
	{
		printf("%s",pucMessageStr);
		blReturn = true;
	}
	
	return blReturn;
}
// EOF