#pragma once

class object
{
public:
	CLASS_TE(object);
	object();
	virtual ~object();

	void increaseRC();
	void decreaseRC();
	int getRC();

private:
	int _refCount;
};