#include "stdafx.h"
#include "Headers.h"

#include "LocalDataFun.h"

MemoryPool GreenParticleLDMemoryPool(sizeof(GreenParticleLD));
DYNCREATEI(GreenParticleLD);
GreenParticleLD::GreenParticleLD()
{
	Count = 0;

}

void* GreenParticleLD::operator new(size_t size)
{
	return GreenParticleLDMemoryPool.Alloc();
}

void GreenParticleLD::operator delete(void* pVoid)
{
	GreenParticleLDMemoryPool.Free(pVoid);
}

node* GreenParticleLD::Clone()
{
	return new GreenParticleLD(*this);
}

void GreenParticleLD::Save(File& f)
{
	f.Write(Count);

}

void GreenParticleLD::Load(File& f)
{
	f.Read(Count);

}

GreenParticleLD* GetGreenParticleLD(node* This)
{
	return (GreenParticleLD*)This->local;
}

