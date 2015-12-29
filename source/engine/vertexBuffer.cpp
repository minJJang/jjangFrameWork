#include "stdafx.h"
#include "vertexBuffer.h"

vertexBuffer::vertexBuffer()
{

}

vertexBuffer::~vertexBuffer()
{

}

bool vertexBuffer::onInit()
{
	app::gDevice.getDevice()->CreateBuffer(&bufferDesc, &subData, &buffer);
	return true;
}

bool vertexBuffer::onRelease()
{
	return true;
}