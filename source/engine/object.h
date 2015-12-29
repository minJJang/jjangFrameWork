#pragma once

class object
{
public:
	declTypeName(object);

	object() {}
	virtual ~object() {}

	void increaseRC()
	{
		++_refCount;
	}

	void decreaseRC()
	{
		--_refCount;

		if (_refCount == 0)
			delete this;
	}

	int getRC()
	{
		return _refCount;
	}

private:
	unsigned int _refCount;
};