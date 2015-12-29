#pragma once

enum resourceState
{
	rs_none = 0,
	rs_loadComplete = 1,
	rs_loading = 3,
	rs_dirty = 5,
};

class resource
{
	declTypeName(resource)

public:
	resource();
	virtual ~resource();

public:
	virtual HRESULT init();
	virtual bool onInit();

	virtual HRESULT release();
	virtual bool onRelease();

private:
	resourceState state;
};