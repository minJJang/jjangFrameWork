#pragma once


class dx9Renderer : public resource
{
public:
	dx9Renderer();
	~dx9Renderer();

public:
	HRESULT onRelease();
	HRESULT onInit(HWND hWnd);
	HRESULT onDestroy();
	HRESULT onLostDevice();


public:
	void setWindowMode(bool bWindow) { _windowMode = bWindow; }
	bool getWindowMode() { return _windowMode; }

private:
	HRESULT createD3D9();

private:
	IDirect3DDevice9* _deviceDX9;
	IDirect3D9* _D3D9;

	bool _windowMode;
};