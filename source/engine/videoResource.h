#pragma once

class videoResource : public object
{
	declTypeName(videoResource)
public:
	videoResource();
	virtual ~videoResource();

	virtual HRESULT createResource() = 0;
	virtual HRESULT releaseResource() = 0;
	virtual void* lock() = 0;
};