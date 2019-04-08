#include "stdafx.h"
#include "Headers.h"
#include "LocalDataFun.h"
#include "GameFunctions.h"

void LoadGameFile()
{
	
}

void Init_TitleFunction(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->WorldWidth(640);
	gn->WorldHeight(480);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	FunRect recttitle = {0,0,800,600};
	Map mtitle("title","Title.bmp",Map::STANDARDMAP,0,0,0,true,recttitle);
	mtitle.SpeedX(0.00);
	mtitle.SpeedY(0.00);
	mtitle.ScrollRatioX(0.00);
	mtitle.ScrollRatioY(0.00);
	mtitle.UseTransparency(false);
	mtitle.Visible(true);
	mtitle.Unused(false);
	mtitle.Pause(false);
	mtitle.SpacePartitionGridSize(128);
	mtitle.ShowMapCollision(false);
	gn->Add(mtitle);

	Sprite sGreenManager89656502208;
	sGreenManager89656502208.Name("GreenManager");
	sGreenManager89656502208.Visible(false);
	sGreenManager89656502208.Unused(false);
	sGreenManager89656502208.Pause(false);
	sGreenManager89656502208.Reflection(false);
	sGreenManager89656502208.MainCharacter(false);
	sGreenManager89656502208.BelongToMap("title");
	sGreenManager89656502208.ActorIndex(0);
	sGreenManager89656502208.Animation(0);
	sGreenManager89656502208.Frame(0);
	sGreenManager89656502208.PegRegistered(false);
	sGreenManager89656502208.ZOrder(0);
	sGreenManager89656502208.MapPositionX(309);
	sGreenManager89656502208.MapPositionY(251);
	sGreenManager89656502208.CheckCollisionWithMap(false);
	sGreenManager89656502208.DisplayListNumber(0);
	sGreenManager89656502208.Friction(0);
	sGreenManager89656502208.ActivateCollisionWithSprite(false);
	sGreenManager89656502208.AddLocalVariable(LD_GREENPARTICLELD);
	sGreenManager89656502208.behavior.AddTimer(TIMER_GREENPARTICLEMANAGER,true);
	sGreenManager89656502208.VectorDirection(0,0,0);
	sGreenManager89656502208.ShowVectorOfTranslation(false);
	sGreenManager89656502208.CollisionType(LOOSECOLLISION);
	sGreenManager89656502208.Speed((float)0.00);
	sGreenManager89656502208.VariableNumber(0);
	sGreenManager89656502208.ShowSpriteBoundingBox(false);
	sGreenManager89656502208.ShowSpriteCollision(false);
	sGreenManager89656502208.Gravity(false);
	gn->Add(sGreenManager89656502208);

	Sprite smasterGreen89661041221;
	smasterGreen89661041221.Name("masterGreen");
	smasterGreen89661041221.Visible(true);
	smasterGreen89661041221.Unused(true);
	smasterGreen89661041221.Pause(false);
	smasterGreen89661041221.Reflection(false);
	smasterGreen89661041221.MainCharacter(false);
	smasterGreen89661041221.BelongToMap("title");
	smasterGreen89661041221.ActorIndex(1);
	smasterGreen89661041221.Animation(0);
	smasterGreen89661041221.Frame(0);
	smasterGreen89661041221.PegRegistered(false);
	smasterGreen89661041221.ZOrder(0);
	smasterGreen89661041221.MapPositionX(0);
	smasterGreen89661041221.MapPositionY(0);
	smasterGreen89661041221.CheckCollisionWithMap(false);
	smasterGreen89661041221.DisplayListNumber(0);
	smasterGreen89661041221.Friction(0);
	smasterGreen89661041221.ActivateCollisionWithSprite(false);
	smasterGreen89661041221.VectorDirection(0,0,0);
	smasterGreen89661041221.ShowVectorOfTranslation(false);
	smasterGreen89661041221.CollisionType(LOOSECOLLISION);
	smasterGreen89661041221.Speed((float)0.00);
	smasterGreen89661041221.VariableNumber(0);
	smasterGreen89661041221.ShowSpriteBoundingBox(false);
	smasterGreen89661041221.ShowSpriteCollision(false);
	smasterGreen89661041221.Gravity(false);
	gn->Add(smasterGreen89661041221);


};

void End_TitleFunction(GameNode *gn)
{
	

};

void Exit_TitleFunction(GameNode *gn)
{
};

void Init_GameFunction(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->bNetworked = true;
	gn->minJoin = 2;
	gn->maxJoin = 2;
	GUID g = { 0x9923885, 0xd3ac, 0x4538, { 0xb3, 0x6a, 0x12, 0x7d, 0x6f, 0x41, 0x8c, 0xc0 } };
	memcpy(&gn->guidGame,&g,sizeof(GUID));
	gn->defaultPort = 3000;
	gn->returnLevel = 0;

	gn->WorldWidth(640);
	gn->WorldHeight(480);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(0,0,640,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(0);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(0);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(800);
	gn->viewPort.ViewPortHeight(600);

	FunRect rectnetwork = {0,0,800,600};
	Map mnetwork("network","Title.bmp",Map::STANDARDMAP,0,0,0,true,rectnetwork);
	mnetwork.SpeedX(0.00);
	mnetwork.SpeedY(0.00);
	mnetwork.ScrollRatioX(0.00);
	mnetwork.ScrollRatioY(0.00);
	mnetwork.UseTransparency(false);
	mnetwork.Visible(true);
	mnetwork.Unused(false);
	mnetwork.Pause(false);
	mnetwork.SpacePartitionGridSize(128);
	mnetwork.ShowMapCollision(false);
	gn->Add(mnetwork);


};

void End_GameFunction(GameNode *gn)
{
	

};

void Exit_GameFunction(GameNode *gn)
{
};

