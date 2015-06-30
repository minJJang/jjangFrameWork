#pragma once

template <typename T>
class staticArray
{
public:
	staticArray(unsigned int size):
	_size(size),
	_dirtyEndIndex(0)
	{
		_buffer = new T[size];
		memset(_buffer, 0, sizeof(T)*size);

		for (unsigned int i = 0; i < size; i++)
			_removeCacheIndex.insert( std::make_pair(&(_buffer[i]), i) );
	}

	~staticArray()
	{
		delete[] _buffer;
	}

public:
	T* get()
	{
		unsigned int index = 0;

		if (_emptyIndex.size())
		{
			index = _emptyIndex.back();
			_emptyIndex.pop_back();
			return &(_buffer[index]);

		}

		if (_dirtyEndIndex < _size)
		{
			index = _dirtyEndIndex;
			_dirtyEndIndex++;
			return &(_buffer[index]);
		}
		
		return NULL;
	}

	void remove(T* val)
	{
		std::map<T*, unsigned int>::iterator itr = _removeCacheIndex.find(val);
		_emptyIndex.push_back(itr->second);
	}

private:
	unsigned int _size;
	unsigned int _dirtyEndIndex;
	
	T* _buffer;
	std::list<unsigned int> _emptyIndex;
	std::map<T*, unsigned int> _removeCacheIndex;
};