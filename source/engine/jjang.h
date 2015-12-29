#pragma once

class jjang
{
public:
	jjang();
	~jjang();

public:
	HRESULT init();
	HRESULT createWindow();
	HRESULT createRenderer();

private:
	//window* _window;
};