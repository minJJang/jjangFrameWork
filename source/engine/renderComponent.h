#pragma once

class renderComponent : public component
{
public:
	declCompName(renderComponent)
	declCompFamilyName(cf_render)

	renderComponent();
	virtual ~renderComponent();

public:
	virtual void update( float fDelta );

	virtual void onCreate();
	virtual void onRelease();
	virtual void onActive();
	virtual void onDeActive();

public:
	void setMove(XMFLOAT3* pMove);
	void setOffset(XMFLOAT3* offset);
	void setBound(float bnd);

protected:
	float fBound;
	SA<XMFLOAT3>* offset;
	SA<XMFLOAT3>* move;
};