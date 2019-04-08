#ifndef _LOCALDATA_H_
#define _LOCALDATA_H_

class GreenParticleLD : public node
{
public:
	GreenParticleLD();
	void* operator new(size_t);
	void operator delete(void*);
	node* Clone();
	void Save(File&);
	void Load(File&);

	int Count;
	DYNCREATED
};
extern GreenParticleLD* GetGreenParticleLD(node* This);

#endif // _LOCALDATA_H
