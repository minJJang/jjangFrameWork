#pragma once

class gameObject : public object
{
public:
	declTypeName(object);

	gameObject();
	virtual ~gameObject();

public:
	BOOL addComponent(component* pComp);
	BOOL removeComponent( componentName compName );
	component* findComponent( componentName compName );

protected:
	DX_XMFLOAT3* pos;
	DX_XMFLOAT3* rotation;
	DX_XMFLOAT3* scale;

	DX_XMMATRIX* matrix;


private:
	std::list< component* > components;

};