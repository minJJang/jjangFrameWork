#include "stdafx.h"
#include "refCount.h"

refCount::refCount() :
_refCount(0)
{

}

refCount::~refCount()
{
	if (_refCount != 0)
	{
		//assert!
	}
}

void refCount::addRef()
{
	_refCount++;
}

void refCount::release()
{
	_refCount--;

	if (_refCount < 0)
	{
		//assert!
	}
}
