#pragma once

class window
{
public:
	window();
	~window();

	HRESULT onInit();
	
private:
	HWND hWnd;
	HINSTANCE hInstance;

	UINT _width;
	UINT _height;
};