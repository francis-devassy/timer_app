//**************************** TIMER APP ***************************************
//  Copyright (c) 2025 Trenser Technology Solutions
//  All Rights Reserved
//******************************************************************************
// 
// File		: main.c
// Summary	: Prints system time
// Note		: Prints system time
// Author	: Francis V D
// Date		: 19-December-2025
// 
//******************************************************************************
 
//******************************* Include Files ********************************
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include "customTypes.h"
#include "display.h"

//******************************* Local Types **********************************
 
//***************************** Local Constants ********************************
#define MESSAGE "Hello, World !\n"

//***************************** Local Variables ********************************
 
//****************************** Local Functions *******************************

//******************************.FUNCTION_HEADER.*******************************
//Purpose	: Main function, display messages and system time.
//Inputs	: None
//Outputs	: None
//Return	: Return 0 at time of successfull execution
//Notes		: Main function, display messages and system time.
//******************************************************************************
int main (void)
{
	
	while (1)
	{
		displayShow((const uint8*)MESSAGE);
		
		sleep(1);
	}
	return 0;
}
// EOF
