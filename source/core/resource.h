#pragma once

#include "refCount.h"

class resource
{
public:
	resource();
	virtual ~resource();

public:
	virtual HRESULT onRelease() { return S_OK; }
	virtual HRESULT onInit() { return S_OK; }
};