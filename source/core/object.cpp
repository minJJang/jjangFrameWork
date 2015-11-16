#include "stdafx.h"
#include "object.h"

object::object() :
_refCount(0)
{

}

object::~object()
{
	if (_refCount != 0)
	{
		_ASSERT(0);
	}
}

void object::increaseRC()
{
	++_refCount;
}

void object::decreaseRC()
{
	--_refCount;

	if (_refCount == 0)
		delete this;
}

int object::getRC()
{
	return _refCount;
}