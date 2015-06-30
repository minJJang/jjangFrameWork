#pragma once

class window
{
public:
	window();
	~window();

public:
	HRESULT init(unsigned int x, unsigned int y, std::wstring);

public:
	HRESULT changeSize(unsigned int wid, unsigned int hei);
	HRESULT changeFocus(bool bFocus);

private:
	HWND _hWnd;
	HINSTANCE _hInstance;
};