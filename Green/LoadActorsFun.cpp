#include "stdafx.h"
#include "Headers.h"
#include "GameFunctions.h"

void LoadAnimation_Title(GameNode* gn)
{
	SpriteList[0].TotalAnimations = 1;
	SpriteList[0].Animations = new AnimationElem[1];

	SpriteList[0].Animations[0].TotalFrames=1;
	SpriteList[0].Animations[0].ConnectTo = 0;
	SpriteList[0].Animations[0].Frames = new FrameElem[1];

	SpriteList[0].Animations[0].Frames[0].BitmapName = "Face.bmp";
	SpriteList[0].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[0].Delay = 1;
	SpriteList[0].Animations[0].Frames[0].Width = 160;
	SpriteList[0].Animations[0].Frames[0].Height = 160;
	SpriteList[0].Animations[0].Frames[0].Transparency = RGB(62,206,57);
	SpriteList[0].Animations[0].Frames[0].hFlip = false;
	SpriteList[0].Animations[0].Frames[0].vFlip = false;
	SpriteList[0].Animations[0].Frames[0].zRotation = 0;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].x = 80;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].y = 80;
	::SetRect( &SpriteList[0].Animations[0].Frames[0].BBox, 0, 0, 159,159);
	SpriteList[0].Animations[0].Frames[0].centerX = 80;
	SpriteList[0].Animations[0].Frames[0].centerY = 80;
	SpriteList[0].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[0].useTransparency = true;



	SpriteList[1].TotalAnimations = 1;
	SpriteList[1].Animations = new AnimationElem[1];

	SpriteList[1].Animations[0].TotalFrames=1;
	SpriteList[1].Animations[0].ConnectTo = 0;
	SpriteList[1].Animations[0].Frames = new FrameElem[1];

	SpriteList[1].Animations[0].Frames[0].BitmapName = "green.bmp";
	SpriteList[1].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[0].Delay = 1;
	SpriteList[1].Animations[0].Frames[0].Width = 77;
	SpriteList[1].Animations[0].Frames[0].Height = 26;
	SpriteList[1].Animations[0].Frames[0].Transparency = RGB(62,206,57);
	SpriteList[1].Animations[0].Frames[0].hFlip = false;
	SpriteList[1].Animations[0].Frames[0].vFlip = false;
	SpriteList[1].Animations[0].Frames[0].zRotation = 0;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].x = 38;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].y = 13;
	::SetRect( &SpriteList[1].Animations[0].Frames[0].BBox, 0, 0, 76,25);
	SpriteList[1].Animations[0].Frames[0].centerX = 38;
	SpriteList[1].Animations[0].Frames[0].centerY = 13;
	SpriteList[1].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[0].useTransparency = true;



}

void LoadAnimation_Game(GameNode* gn)
{
}

