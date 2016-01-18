#pragma once

class vertexResource : public videoResource
{
	declTypeName(vertexResource);
public:
	vertexResource();
	virtual ~vertexResource();

	virtual HRESULT createResource();
	virtual HRESULT releaseResource();
	virtual void* lock();

	void setVertexCount(unsigned int count, unsigned int stride );

private:
	D3D11_BUFFER_DESC bufferDesc;
	D3D11_SUBRESOURCE_DATA subData;
	ID3D11Buffer* buffer;

	unsigned int vertexCount;
	unsigned char stride;
};
