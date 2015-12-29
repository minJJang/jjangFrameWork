#include "stdafx.h"
#include "resource.h"

resource::resource()
{

}

resource::~resource()
{

}

HRESULT resource::init()
{
	onInit();
	return S_OK;
}

bool resource::onInit()
{
	return true;
}

HRESULT resource::release()
{
	onRelease();
	return S_OK;
}

bool resource::onRelease()
{
	return true;
}