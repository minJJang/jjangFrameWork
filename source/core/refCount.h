#pragma once


class refCount
{
public:
	refCount();

	virtual ~refCount();

	void addRef();

	void release();
	
protected:
	int _refCount;
};