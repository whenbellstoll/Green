                                                                            (c:\game projects\greenrepo\green\fun.icomyGame->LevelName("Game");                   Green              C:\Borland\BCC55\Bin\bcc32.exe                          Title   GameFACE   SMILE                      ;c:\game projects\greenrepo\green\Art Assets\Actors\Face.bmpFace           P   P                                   P   P                  >�9         �   �                       GREENPARTICLE   GREEN                      <c:\game projects\greenrepo\green\Art Assets\Actors\green.bmpgreen           &                                      &                     >�9         L                          GreenParticleManager�GreenParticleLD * pG = GetGreenParticleLD(This);
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
                GetSpriteVectorXY//get the current X component of motion
return pSprite->DirectionX() * pSprite->Speed();'float GetSpriteVectorX(Sprite* pSprite)SetSpriteVectorX�  //set the new X component of motion
float dy = pSprite->DirectionY() * pSprite->Speed();

pSprite->VectorDirection( speed, dy );
pSprite->Speed( sqrt( ( speed * speed ) + ( dy * dy ) ) );3void SetSpriteVectorX(Sprite* pSprite, float speed)GetSpriteVectorYY//get the current Y component of motion
return pSprite->DirectionY() * pSprite->Speed();'float GetSpriteVectorY(Sprite* pSprite)SetSpriteVectorY�//set the new Y component of motion
float dx = pSprite->DirectionX() * pSprite->Speed();

pSprite->VectorDirection( dx, speed );
pSprite->Speed( sqrt( ( speed * speed ) + ( dx * dx ) ) );3void SetSpriteVectorY(Sprite* pSprite, float speed)
SpriteCopy�7//SpriteCopy - Returns a pointer to a sprite created from a master sprite
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
return pNewSprite;bSprite * SpriteCopy(char *masterName, char *newName, int xPos, int yPos, float angle, float speed)
FindSprite�s//FindSprite - Return pointer to sprite by name of name if it exists

//Use sprite search to search through all sprites in the game
Sprite* pSprite = Sprite::Search( name );

//If nothing was found, return will be null
if( !pSprite )
{
  MessageBox( 0, "You broke the gosh darn game", name, 0 );
  exit( 0 );
}

//Return pointer to the sprite
return pSprite; Sprite * FindSprite(char * name)FindText�V//FindText - Return pointer to text object by name of name if it exists

//Use text search to search through all texts in the game
Text* pText = Text::Search( name );

//If nothing was found, ret will be null
if( !pText )
{
  MessageBox( 0, "Text not found.", name, 0 );
  exit( 0 );
}

//Return pointer to the text
return pText;Text * FindText(char * name)FindMap�K//FindMap - Return pointer to map object by name of name if it exists

//Use map search to search through all maps in the game
Map* pMap = Map::Search( name );

//If nothing was found, ret will be null
if( !pMap )
{
  MessageBox( 0, "Map not found!", name, 0 );
  exit( 0 );
}

//Return pointer to the map
return pMap;Map * FindMap(char * name)	FindAlarm�a//FindAlarm - Return pointer to alarm object by name of name if it exists

//Use alarm search to search through all alarms in the game
Alarm* pAlarm = Alarm::Search( name );

//If nothing was found, ret will be null
if( !pAlarm )
{
  MessageBox( 0, "Alarm not found.", name, 0 );
  exit( 0 );
}

//Return pointer to the alarm
return pAlarm;Alarm * FindAlarm(char * name)FindParticleSystem��//FindParticleSystem - Return pointer to ParticleSystem object by name of name 
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
return pParticleSystem;0ParticleSystem * FindParticleSystem(char * name)SpriteVectorAdd��//SpriteVectorAdd - Adds vector components to sprite's velocity

//Get the old denormalized
float oldX = pSprite->DirectionX() * pSprite->Speed();
float oldY = pSprite->DirectionY() * pSprite->Speed();

//Add the new components
oldX += deltaX;
oldY += deltaY;

//Set the new vector direction
pSprite->VectorDirection( oldX, oldY );

//And set the new speed
pSprite->Speed( sqrt( ( oldX * oldX) + ( oldY * oldY ) ) );Avoid SpriteVectorAdd(Sprite* pSprite, float deltaX, float deltaY)SpriteCopy2��//SpriteCopy - Returns a pointer to a sprite created from a master sprite
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
return pNewSprite;ISprite * SpriteCopy2(char *masterName, char *newName, int xPos, int yPos)   �                          �  �  <       �                                          ���          ���                       ���          ���                 ����    X                          �  �  <                                 2        2       ���  2       ���      2        2       ���  2       ���           �                                 :c:\game projects\greenrepo\green\Art Assets\Maps\Title.bmptitle                  X                     ��� �                                                    :C:\Game Projects\GreenRepo\Green\Art Assets\Maps\Title.bmpnetwork                  X                     ��� �                                       GreenManagerGreenManager89656502208                            5  �                                         �A       (T) GreenParticleManager                                                                                                                      GreenParticleLD                  masterGreenmasterGreen89661041221                                                                        �A                                                                                                                                  GreenParticleLD   CountP� int�3 �
�                   0 