#pragma once

template < typename T > class SP
{
private:
	T* pData;       // pointer

public:
	SP() : pData(0)
	{
	}

	SP(T* pValue) : pData(pValue)
	{
		pData->increaseRC();
	}

	SP(const SP<T>& sp) : pData(sp.pData)
	{
		pData->increaseRC();
	}

	~SP()
	{
		pData->decreaseRC();
	}

	T& operator* ()
	{
		return *pData;
	}

	T* operator-> ()
	{
		return pData;
	}

	SP<T>& operator = (const SP<T>& sp)
	{
		if (this != &sp)
		{
			pData = sp.pData;
			pData->increaseRC();
		}
		return *this;
	}
};