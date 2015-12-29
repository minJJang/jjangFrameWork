#pragma once

// only window!
class app
{
public:
	app(HINSTANCE hInst, int nShow);
	~app();

public:
	static LRESULT CALLBACK WndProc( HWND, UINT, WPARAM, LPARAM );

	HRESULT init( int wid, int hei );
	HRESULT createDevice();

private:
	HWND hWnd;
	int nCmdShow;
	HINSTANCE hInstance;
	int width;
	int height;


public:
	static d3d11Device gDevice;
};