#pragma once

template<typename T>
class staticAllocator
{
public:
	staticAllocator() : _curEndBufferIndex(0)
	{

	}

	virtual ~staticAllocator(){};

	void setBufferSize(unsigned int len)
	{
		_buffer.resize(len);

		for (unsigned int i = 0; i < _buffer.size(); i++)
			_access.insert( std::make_pair( &(_buffer[i]), i) );
	}

	T* get()
	{
		if(	_emptyIndex.size() == 0 && _curEndBufferIndex == _buffer.size() )
			return NULL;

		T* pGet = NULL;
		if( _emptyIndex.size() )
		{
			std::list<T*>::iterator itr = _emptyIndex.begin();
			std::map<T*, unsigned int>::iterator itrFind = _access.find( *itr );
			pGet = &(_buffer[itrFind->second]);
			_emptyIndex.pop_front();
		}
		else
		{
			pGet = &_buffer[_curEndBufferIndex];
			_curEndBufferIndex++;
		}

		return pGet;
	}

	BOOL release(T* val)
	{
		_emptyIndex.push_back(val);
		return TRUE;
	}

private:
	std::vector<T> _buffer;
	std::list<T*> _emptyIndex;
	std::map<T*, unsigned int> _access;
	
	unsigned int _curEndBufferIndex;
};



class staticAllocatorManager
{
public:
	staticAllocatorManager() {}
	~staticAllocatorManager() {}

public:
	static staticAllocator<DX_XMFLOAT3> pos;
	static staticAllocator<DX_XMFLOAT3> rotation;
	static staticAllocator<DX_XMFLOAT3> scale;

	static staticAllocator<DX_XMMATRIX> matrix;
};

#define allocInit(allocType) allocType = staticAllocatorManager::allocType.get()
#define allocRelease(allocType) staticAllocatorManager::allocType.release(allocType)