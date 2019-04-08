#include "stdafx.h"
#include "Headers.h"
#include "LocalDataFun.h"
#include "GameFunctions.h"

void Mode()
{
	SetMode(800,600,32);
	_IsWindowed = true;
}

void SetDataPath()
{
	ArtAssetsPath = "";
	RTDPath = "";
};

void BuildLogic()
{
	FArray = NewVoidPointers(1);
	FArray[FN_GREENPARTICLEMANAGER] = (void*)GreenParticleManager;

	maxFIndex = 0;

	TMArray = NewTimers(1);
	TMArray[TIMER_GREENPARTICLEMANAGER] = Timer(GetTimerFunction(FN_GREENPARTICLEMANAGER),5,TU_GameLoops,true,TM_Infinite);

	maxTMIndex = 0;

	NArray = NewNodePointers(1);
	static GreenParticleLD ld_greenparticleld;
	NArray[LD_GREENPARTICLELD] = (GreenParticleLD*)&ld_greenparticleld;
	maxNIndex = 0;

};

void OnGameStart()
{
	myGame->LevelName("Game");
};

void OnGameEnd(){
};

void OnSave(File& file)
{
	
};

void OnLoad(File& file)
{
	
};

void Fun()
{
	GameNode *g1;
	g1=NewGameNode();
	g1->Id(1);
	g1->Name("Title");
	g1->gameNodeActorsFunction = LoadAnimation_Title;
	g1->gameNodeLevelFunction = Init_TitleFunction;
	g1->transitionFunction = Exit_TitleFunction;
	g1->endLevelFunction = End_TitleFunction;
	myGame->Add(g1);

	GameNode *g2;
	g2=NewGameNode();
	g2->Id(2);
	g2->Name("Game");
	g2->gameNodeActorsFunction = LoadAnimation_Game;
	g2->gameNodeLevelFunction = Init_GameFunction;
	g2->transitionFunction = Exit_GameFunction;
	g2->endLevelFunction = End_GameFunction;
	myGame->Add(g2);


	myGame->Title("Green");
}
