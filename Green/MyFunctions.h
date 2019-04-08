#ifndef _MYFUNCTIONS_H_
#define _MYFUNCTIONS_H_

extern void SpriteVectorAdd(Sprite* pSprite, float deltaX, float deltaY);
extern Alarm * FindAlarm(char * name);
extern Sprite * FindSprite(char * name);
extern Sprite * SpriteCopy2(char *masterName, char *newName, int xPos, int yPos);
extern void SetSpriteVectorY(Sprite* pSprite, float speed);
extern void SetSpriteVectorX(Sprite* pSprite, float speed);
extern Map * FindMap(char * name);
extern float GetSpriteVectorX(Sprite* pSprite);
extern Text * FindText(char * name);
extern ParticleSystem * FindParticleSystem(char * name);
extern float GetSpriteVectorY(Sprite* pSprite);
extern Sprite * SpriteCopy(char *masterName, char *newName, int xPos, int yPos, float angle, float speed);

#endif
