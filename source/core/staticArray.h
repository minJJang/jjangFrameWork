#pragma once


template <typename T>
class staticArray
{
public:
	staticArray(unsigned int size):
	_size(size)
	{
		_buffer.resize(size);

		for (unsigned int i = 0; i < size; i++)
			_removeCacheIndex.insert(std::make_pair(&(_buffer[i]), i));
	}

	~staticArray()
	{

	}

public:
	T* get()
	{
		return NULL;
	}

	void remove(T* val)
	{

	}

private:
	unsigned int _size;
	unsigned int _dirtyEndIndex;
	
	std::vector<T> _buffer;
	std::list<unsigned int> _emptyIndex;
	std::map<T*, unsigned int> _removeCacheIndex;
};