#include "stdafx.h"
#include "renderComponent.h"

renderComponent::renderComponent()
{

}

renderComponent::~renderComponent()
{

}

void renderComponent::update( float fDelta )
{

}

void renderComponent::onCreate()
{

}

void renderComponent::onRelease()
{

}

void renderComponent::onActive()
{

}

void renderComponent::onDeActive()
{

}

void renderComponent::setMove(XMFLOAT3* pMove)
{
	offset->_data = *pMove;
}

void renderComponent::setOffset(XMFLOAT3* offset)
{
	move->_data = *offset;
}

void renderComponent::setBound(float bnd)
{
	fBound = bnd;
}