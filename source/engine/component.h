#pragma once

class gameObject;

class component : public object
{
public:
	declCompName(component);
	declCompFamilyName(cf_none)

	component();
	virtual ~component();

public:
	virtual void update( float fDelta );

	void setParent(gameObject* pParent );

	//event....
	virtual void onCreate();
	virtual void onRelease();
	virtual void onActive();
	virtual void onDeActive();

private:
	gameObject* parentGameObject;
};