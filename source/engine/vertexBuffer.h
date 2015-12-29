#pragma once

class vertexBuffer : public videoResource
{
	declTypeName(vertexBuffer)
public:
	vertexBuffer();
	virtual ~vertexBuffer();

public:
	virtual bool onInit();
	virtual bool onRelease();

	//bool lock( int strideSize, int count, void* pData );
	D3D11_BUFFER_DESC* getDesc();

	void setData(void* in);

private:
	unsigned int vertexCount;
	//vertexInputLayoutManager layout;
	D3D11_BUFFER_DESC bufferDesc;
	D3D11_SUBRESOURCE_DATA subData;
	ID3D11Buffer* buffer;

	void* data;
	unsigned int dataLen;
};