#include "stdafx.h"
#include "gameObject.h"

gameObject::gameObject()
{
	allocInit(pos);
 	allocInit(rotation);
 	allocInit(scale);
 	allocInit(matrix);
}

gameObject::~gameObject()
{
 	allocRelease(pos);
 	allocRelease(rotation);
 	allocRelease(scale);
 	allocRelease(matrix);
}

BOOL gameObject::addComponent( component* pComp )
{
	components.push_back( pComp );
	return TRUE;
}

BOOL gameObject::removeComponent( componentName compName )
{
	std::list< component* >::iterator itr = components.begin();
	for ( ; itr != components.end(); itr++)
	{
		if (compName == (*itr)->getCompName() )
			components.erase(itr);

	}
	return TRUE;
}

component* gameObject::findComponent( componentName compName )
{
	std::list< component* >::iterator itr = components.begin();
	for (; itr != components.end(); itr++)
	{
		if (compName == (*itr)->getCompName())
			return *itr;

	}
	return NULL;
}