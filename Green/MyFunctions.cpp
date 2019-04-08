#include "stdafx.h"
#include "Headers.h"
#include "LocalDataFun.h"
#include "GameFunctions.h"

void SpriteVectorAdd(Sprite* pSprite, float deltaX, float deltaY)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"SpriteVectorAdd");
#endif

	//SpriteVectorAdd - Adds vector components to sprite's velocity
	
	//Get the old denormalized
	float oldX = pSprite->DirectionX() * pSprite->Speed();
	float oldY = pSprite->DirectionY() * pSprite->Speed();
	
	//Add the new components
	oldX += deltaX;
	oldY += deltaY;
	
	//Set the new vector direction
	pSprite->VectorDirection( oldX, oldY );
	
	//And set the new speed
	pSprite->Speed( sqrt( ( oldX * oldX) + ( oldY * oldY ) ) );
};

Alarm * FindAlarm(char * name)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"FindAlarm");
#endif

	//FindAlarm - Return pointer to alarm object by name of name if it exists
	
	//Use alarm search to search through all alarms in the game
	Alarm* pAlarm = Alarm::Search( name );
	
	//If nothing was found, ret will be null
	if( !pAlarm )
	{
	  MessageBox( 0, "Alarm not found.", name, 0 );
	  exit( 0 );
	}
	
	//Return pointer to the alarm
	return pAlarm;
};

Sprite * FindSprite(char * name)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"FindSprite");
#endif

	//FindSprite - Return pointer to sprite by name of name if it exists
	
	//Use sprite search to search through all sprites in the game
	Sprite* pSprite = Sprite::Search( name );
	
	//If nothing was found, return will be null
	if( !pSprite )
	{
	  MessageBox( 0, "You broke the gosh darn game", name, 0 );
	  exit( 0 );
	}
	
	//Return pointer to the sprite
	return pSprite;
};

Sprite * SpriteCopy2(char *masterName, char *newName, int xPos, int yPos)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"SpriteCopy2");
#endif

	//SpriteCopy - Returns a pointer to a sprite created from a master sprite
	Sprite* pMasterSprite = NULL;
	pMasterSprite = FindSprite( masterName );
	
	//Clone a new sprite from the master sprite
	Sprite * pNewSprite = NULL;
	pNewSprite = pMasterSprite->CreateSprite();
	
	//Change the sprite's name, position, speed, angle, and usage state
	pNewSprite->Unused( false );
	pNewSprite->Name( newName );
	pNewSprite->WorldPosition( xPos, yPos );
	
	//Return the pointer to the new sprite
	return pNewSprite;
};

void SetSpriteVectorY(Sprite* pSprite, float speed)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"SetSpriteVectorY");
#endif

	//set the new Y component of motion
	float dx = pSprite->DirectionX() * pSprite->Speed();
	
	pSprite->VectorDirection( dx, speed );
	pSprite->Speed( sqrt( ( speed * speed ) + ( dx * dx ) ) );
};

void SetSpriteVectorX(Sprite* pSprite, float speed)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"SetSpriteVectorX");
#endif

	  //set the new X component of motion
	float dy = pSprite->DirectionY() * pSprite->Speed();
	
	pSprite->VectorDirection( speed, dy );
	pSprite->Speed( sqrt( ( speed * speed ) + ( dy * dy ) ) );
};

Map * FindMap(char * name)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"FindMap");
#endif

	//FindMap - Return pointer to map object by name of name if it exists
	
	//Use map search to search through all maps in the game
	Map* pMap = Map::Search( name );
	
	//If nothing was found, ret will be null
	if( !pMap )
	{
	  MessageBox( 0, "Map not found!", name, 0 );
	  exit( 0 );
	}
	
	//Return pointer to the map
	return pMap;
};

float GetSpriteVectorX(Sprite* pSprite)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"GetSpriteVectorX");
#endif

	//get the current X component of motion
	return pSprite->DirectionX() * pSprite->Speed();
};

Text * FindText(char * name)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"FindText");
#endif

	//FindText - Return pointer to text object by name of name if it exists
	
	//Use text search to search through all texts in the game
	Text* pText = Text::Search( name );
	
	//If nothing was found, ret will be null
	if( !pText )
	{
	  MessageBox( 0, "Text not found.", name, 0 );
	  exit( 0 );
	}
	
	//Return pointer to the text
	return pText;
};

ParticleSystem * FindParticleSystem(char * name)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"FindParticleSystem");
#endif

	//FindParticleSystem - Return pointer to ParticleSystem object by name of name 
	//  if it exists
	
	//Use ParticleSystem search to search through all ParticleSystems in the game
	ParticleSystem* pParticleSystem = ParticleSystem::Search( name );
	
	//If nothing was found, ret will be null
	if( !pParticleSystem )
	{
	  MessageBox( 0, "ParticleSystem not found.", name, 0 );
	  exit( 0 );
	}
	
	//Return pointer to the ParticleSystem
	return pParticleSystem;
};

float GetSpriteVectorY(Sprite* pSprite)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"GetSpriteVectorY");
#endif

	//get the current Y component of motion
	return pSprite->DirectionY() * pSprite->Speed();
};

Sprite * SpriteCopy(char *masterName, char *newName, int xPos, int yPos, float angle, float speed)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"SpriteCopy");
#endif

	//SpriteCopy - Returns a pointer to a sprite created from a master sprite
	Sprite* pMasterSprite = NULL;
	pMasterSprite = FindSprite( masterName );
	
	//Clone a new sprite from the master sprite
	Sprite * pNewSprite = NULL;
	pNewSprite = pMasterSprite->CreateSprite();
	
	//Change the sprite's name, position, speed, angle, and usage state
	pNewSprite->Unused( false );
	pNewSprite->Name( newName );
	pNewSprite->WorldPosition( xPos, yPos );
	pNewSprite->VectorAngle( angle );
	pNewSprite->Speed( speed );
	
	//Return the pointer to the new sprite
	return pNewSprite;
};

