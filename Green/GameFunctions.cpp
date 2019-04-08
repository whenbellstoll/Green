#include "stdafx.h"
#include "Headers.h"
#include "LocalDataFun.h"
#include "GameFunctions.h"

void GreenParticleManager(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"GreenParticleManager");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	GreenParticleLD * pG = GetGreenParticleLD(This);
	//This controls the generation of Green sprites 
	
	if(RandInt(3) >= 1 )
	{
		RandReset(timeGetTime());
	}
	
	int xpos = RandInt(751);
	int ypos = RandInt(571);
	
	//check if eight hundred objects have not been generated.
	if( pG->Count < 800 )
	{
	
		//make new
		SpriteCopy2("masterGreen", "Green", xpos, ypos);
		pG->Count++;
	}
	
};

